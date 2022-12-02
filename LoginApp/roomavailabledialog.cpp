#include "roomavailabledialog.h"
#include "ui_roomavailabledialog.h"

checkoutdialog::checkoutdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkoutdialog)
{
    ui->setupUi(this);
}

checkoutdialog::~checkoutdialog()
{
    delete ui;
}
