#include "roomoccupancy.h"
#include "ui_roomoccupancy.h"

roomoccupancy::roomoccupancy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::roomoccupancy)
{
    ui->setupUi(this);
}

roomoccupancy::~roomoccupancy()
{
    delete ui;
}

/*void roomoccupancy::on_pushButton_clicked()
{
    homepage=new HomePage(this);
    this->hide();
    ui->show();
}*/

