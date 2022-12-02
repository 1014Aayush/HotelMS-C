#include "incomeman.h"
#include "ui_incomeman.h"
#include <QMessageBox>
#include <QDebug>
#include <qsqlerror.h>
#include <string>
#include <string.h>
IncomeMan::IncomeMan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IncomeMan)
{




    ui->setupUi(this);
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE","data");
    database.setDatabaseName("D:/Qt/project/Myproject-main/Myproject-main/LoginApp/database/datab.sqlite");
    extern QString store_username;

    if (database.open())
    {
                  QSqlQuery query(QSqlDatabase::database("data"));
                  query.prepare("SELECT * FROM dubli where name=:name");
                  query.bindValue(":name", store_username);
                  if (query.exec())
                  {
                     QPieSeries *series=new QPieSeries();
                     while(query.next())
                     {


                           series->append("Food",query.value(3).toInt());
                           series->append("Entertainment %", query.value(4).toDouble());
                           series->append("Roomi %",query.value(5).toInt());
                           series->append("Roommanagei %",query.value(6).toInt());
                           series->append("OtherSources %",query.value(7).toInt());

                           qDebug()<<store_username;




                           QChart *chart = new QChart();
                           chart->addSeries(series);
                           chart->setTitle("Income Sources");
                           chart->setAnimationOptions(QChart::SeriesAnimations);
                           chart->setTheme(QChart::ChartThemeBlueCerulean);


                           QChartView *chartview = new QChartView(chart);
                           chartview->setRenderHint(QPainter::Antialiasing);
                           chartview->setParent(ui->horizontalFrame);
                        //   QMessageBox::information(this, "Success", " Made");


                           QPieSeries *series3 = new QPieSeries();
                               series3->setHoleSize(0.35);
                               series3->append("RoomManage",query.value(9).toInt());
                               series3->append("Entertainment ",query.value(10).toInt());
                               series3->append("Food",query.value(11).toInt());
                               series3->append("Staff",query.value(12).toInt());
                               series3->append("Tax",query.value(13).toInt());
                               series3->append("Utilities",query.value(14).toInt());
                               series3->append(" Marketing",query.value(15).toInt());
                               series3->append(" Systemmaintain",query.value(16).toInt());



                               QChart *chart3 = new QChart();
                               chart3->addSeries(series3);
                               chart3->setAnimationOptions(QChart::SeriesAnimations);
                               chart3->setTitle("Expenditure");
                               chart3->setTheme(QChart::ChartThemeBlueCerulean);


                               QChartView *chartview3 = new QChartView(chart3);
                               chartview3->setRenderHint(QPainter::Antialiasing);

                               chartview3->setParent(ui->horizontalFrame3);
                       }



                 }
                 else{
                     QMessageBox::information(this, "Failed", "Not Made");
                     query.lastError().text();
                     database.close();
                     }
                  //    database.close();


                      database.open();
                       QSqlQueryModel *modal=new QSqlQueryModel();
                       QSqlQuery *qry=new QSqlQuery();
                       qry->prepare("select * from Income");
                       qry->exec();
                       modal->setQuery(*qry);
                       ui->tableView->setModel(modal);
                       database.close();


}


    {

            QBarSet *set0 = new QBarSet("Income");
            QBarSet *set1 = new QBarSet("Expenditure");

            QSqlQuery query(QSqlDatabase::database("data"));
            query.prepare("SELECT * FROM dubli where name=:name");
            query.bindValue(":name", store_username);
            if (query.exec())
            {

                while(query.next())
                {
            *set0 << (query.value(8).toInt())/10;
            *set1 << (query.value(16).toInt())/10;


            QBarSeries *series = new QBarSeries();
            series->append(set0);
            series->append(set1);

            QChart *chart = new QChart();
            chart->addSeries(series);
            chart->setTitle("Progress Report ");
            chart->setAnimationOptions(QChart::SeriesAnimations);


            QStringList categories;
            categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun"<<"July"<<"Aug"<<"Sep"<<"Oct"<<"Nov"<<"Dec";
            QBarCategoryAxis *axis = new QBarCategoryAxis();
            axis->append(categories);
            chart->createDefaultAxes();
            chart->setAxisX(axis, series);


            QChartView *chartView = new QChartView(chart);
            chartView->setParent(ui->horizontalFrame4);
            }
            }
            else{
                    QMessageBox::information(this, "Failed", "Not Made");
                    query.lastError().text();
                    database.close();
                    }

}
}




IncomeMan::~IncomeMan()
{
    delete ui;
}


void IncomeMan::on_pushButton_clicked()
{
    //connection to Sqlite Database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("D:/Qt/project/Myproject-main/Myproject-main/LoginApp/database/datab.sqlite");


extern QString store_username;

    if(sqlitedb.open()){
        //reterving from signup data fields

        QString Foodi =ui->lineEdit_3->text();
        QString Entertainmenti =ui->lineEdit_2->text();
        QString Roomi=ui->lineEdit_3->text();
        QString RoomManagei=ui->lineEdit->text();
        QString OtherSources =ui->lineEdit_15->text();
   //   QString TotalEarn =
        QString RoomManageo =ui->lineEdit_6->text();
        QString Entertainmento =ui->lineEdit_9->text();
        QString Foodo=ui->lineEdit_8->text();
        QString Staffo=ui->lineEdit_10->text();
        QString Taxo =ui->lineEdit_11->text();
        QString Utilitieso =ui->lineEdit_12->text();
        QString Marketing =ui->lineEdit_13->text();
        QString Systemmain =ui->lineEdit_14->text();
        QString date=ui->date->text();
   //     QString TotalExp =ui->lineEdit_7->text();
   //     QString Profit =ui->lineEdit_16->text();
        int Totali=Foodi.toInt()+Entertainmenti.toInt()+Roomi.toInt()+RoomManagei.toInt()+OtherSources.toInt();
        int Totalo=RoomManageo.toInt()+Entertainmento.toInt()+Foodo.toInt()+Taxo.toInt()+Utilitieso.toInt()+Marketing.toInt()+Systemmain.toInt();
        int Net=Totali-Totalo;
        QString TotalEarn =QString::number(Totali);
        QString TotalExp =QString::number(Totalo);
        QString Profit =QString::number(Net);
        ui->lineEdit_5->setText(TotalEarn);
        ui->lineEdit_7->setText(TotalExp);
        ui->lineEdit_16->setText(Profit);



        QSqlQuery qry;

        qry.prepare("INSERT INTO Income(date,Foodi,Entertainmenti,Roomi,RoomManagei,OtherSources,TotalEarn,RoomManageo,Entertainmento,Foodo,Staffo,Taxo,Utilitieso,Marketing,Systemmain,TotalExp,Profit)"
                   "VALUES "
                    "('"+date+"','"+Foodi+"','"+Entertainmenti+"','"+Roomi+"','"+RoomManagei+"','"+OtherSources+"','"+TotalEarn+"','"+RoomManageo+"','"+Entertainmento+"','"+Foodo+"','"+Staffo+"','"+Taxo+"','"+Utilitieso+"','"+Marketing+"','"+Systemmain+"','"+TotalExp+"','"+Profit+"')");
  //      qry.bindValue(":name",store_username);

        qry.bindValue(":date",date);
        qry.bindValue(":Foodi",Foodi);
        qry.bindValue(":Entertainmenti",Entertainmenti);
        qry.bindValue(":Roomi",Roomi);
        qry.bindValue(":RoomManagei",RoomManagei);
        qry.bindValue(":OtherSources",OtherSources);
        qry.bindValue(":TotalEarn",TotalEarn);
        qry.bindValue(":RoomManageo",RoomManageo);
        qry.bindValue(":Entertainmento",Entertainmento);
        qry.bindValue(":Foodo",Foodo);
        qry.bindValue(":Staffo",Staffo);
        qry.bindValue(":Taxo",Taxo);
        qry.bindValue(":Utilitieso",Utilitieso);
        qry.bindValue(":Marketing",Marketing);
        qry.bindValue(":Systemmain",Systemmain);
        qry.bindValue(":TotalExp",TotalExp);
        qry.bindValue(":Profit",Profit);
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

