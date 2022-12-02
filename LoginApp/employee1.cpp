#include "employee1.h"
#include "staffsearch.h"
#include "ui_employee1.h"
#include <QSqlDatabase>
#include <string.h>
#include <string>
//#include <QPixmap>

employee1::employee1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employee1)
{
    ui->setupUi(this);
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Users/saroj/Desktop/SemProject2-main/SemProject-main/Project/LoginApp/database/datab.sqlite");
    extern QString name;

    if(sqlitedb.open())
    {
        QSqlQuery query (QSqlDatabase::database("datab"));
        query.prepare("select *from staff where name=:name");
        query.bindValue(":name",name);

        if(query.exec())
         {
            while(query.next())
            {
                ui->name->setText(query.value(1).toString());
                ui->position->setText(query.value(2).toString());
                ui->number->setText(query.value(3).toString());
                ui->email->setText(query.value(4).toString());
                ui->dob->setText(query.value(7).toString());
                ui->gender->setText(query.value(6).toString());
                ui->age->setText(query.value(5).toString());
                ui->salary->setText(query.value(8).toString());


            }

         }


    }

}

employee1::~employee1()
{
    delete ui;
}

void employee1::on_pushButton_clicked()
{
    this-> hide();
    Staffsearch staffsearch;
    staffsearch.setModal(true);
    staffsearch.exec();
}

