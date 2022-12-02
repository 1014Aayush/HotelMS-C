#include "homepage.h"
#include "ui_homepage.h"
#include <roomoccupancy.h>
#include "mainwindow.h"



HomePage::HomePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_2_clicked()
{
    /*staffSearch=new Staffsearch(this);
    this->hide();
    staffSearch->show();*/

    this-> hide();
    Staffsearch Staffsearch;
    Staffsearch.setModal(true);
    Staffsearch.exec();

}



void HomePage::on_pushButton_3_clicked()
{
   /* roomOccupancy=new roomoccupancy(this);
    this->hide();
    roomOccupancy->show();*/

    this-> hide();
    roomoccupancy roomoccupancy;
    roomoccupancy.setModal(true);
    roomoccupancy.exec();

}


//void HomePage::on_pushButton_clicked()
//{
   /* incomeManagement= new IncomeMan(this);
    this->hide();
    incomeManagement->show();*/

   /* this-> hide();
    IncomeMan IncomeMan ;
    IncomeMan.setModal(true);
    IncomeMan.exec();
}*/





