#include "ShowMessage.h"
#include <QDebug>
ShowMessage::ShowMessage(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle("MessageDialog");
    button1 = new QPushButton("Question");
    button2 = new QPushButton("Information");
    button3 = new QPushButton("Warning");
    button4 = new QPushButton("Critical");
    button5 = new QPushButton("Abort");
    button6 = new QPushButton("Abort Qt");
    button7 = new QPushButton("Custom");

    layout = new QGridLayout(this);
    layout->addWidget(button1, 0, 0);
    layout->addWidget(button2, 0, 1);
    layout->addWidget(button3, 1, 0);
    layout->addWidget(button4, 1, 1);
    layout->addWidget(button5, 2, 0);
    layout->addWidget(button6, 2, 1);
    layout->addWidget(button7, 3, 0);

    layout->setMargin(15);
    layout->setSpacing(10);

    connect(button1, SIGNAL(clicked()), this,SLOT(slotButton1()));
    connect(button2, SIGNAL(clicked()), this,SLOT(slotButton2()));
    connect(button3, SIGNAL(clicked()), this,SLOT(slotButton3()));
    connect(button4, SIGNAL(clicked()), this,SLOT(slotButton4()));
    connect(button5, SIGNAL(clicked()), this,SLOT(slotButton5()));
    connect(button6, SIGNAL(clicked()), this,SLOT(slotButton6()));
    connect(button7, SIGNAL(clicked()), this,SLOT(slotButton7()));
    setVisible(true);

}

void  ShowMessage::slotButton1(){
    switch (QMessageBox::question(this,"Question","It's end,begain?",
                                  QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok)) {
    case QMessageBox::Ok:
        qDebug() << "Question OK";
        break;
    case QMessageBox::Cancel:
        qDebug() << "Question cancel ";
        break;
    default:
        break;
    }
}
void  ShowMessage::slotButton2(){
    QMessageBox::information(this, "Information", "you are so beatiful");
    return;
}
void  ShowMessage::slotButton3(){
    switch(QMessageBox::warning(this, "warnig","save change to document",
                                QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel,
                                QMessageBox::Save)){
        case QMessageBox::Save:
            qDebug() << "QMessageBox::Save";
            break;
        case QMessageBox::Discard:
            qDebug() << "QMessageBox::Discard";
            break;
        case QMessageBox::Cancel:
            qDebug() << "QMessageBox::Cancel";
            break;
        default:
            break;
    }
}
void  ShowMessage::slotButton4(){
    QMessageBox::critical(this, "Information","tell user a critical error");
    qDebug() << "critical MessageBox";
    return;
}
void  ShowMessage::slotButton5(){
    QMessageBox::about(this, "About", "message box example");
}
void  ShowMessage::slotButton6(){
    QMessageBox::aboutQt(this, "About Qt");
    return;
}
//custom
void  ShowMessage::slotButton7(){
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("custom message box");
    QPushButton *lockButton = customMsgBox.addButton("lock", QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton("Unlock",QMessageBox::ActionRole);
    QPushButton *cancelBbutton = customMsgBox.addButton(QMessageBox::Cancel);

    customMsgBox.setIconPixmap(QPixmap("/images/linuxhat.png"));
    customMsgBox.setText("this is a custom message box");
    customMsgBox.exec();

    if(customMsgBox.clickedButton() == lockButton){

    }else if(customMsgBox.clickedButton() == unlockButton){

    }else if(customMsgBox.clickedButton() == cancelBbutton){

    }
    return;
}
