#ifndef STAFFMANAGE_H
#define STAFFMANAGE_H

#include <QDialog>

namespace Ui {
class Staffmanage;
}

class Staffmanage : public QDialog
{
    Q_OBJECT

public:
    explicit Staffmanage(QWidget *parent = nullptr);
    ~Staffmanage();

private:
    Ui::Staffmanage *ui;
};

#endif // STAFFMANAGE_H
