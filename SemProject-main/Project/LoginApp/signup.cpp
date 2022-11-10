#include "signup.h"
#include "ui_signup.h"

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;

}

void signup::on_pushButton_clicked()
{

    //connection to Sqlite Database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Users/saroj/Desktop/SemProject-main/SemProject-main/Project/LoginApp/database/datab.sqlite");




    if(sqlitedb.open()){
        //reterving from signup data fields
        QString username =ui->lineEdit_2->text();
        QString businessname =ui->lineEdit->text();
        QString password=ui->lineEdit_3->text();
        QString years=ui->lineEdit_4->text();

        //Run Our Insert Query

        QSqlQuery qry;

        qry.prepare("INSERT INTO signup(username,businessname,password,years)"
                   "VALUES "
                    "('"+username+"','"+businessname+"', '"+password+"', '"+years+"')");

        qry.bindValue(":username",username);
        qry.bindValue(":businessname",businessname);
        qry.bindValue(":password",password);
        qry.bindValue(":years",years);

        if(qry.exec()){
            QMessageBox::information(this,"Inserted", "Data Success");

        }
        else{
            QMessageBox::information(this,"Not Inserted", "Data Not Success");
        }



    }else{
        QMessageBox::information(this,"NOt Connected","Data Not Connected");

    }
}

