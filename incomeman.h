#ifndef INCOMEMAN_H
#define INCOMEMAN_H

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDialog>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>
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

private slots:
    void on_pushButton_clicked();

private:
    Ui::IncomeMan *ui;
};


#endif // INCOMEMAN_H


