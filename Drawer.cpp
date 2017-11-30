#include "Drawer.h"

Drawer::Drawer(QWidget *parent) :
    QToolBox(parent)
{
    setWindowTitle("My QQ");

    QGroupBox *groupBox1 = new QGroupBox;

    toolButton1_1 = new QToolButton;
    toolButton1_1->setText("beibei");
    toolButton1_1->setIcon(QPixmap("image"));
    toolButton1_1->setAutoRaise(true);
    toolButton1_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_2 = new QToolButton;
    toolButton1_2->setText("beibei");
    toolButton1_2->setIcon(QPixmap("image"));
    toolButton1_2->setAutoRaise(true);
    toolButton1_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_3 = new QToolButton;
    toolButton1_3->setText("beibei");
    toolButton1_3->setIcon(QPixmap("image"));
    toolButton1_3->setAutoRaise(true);
    toolButton1_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_4 = new QToolButton;
    toolButton1_4->setText("beibei");
    toolButton1_4->setIcon(QPixmap("image"));
    toolButton1_4->setAutoRaise(true);
    toolButton1_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_5 = new QToolButton;
    toolButton1_5->setText("beibei");
    toolButton1_5->setIcon(QPixmap("image"));
    toolButton1_5->setAutoRaise(true);
    toolButton1_5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton2_1 = new QToolButton;
    toolButton2_1->setText("beibei");
    toolButton2_1->setIcon(QPixmap("image"));
    toolButton2_1->setAutoRaise(true);
    toolButton2_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton2_2 = new QToolButton;
    toolButton2_2->setText("beibei");
    toolButton2_2->setIcon(QPixmap("image"));
    toolButton2_2->setAutoRaise(true);
    toolButton2_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton3_1 = new QToolButton;
    toolButton3_1->setText("beibei");
    toolButton3_1->setIcon(QPixmap("image"));
    toolButton3_1->setAutoRaise(true);
    toolButton3_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton3_2 = new QToolButton;
    toolButton3_2->setText("beibei");
    toolButton3_2->setIcon(QPixmap("image"));
    toolButton3_2->setAutoRaise(true);
    toolButton3_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    QVBoxLayout* layout = new QVBoxLayout(groupBox1);
    layout->setMargin(10);
    layout->setAlignment(Qt::AlignHCenter);
    layout->addWidget(toolButton1_1);
    layout->addWidget(toolButton1_2);
    layout->addWidget(toolButton1_3);
    layout->addWidget(toolButton1_4);
    layout->addWidget(toolButton1_5);
    layout->addStretch();

    QGroupBox *groupBox2 = new QGroupBox;
    QVBoxLayout* layout2 = new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolButton2_1);
    layout2->addWidget(toolButton2_2);
    layout2->addStretch();

    QGroupBox *groupBox3= new QGroupBox;
    QVBoxLayout* layout3 = new QVBoxLayout(groupBox3);
    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignHCenter);
    layout3->addWidget(toolButton3_1);
    layout3->addWidget(toolButton3_2);
    layout3->addStretch();

    this->addItem((QWidget*)groupBox1, "my friends");
    this->addItem((QWidget*)groupBox2, "stranger");
    this->addItem((QWidget*)groupBox3, "blacklist");

}
