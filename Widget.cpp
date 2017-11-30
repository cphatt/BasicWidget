#include "Widget.h"
#include "StandardDialogs.h"
#include "Geometry.h"
#include "InputDlg.h"
#include "ShowMessage.h"
#include "Drawer.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
//        StandardDialogs *stand = new StandardDialogs(this);
//    Geometry *g = new Geometry(this);
//    InputDlg *a = new InputDlg(this);
//    ShowMessage *m = new ShowMessage(this);
    Drawer *d = new Drawer(this);
//    setVisible(false);
}

Widget::~Widget()
{

}
