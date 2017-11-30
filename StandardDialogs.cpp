#include "StandardDialogs.h"

StandardDialogs::StandardDialogs(QWidget *parent, Qt::WindowFlags f)
    :QDialog(parent, f)
{
    setWindowTitle("Standrd Dialog");
    layout = new QGridLayout(this);
    filePushButton = new QPushButton;
    filePushButton->setText("File Dialog");
    colorPushButton = new QPushButton;
    colorPushButton->setText("Color Dialog");
    fontPushButton = new QPushButton;
    fontPushButton->setText("font Dialog");

    fileLineEdit = new QLineEdit;
    fontLineEdit = new QLineEdit;
    fontLineEdit->setText("hello world");
    colorFrame = new QFrame;
    colorFrame->setFrameShape(QFrame::Box);
    colorFrame->setAutoFillBackground(true);

    layout->addWidget(filePushButton, 0, 0);
    layout->addWidget(fileLineEdit, 0, 1);
    layout->addWidget(colorPushButton, 1,0);
    layout->addWidget(colorFrame,1,1);
    layout->addWidget(fontPushButton,2,0);
    layout->addWidget(fontLineEdit, 2,1);

    layout->setMargin(15);
    layout->setSpacing(10);

    connect(filePushButton, SIGNAL(clicked()), this, SLOT(slotOpenFileDlg()));
    connect(colorPushButton,SIGNAL(clicked()),this, SLOT(slotOpenColorDlg()));
    connect(fontPushButton,SIGNAL(clicked()),this,SLOT(slotOpenFontDlg()));

    setVisible(true);
}

StandardDialogs::~StandardDialogs(){

}

void StandardDialogs::slotOpenColorDlg(){

    QColor color = QColorDialog::getColor(Qt::blue);
    if(color.isValid()){
        colorFrame->setPalette(QPalette(color));
    }
}

void StandardDialogs::slotOpenFileDlg(){
    //return the name of file you selected
    QString s = QFileDialog::getOpenFileName(this,
                                             "open this dialog",
                                             "/",
                                             "C++ files(*.cpp)::C files(*.c)");
    fileLineEdit->setText(s.toAscii());
}

void StandardDialogs::slotOpenFontDlg(){
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok){
        fontLineEdit->setFont(font);
    }
}
