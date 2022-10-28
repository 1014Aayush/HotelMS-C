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
