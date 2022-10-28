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

    if (username =="test" && password=="test")
    {
       // QMessageBox::information(this,"Login","Username And Password Is Correct");
        homePage=new HomePage(this);
        homePage->show();
        this->hide();

    }
    else{
        QMessageBox::information(this,"Login","Username And Password Is InCorrect");
    }
 }

void MainWindow::on_pushButton_2_clicked()
{
    signUp=new signup(this);
    signUp->show();
    this->hide();
}

