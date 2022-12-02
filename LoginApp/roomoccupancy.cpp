#include "roomoccupancy.h"
#include "homepage.h"
//#include "ui_homepage.h"
#include "ui_roomoccupancy.h"

#include <QWidget>
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

void roomoccupancy::on_Continue_clicked()
{
    this-> hide();
    class bookroomdialog bookroomdialog;
    bookroomdialog.setModal(true);
    bookroomdialog.exec();
}


void roomoccupancy::on_back_clicked()
{
    this-> hide();
    HomePage homepage;
    homepage.setModal(true);
    homepage.exec();

}


void roomoccupancy::on_pushButton_clicked()
{

    this-> hide();
    class available aVailable;
    aVailable.setModal(true);
    aVailable.exec();

}

