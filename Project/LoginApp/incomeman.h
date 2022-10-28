#ifndef INCOMEMAN_H
#define INCOMEMAN_H



#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
#include <QPieSeries>

namespace Ui {
class IncomeMan;

}

class IncomeMan : public QDialog
{
    Q_OBJECT

public:
    explicit IncomeMan(QWidget *parent = nullptr);
    ~IncomeMan();

private:
    Ui::IncomeMan *ui;
};


#endif // INCOMEMAN_H


