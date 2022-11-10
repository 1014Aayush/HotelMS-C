#include "staffmanage.h"
#include "ui_staffmanage.h"

Staffmanage::Staffmanage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Staffmanage)
{
    ui->setupUi(this);
}

Staffmanage::~Staffmanage()
{
    delete ui;
}
