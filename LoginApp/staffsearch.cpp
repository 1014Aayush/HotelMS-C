#include "staffsearch.h"
#include "employee1.h"
#include "ui_staffsearch.h"
#include <homepage.h>
#include <QMessageBox>
QString name;



Staffsearch::Staffsearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Staffsearch)
{
    ui->setupUi(this);
}

Staffsearch::~Staffsearch()
{
    delete ui;
}

void Staffsearch::on_SearchButton_clicked()
{
    /*staffManage= new Staffmanage(this);
    this->hide();
    staffManage->show();*/
    name=ui->lineEdit->text();

    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Users/saroj/Desktop/SemProject2-main/SemProject-main/Project/LoginApp/database/datab.sqlite");

    if(sqlitedb.open())
    {
        QSqlQuery query(QSqlDatabase::database("datab"));
        query.prepare("SELECT * FROM staff WHERE name=:name");
        query.bindValue(":name",name);

        if (query.exec())
        {
            //QMessageBox ::information(this,"opened","opened");

            while (query.next())
            {
                QString namefromDB=query.value(1).toString();

                if(namefromDB==name)
                {
                   // QMessageBox ::information(this,"opened","opened");

                    this->hide();
                    employee1 employee;
                    employee.setModal(true);
                    employee.exec();

                }
                else
                {
                    QMessageBox ::information(this,"not opened","not opened");

                }
            }
        }


    }
   /* QString username =ui->lineEdit->text();

    if (username == "ram")
    {

        this->hide();
        employee1 employee;
        employee.setModal(true);
        employee.exec();

    }*/

}


void Staffsearch::on_pushButton_clicked()
{
    this-> hide();
    HomePage homepage;
    homepage.setModal(true);
    homepage.exec();
}

