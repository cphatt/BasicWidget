#ifndef INPUTDLG_H
#define INPUTDLG_H

#include <QDialog>
#include <QtGui>
class InputDlg : public QDialog
{
    Q_OBJECT
public:
    explicit InputDlg(QWidget *parent = 0);

    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label_name;
    QLabel *label_sex;
    QLabel *label_age;
    QLabel *label_stature;

    QPushButton *button_name;
    QPushButton *button_sex;
    QPushButton *button_age;
    QPushButton *button_stature;

    QGridLayout *layout;

private slots:
    void slotName();
    void slotAge();
    void slotSex();
    void slotStature();
signals:

public slots:

};

#endif // INPUTDLG_H
