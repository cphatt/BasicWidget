#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <QDialog>
#include <QtGui>
class Geometry : public QDialog
{
    Q_OBJECT
public:
    explicit Geometry(QWidget *parent = 0);
    QLabel *xlabel;
    QLabel *ylabel;
    QLabel *wlabel;
    QLabel *hlabel;
    QLabel *poslabel;
    QLabel *geolabel;
    QLabel *rectlabel;
    QLabel *sizelabel;
    QLabel *frameGeoLabel;
    QGridLayout *layout;
    void updateLabel();

protected:
    void moveEvent(QMoveEvent *);
    void resizeEvent(QResizeEvent *);
signals:

public slots:

};

#endif // GEOMETRY_H
