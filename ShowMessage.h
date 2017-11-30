#ifndef SHOWMESSAGE_H
#define SHOWMESSAGE_H

#include <QDialog>
#include <QtGui>
class ShowMessage : public QDialog
{
    Q_OBJECT
public:
    explicit ShowMessage(QWidget *parent = 0);
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;

    QGridLayout *layout;

private slots:
    void slotButton1();
    void slotButton2();
    void slotButton3();
    void slotButton4();
    void slotButton5();
    void slotButton6();
    void slotButton7();
signals:

public slots:

};

#endif // SHOWMESSAGE_H
