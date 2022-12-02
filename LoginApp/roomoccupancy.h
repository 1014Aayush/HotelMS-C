#ifndef ROOMOCCUPANCY_H
#define ROOMOCCUPANCY_H




#include <QDialog>
#include <QWidget>
#include <bookroomdialog.h>
#include <available.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDialog>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>




namespace Ui {
class roomoccupancy;
}

class roomoccupancy : public QDialog
{
    Q_OBJECT

public:
    explicit roomoccupancy(QWidget *parent = nullptr);
    ~roomoccupancy();




private slots:


    void on_Continue_clicked();

    void on_back_clicked();

    void on_pushButton_clicked();

private:
    Ui::roomoccupancy *ui;
    available *aVailable;
    bookroomdialog *bookroomdialog;


};

#endif // ROOMOCCUPANCY_H
