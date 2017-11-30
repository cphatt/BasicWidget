#include "InputDlg.h"

InputDlg::InputDlg(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle("Input Dialog");
    label1 = new QLabel("name");
    label2 = new QLabel("age");
    label3 = new QLabel("sex");
    label4 = new QLabel("stature");

    label_name = new QLabel("liming");
    label_name->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label_age = new QLabel("16");
    label_age->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label_sex = new QLabel("boy");
    label_sex->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label_stature = new QLabel("163.5");
    label_stature->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    button_name = new QPushButton("...");
//    button_name->setIcon(QIcon(""));
    button_age = new QPushButton("...");
    button_sex = new QPushButton("...");
    button_stature= new QPushButton("...");

    layout = new QGridLayout(this);
    layout->addWidget(label1, 0, 0);
    layout->addWidget(label2, 1, 0);
    layout->addWidget(label3, 2, 0);
    layout->addWidget(label4, 3, 0);

    layout->addWidget(label_name, 0, 1);
    layout->addWidget(label_age, 1, 1);
    layout->addWidget(label_sex, 2, 1);
    layout->addWidget(label_stature, 3, 1);

    layout->addWidget(button_name, 0, 2);
    layout->addWidget(button_age, 1, 2);
    layout->addWidget(button_sex, 2, 2);
    layout->addWidget(button_stature, 3, 2);

    layout->setMargin(15);
    layout->setSpacing(20);

    connect(button_name,SIGNAL(clicked()),this, SLOT(slotName()));
    connect(button_age,SIGNAL(clicked()),this, SLOT(slotAge()));
    connect(button_sex,SIGNAL(clicked()),this, SLOT(slotSex()));
    connect(button_stature,SIGNAL(clicked()),this, SLOT(slotStature()));
    setVisible(true);
}

void InputDlg::slotName(){
    bool ok;
    QString name = QInputDialog::getText(this, "UserName", "Input your name",
                                         QLineEdit::Normal,label_name->text(),&ok);
    if(ok && !name.isEmpty())
        label_name->setText(name);
}

void InputDlg::slotSex(){
    QStringList list;
    list << "male" << "man";
    bool ok;
    QString sex = QInputDialog::getItem(this, "Sex", "choose sex:",
                                        list, 0,false, &ok);
    if(ok)
        label_sex->setText(sex);
}

void InputDlg::slotAge(){
    bool ok;
    int age = QInputDialog::getInteger(this, "User Age", "Input Age",
                                       label_age->text().toInt(),0,150,1,&ok);
    if(ok)
        label_age->setText(QString("%1").arg(age));
}

void InputDlg::slotStature(){
    bool ok;
    double Stature = QInputDialog::getDouble(this, "Stature", "Input Stature",
                                       label_stature->text().toDouble(),0,230.00,1,&ok);
    if(ok)
        label_stature->setText(QString("%1").arg(Stature));
}
