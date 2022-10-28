#ifndef ROOMOCCUPANCY_H
#define ROOMOCCUPANCY_H

#include <QDialog>

namespace Ui {
class roomoccupancy;
}

class roomoccupancy : public QDialog
{
    Q_OBJECT

public:
    explicit roomoccupancy(QWidget *parent = nullptr);
    ~roomoccupancy();

private:
    Ui::roomoccupancy *ui;
};

#endif // ROOMOCCUPANCY_H
