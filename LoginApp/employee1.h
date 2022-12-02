#ifndef EMPLOYEE1_H
#define EMPLOYEE1_H
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QtSql/QSql>
#include <QDebug>
#include <QDialog>

namespace Ui {
class employee1;
}

class employee1 : public QDialog
{
    Q_OBJECT

public:
    explicit employee1(QWidget *parent = nullptr);
    ~employee1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::employee1 *ui;
};

#endif // EMPLOYEE1_H
