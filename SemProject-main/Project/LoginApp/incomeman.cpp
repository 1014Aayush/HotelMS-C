#include "incomeman.h"
#include "ui_incomeman.h"



IncomeMan::IncomeMan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IncomeMan)
{
    ui->setupUi(this);
{
        QPieSeries *series = new QPieSeries();

        series->append("Food 20%", 30);
        series->append("Room Booking 25%", 40);
        series->append("In Room Entertainment 40%",70);
        series->append("Others 15%",20);



        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Income Sources");
        chart->setAnimationOptions(QChart::SeriesAnimations);
        chart->setTheme(QChart::ChartThemeBlueCerulean);


        QChartView *chartview = new QChartView(chart);
        chartview->setRenderHint(QPainter::Antialiasing);
        chartview->setParent(ui->horizontalFrame);
}
    {

        QPieSeries *ser=new QPieSeries();
        ser->append("Employees 20%",50);
        ser->append("Room Management 25%",60);
        ser->append("Food Expences 20%",50);
        ser->append("Transportation 17.5%",20);
        ser->append("Others 17.5%",20);

        QChart *chart2=new QChart();
        chart2->addSeries(ser);
        chart2->setTitle("Expences");
        chart2->setAnimationOptions(QChart::SeriesAnimations);

        chart2->setTheme(QChart::ChartThemeBlueCerulean);

        QChartView *chartview2= new QChartView(chart2);
        chartview2->setRenderHint(QPainter::Antialiasing);
        chartview2->setParent(ui->horizontalFrame_2);
}

    {
        QPieSeries *series3 = new QPieSeries();
            series3->setHoleSize(0.35);
            series3->append(" Income 50%", 44.28);
            series3->append(" Expences 30% ", 23.8);
            series3->append(" Investment 20%", 16.4);


            QChart *chart3 = new QChart();
            chart3->addSeries(series3);
            chart3->setAnimationOptions(QChart::SeriesAnimations);
            chart3->setTitle("");
            chart3->setTheme(QChart::ChartThemeBlueCerulean);


            QChartView *chartview3 = new QChartView(chart3);
            chartview3->setRenderHint(QPainter::Antialiasing);

            chartview3->setParent(ui->horizontalFrame3);
    }

    {

            QBarSet *set0 = new QBarSet("Income");
            QBarSet *set1 = new QBarSet("Expenditure");


            *set0 << 30 << 40 << 20 << 25 << 50 << 50<<60<<50<<55<<80<<90<<85;
            *set1 << 10 << 30 << 15 << 18 << 31 << 30<<40<<30<<25<<30<<25<<35;


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




IncomeMan::~IncomeMan()
{
    delete ui;
}
