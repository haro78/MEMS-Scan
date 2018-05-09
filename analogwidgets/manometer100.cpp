/***************************************************************************
 *   Copyright (C) 2006-2008 by Tomasz Ziobrowski                          *
 *   http://www.3electrons.com                                             *
 *   e-mail: t.ziobrowski@3electrons.com                                   *
 *                                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include <QtGui>
#include <math.h>
#include <assert.h>

#include "manometer100.h"
#define PI 3.141592653589793238512808959406186204433

//using namespace Qt;
ManoMeter100::ManoMeter100(QWidget *parent)
        : AbstractMeter100(parent)
{
        m_max=300.0;
        m_min=0.0;

	m_maximum=300.0; // First we set manualy to call calcMaxMin 
  	setMinimum(0.0);
	calcMaxMin(); // Extend max and min to have nice step values 

	setValue(0.0);
        setNominal(80.0);
	setCritical(220.0);
	setValueOffset(-100.0);
	setDigitOffset(105.0);
	setSuffix(QString(" [bar]"));
	m_digitFont.setPointSize(20);
	m_valueFont.setPointSize(25);

	// QWidget
        setSizePolicy (QSizePolicy::Expanding, QSizePolicy::Expanding);
        setWindowTitle(tr("Analog Barmeter"));
	resize(311, 311);
	assert(m_max-m_min != 0);
}



void ManoMeter100::initCoordinateSystem(QPainter & painter)
{
        int side = qMin(width(), height());
        // painter initialization
        painter.setRenderHint(QPainter::Antialiasing);
        painter.translate(width() / 2, height() / 2);
        painter.scale(side / 335.0, side / 335.0);
}

void ManoMeter100::paintBackground(QPainter & painter)
{
	static const int scaleTriangle[6] = { -6,141,6,141,0,129 };
	initCoordinateSystem(painter);

        // Painting the shield envelope. A white shield with black scales
        QPen Pen(QColor(0,0,0)); Pen.setWidth(4);
        painter.setPen(Pen);

        QRadialGradient back1(QPointF(0.0,0.0),180.0,QPointF(-35.0,145.0));
	back1.setColorAt(0.0,QColor(250,250,250));
	back1.setColorAt(1.0,QColor(20,20,20));

	QRadialGradient back2(QPointF(0.0,0.0),225.0,QPointF(76.5,135.0));
	back2.setColorAt(0.0,QColor(10,10,10));
	back2.setColorAt(1.0,QColor(250,250,250));

	painter.setBrush(QBrush(back1));
	painter.drawEllipse(-162,-162,324,324);
	painter.setPen(Qt::NoPen);
        painter.setBrush(QBrush(back2));
        painter.drawEllipse(-152,-152,304,304);

        QRadialGradient shield(QPointF(0,0),182,QPointF(-12.0,-15.0));
	shield.setColorAt(0.0,Qt::white);
	shield.setColorAt(0.5,QColor(240,240,240));
	shield.setColorAt(1.0,QColor(215,215,215));


	// internal scale circle 
	painter.setBrush(QBrush(shield));
	painter.setPen(Pen);
	painter.drawEllipse(-142,-142,284,284);

	  painter.setPen(Qt::NoPen);
          // nominal
	  painter.setBrush(QColor(0,200,0));
	  assert(m_max-m_min != 0);
	  int angle = static_cast<int>( (3840 * ( m_nominal - m_min ))/(m_max-m_min) );
	  if (m_min <= m_nominal && m_nominal < m_max )
           painter.drawPie(QRect(-141,-141,282,282),-480,3840 - angle % 5760 );
	  // Critical

	  painter.setBrush(QBrush(Qt::red));
	  angle = static_cast<int>( (3840 * ( m_critical - m_min ))/(m_max-m_min) );
	  if ( m_min <= m_critical && m_critical < m_max  )
	  painter.drawPie(QRect(-141,-141,282,282),-480, 3840 - angle % 5760  ); //-480, 3840*( m_max-m_min - critical()-abs(m_min) )/static_cast<double>(m_max-m_min));
	  // white envelope
	  painter.setBrush(QBrush(shield));
	  painter.drawEllipse(-129,-129,258,258);

        // Setting up at the beginning of the scale

        painter.rotate(60.0);

 	// Drawing a dash scale
	painter.save();
        painter.setBrush(QBrush(Qt::black));
  	int line_length=10;
	for (int i=0;i<41;i++)
	{
	  painter.setPen(Pen);

          if (i % 4) painter.drawLine(0,140,0,140-line_length);
          else {
	    painter.setPen(Qt::NoPen);
	    painter.drawConvexPolygon(QPolygon(3, scaleTriangle));
	  }

	  painter.rotate(6);

	Pen.setWidth(3);

 	  if (i % 2)  line_length=10;
	  else        line_length=5;
	}
	painter.restore();

        // Drawing the scale of a number

	if (true || digitOffset())
        {
          painter.setPen(Qt::black);
          painter.rotate(-60.0);
	  painter.setFont(digitFont());
	  for (int i=0;i<11;i++)
	  {
	    double v = m_min + i*(m_max - m_min)/10.0;
	    if (fabs(v) < 0.000001 ) v = 0.0;
        v = (v < 1000) ? v : v / 1000;
	    QString val = QString("%1").arg(v);
            QSize Size = painter.fontMetrics().size(Qt::TextSingleLine, val);
            painter.save();
	    painter.translate( digitOffset() * cos((6+i)*PI/7.333), digitOffset() * sin((6+i)*PI/7.333));
	    painter.drawText( QPointF( Size.width()/ -2.0,  Size.height() / 4.0), val);
            painter.restore();
	  }
	}



}// paintBackground

void ManoMeter100::paintEvent(QPaintEvent * )
{
	drawBackground();
	QPainter painter(this);
        initCoordinateSystem(painter);
      // --------------------------------------------- ///
	static const int hand[12] = {-4, 0, -1, 129, 1, 129, 4, 0, 8,-50, -8,-50};


        QPainterPath hand_path;
        hand_path.moveTo(QPointF(hand[0],hand[1]));

        for (int i=2;i<10;i+=2)
	 hand_path.lineTo(hand[i],hand[i+1]);

	hand_path.cubicTo ( 8.1,-51.0, 5.0,-48.0,   0.0,-48.0);
	hand_path.cubicTo(  -5.0,-48.0, -8.1,-51.0, -8.0,-50.0);

        // Drawing the pointer
	painter.save();
	painter.rotate(60.0);
	painter.setPen(Qt::NoPen);
	painter.setBrush(QBrush(Qt::black));
   	painter.rotate(  ((  value()-m_min) * 240.0) / static_cast<double> (m_max - m_min) );

	painter.drawPath(hand_path);

	painter.drawEllipse(-10,-10,20,20);


        painter.restore();// Restoration to 60 degree inclination

	// Drawing the displayed value
        if (valueOffset())
        {

	  if (value() >= critical() ) painter.setPen(Qt::red);
	  painter.setFont(valueFont());
          QString Str = prefix() + QString("%1").arg(value()) + suffix();
          QSize Size = painter.fontMetrics().size(Qt::TextSingleLine, Str);
          painter.drawText( QPointF( Size.width() / -2.0,static_cast<int>( 0 - valueOffset())) , Str);
        }
}// paintEvent
