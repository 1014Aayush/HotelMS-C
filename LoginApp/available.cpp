#include "available.h"
#include "roomoccupancy.h"
#include "ui_available.h"
#include <QSqlDatabase>
#include <string.h>
#include <string>

available::available(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::available)
{
    ui->setupUi(this);
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Users/saroj/Desktop/SemProject2-main/SemProject-main/Project/LoginApp/database/datab.sqlite");

    sqlitedb.open();
    QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery *qry=new QSqlQuery();
    qry->prepare("select * from customer");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    sqlitedb.close();
}

available::~available()
{
    delete ui;
}

void available::on_pushButton_clicked()
{
    this-> hide();
    roomoccupancy roomoccupancy ;
    roomoccupancy.setModal(true);
    roomoccupancy.exec();
}

