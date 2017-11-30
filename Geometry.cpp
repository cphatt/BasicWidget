#include "Geometry.h"

Geometry::Geometry(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle("Geometry");
    xlabel = new QLabel(this);
    ylabel = new QLabel(this);
    wlabel = new QLabel(this);
    hlabel = new QLabel(this);
    geolabel = new QLabel(this);
    rectlabel = new QLabel(this);
    poslabel = new QLabel(this);
    sizelabel = new QLabel(this);
    frameGeoLabel= new QLabel((this));
    layout = new QGridLayout(this);
    layout->addWidget(xlabel,0,0);
    layout->addWidget(ylabel,0,1);
    layout->addWidget(wlabel,1,0);
    layout->addWidget(hlabel,1,1);
    layout->addWidget(geolabel,2,0);
    layout->addWidget(rectlabel,2,1);
    layout->addWidget(poslabel,3,0);
    layout->addWidget(sizelabel,3,1);
    layout->addWidget(frameGeoLabel,4,0);
    layout->setMargin(15);
    layout->setSpacing(100);
    updateLabel();

    setVisible(true);
}

void Geometry::updateLabel(){

   QString temp;
   QString str_x;
   xlabel->setText(str_x.setNum(x()));
   QString str_y;
   ylabel->setText(str_y.setNum(y()));
   QString str_w;
   wlabel->setText(str_w.setNum(width()));
   QString str_h;
   hlabel->setText(str_h.setNum(height()));
   //get frameGeomtry并显示
   QString frameGeo;
   frameGeo = temp.setNum(frameGeometry().x()) + ","+
              temp.setNum(frameGeometry().y()) + ","+
              temp.setNum(frameGeometry().width()) + ","+
              temp.setNum(frameGeometry().height());
   frameGeoLabel->setText(frameGeo);

   //pos
   QString position;
   position = temp.setNum(pos().x()) + ","+
              temp.setNum(pos().y());
   poslabel->setText(position);

   //geo
   QString Geo;
   Geo = temp.setNum(geometry().x()) + ","+
          temp.setNum(geometry().y()) + ","+
          temp.setNum(geometry().width()) + ","+
          temp.setNum(geometry().height());
   geolabel->setText(Geo);

   //rect
   QString rects;
   rects = temp.setNum(rect().x()) + ","+
          temp.setNum(rect().y()) + ","+
          temp.setNum(rect().width()) + ","+
          temp.setNum(rect().height());
   rectlabel->setText(rects);

   //size

   QString sizes;
   sizes = temp.setNum(size().width()) + ","+
              temp.setNum(size().height());
   sizelabel->setText(sizes);
}

void Geometry::moveEvent(QMoveEvent *){
    updateLabel();
}
void Geometry::resizeEvent(QResizeEvent *){
    updateLabel();
}
