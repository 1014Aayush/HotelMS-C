#include "bookroomdialog.h"
#include "qsqldatabase.h"
#include "roomoccupancy.h"
#include "ui_bookroomdialog.h"


bookroomdialog::bookroomdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookroomdialog)
{
    ui->setupUi(this);
}

bookroomdialog::~bookroomdialog()
{
    delete ui;
}

void bookroomdialog::on_pushButton_clicked()
{




    //connection to Sqlite Database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Users/saroj/Desktop/SemProject2-main/SemProject-main/Project/LoginApp/database/datab.sqlite");




    if(sqlitedb.open()){
        //reterving from signup data fields
        QString roomno = ui->lineEdit->text();
        QString name =ui->txtName->text();
        QString contact =ui->txtContactNumber->text();
        QString idproof=ui->txtIdProof->text();
        QString address =ui->txtAddress->text();

        //Run Our Insert Query

        QSqlQuery qry;
        qry.prepare("INSERT INTO customer(roomno,name,contact,idproof,address)"
                   "VALUES "
                    "('"+roomno+"','"+name+"', '"+contact+"', '"+idproof+"','"+address+"')");

        qry.bindValue(":roomno",roomno);
        qry.bindValue(":name",name);
        qry.bindValue(":contact",contact);
        qry.bindValue(":idproof",idproof);
        qry.bindValue(":address",address);
        if(qry.exec()){
            QMessageBox::information(this,"Inserted", "Data Success");

        }
        else{
            QMessageBox::information(this,"Not Inserted", "Data Not Success");
        }



    }else{
        QMessageBox::information(this,"NOt Connected","Data Not Connected");

    }
}



void bookroomdialog::on_Cancel_clicked()
{
    this->hide();
    roomoccupancy roomoccupancy;
    roomoccupancy.setModal(true);
    roomoccupancy.exec();

}
