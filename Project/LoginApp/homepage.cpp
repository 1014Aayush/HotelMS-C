#include "homepage.h"
#include "ui_homepage.h"
#include <roomoccupancy.h>


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
    staffSearch=new Staffsearch(this);
    this->hide();
    staffSearch->show();

}



void HomePage::on_pushButton_3_clicked()
{
    roomOccupancy=new roomoccupancy(this);
    this->hide();
    roomOccupancy->show();
}


void HomePage::on_pushButton_clicked()
{
    incomeManagement= new IncomeMan(this);
    this->hide();
    incomeManagement->show();
}

