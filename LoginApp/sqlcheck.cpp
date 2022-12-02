#include "sqlcheck.h"
#include "ui_sqlcheck.h"

sqlcheck::sqlcheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sqlcheck)
{
    ui->setupUi(this);
}

sqlcheck::~sqlcheck()
{
    delete ui;
}

void sqlcheck::on_pushButton_clicked()
{

}

