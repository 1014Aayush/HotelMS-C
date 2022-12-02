#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include <staffsearch.h>
#include <roomoccupancy.h>
#include <incomeman.h>
namespace Ui {
class HomePage;
}

class HomePage : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::HomePage *ui;
     Staffsearch *staffSearch;
     roomoccupancy *roomOccupancy;
     IncomeMan *incomeManagement;
};

#endif // HOMEPAGE_H
