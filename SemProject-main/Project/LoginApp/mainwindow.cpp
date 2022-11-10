#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Login_clicked()
{
    QString username =ui->Username->text();
    QString password =ui->Password->text();

 /*   if (username =="test" && password=="test")
    {
       // QMessageBox::information(this,"Login","Username And Password Is Correct");
        homePage=new HomePage(this);
        homePage->show();
        this->hide();

    }
    else{
        QMessageBox::information(this,"Login","Username And Password Is InCorrect");
    }*/

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("C:/Users/saroj/Desktop/SemProject-main/SemProject-main/Project/LoginApp/database/datab.sqlite");


        if (database.open())
         {
             // Creaing Queries

             QSqlQuery query(QSqlDatabase::database("datab"));

             query.prepare("SELECT * FROM signup WHERE username = :username AND password = :password");

             query.bindValue(":username", username);
             query.bindValue(":password", password);

             if (!query.exec())
             {
                 QMessageBox::information(this, "Failed", "Retry Login");
             }
             else{
                 while(query.next())
                 {
                     QString usernameFromDB = query.value(2).toString();
                     QString passwordFromDB = query.value(3).toString();

                     if(usernameFromDB == username && passwordFromDB == password)
                     {
                         this->close();
                         auto page = new HomePage();
                         page->setAttribute(Qt::WA_DeleteOnClose);
                         page->show();

                     }
                     else{
                         QMessageBox::information(this, "Failed to login", "Retry");
                     }
                 }
             }
         }else{
             QMessageBox::information(this, "Not connected", "Retry");
         }



 }

void MainWindow::on_pushButton_2_clicked()
{
    signUp=new signup(this);
    signUp->show();
    this->hide();
}

