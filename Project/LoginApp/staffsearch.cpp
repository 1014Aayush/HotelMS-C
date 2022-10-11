#include "staffsearch.h"
#include "ui_staffsearch.h"

Staffsearch::Staffsearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Staffsearch)
{
    ui->setupUi(this);
}

Staffsearch::~Staffsearch()
{
    delete ui;
}
