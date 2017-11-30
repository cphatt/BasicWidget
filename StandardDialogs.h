#ifndef STANDARDDIALOGS_H
#define STANDARDDIALOGS_H
#include "QDialog"
#include "QtGui"
#include "QFrame"
class StandardDialogs : public QDialog
{
    Q_OBJECT
public:
    StandardDialogs(QWidget *parent=0, Qt::WindowFlags f=0);
    ~StandardDialogs();

    QGridLayout *layout;
    QPushButton *filePushButton;
    QPushButton *colorPushButton;
    QPushButton *fontPushButton;
    QLineEdit *fileLineEdit;
    QLineEdit *fontLineEdit;
    QFrame *colorFrame;

 private slots:
    void slotOpenFileDlg();
    void slotOpenColorDlg();
    void slotOpenFontDlg();
};

#endif // STANDARDDIALOGS_H
