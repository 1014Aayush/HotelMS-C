/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QLabel *Revenueimg;
    QLabel *label_2;
    QLabel *StaffText;
    QLabel *StaffManagIcon;
    QPushButton *pushButton_2;
    QWidget *StaaffBack;
    QLabel *IncomeText;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *IncomeManWidget;
    QWidget *RoomBack;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *RoomOccupancyIcon;
    QWidget *widget;
    QLabel *label_6;
    QPushButton *pushButton_4;
    QLabel *OtheServicesIcon;
    QLabel *Incomeicon;
    QLabel *label_3;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(1080, 720);
        Revenueimg = new QLabel(HomePage);
        Revenueimg->setObjectName("Revenueimg");
        Revenueimg->setGeometry(QRect(0, 0, 1080, 720));
        Revenueimg->setCursor(QCursor(Qt::ArrowCursor));
        Revenueimg->setPixmap(QPixmap(QString::fromUtf8(":/Image/OIP.jfif")));
        Revenueimg->setScaledContents(true);
        Revenueimg->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_2 = new QLabel(HomePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 430, 63, 20));
        StaffText = new QLabel(HomePage);
        StaffText->setObjectName("StaffText");
        StaffText->setGeometry(QRect(300, 170, 261, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        font.setBold(false);
        StaffText->setFont(font);
        StaffManagIcon = new QLabel(HomePage);
        StaffManagIcon->setObjectName("StaffManagIcon");
        StaffManagIcon->setGeometry(QRect(20, 150, 271, 171));
        StaffManagIcon->setStyleSheet(QString::fromUtf8("border-radius:20px;"));
        StaffManagIcon->setPixmap(QPixmap(QString::fromUtf8(":/Image/R.jfif")));
        StaffManagIcon->setScaledContents(true);
        pushButton_2 = new QPushButton(HomePage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 240, 171, 41));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(116, 183, 255);\n"
"\n"
"border-radius:20px;"));
        StaaffBack = new QWidget(HomePage);
        StaaffBack->setObjectName("StaaffBack");
        StaaffBack->setGeometry(QRect(10, 140, 521, 191));
        StaaffBack->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0,0,0);\n"
"border-radius:20px;\n"
"\n"
"background:url(:/Image/ok.jfif)"));
        IncomeText = new QLabel(HomePage);
        IncomeText->setObjectName("IncomeText");
        IncomeText->setGeometry(QRect(310, 370, 291, 81));
        QFont font1;
        font1.setPointSize(16);
        IncomeText->setFont(font1);
        label = new QLabel(HomePage);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 430, 361, 51));
        label->setFont(font1);
        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 490, 161, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(116, 183, 255);\n"
"\n"
"border-radius:20px;"));
        IncomeManWidget = new QWidget(HomePage);
        IncomeManWidget->setObjectName("IncomeManWidget");
        IncomeManWidget->setGeometry(QRect(10, 370, 521, 191));
        IncomeManWidget->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0,0,0);\n"
"border-radius:20px;\n"
"\n"
"background:url(:/Image/ok.jfif)"));
        RoomBack = new QWidget(HomePage);
        RoomBack->setObjectName("RoomBack");
        RoomBack->setGeometry(QRect(550, 140, 521, 191));
        RoomBack->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0,0,0);\n"
"border-radius:20px;\n"
"\n"
"background:url(:/Image/ok.jfif)"));
        label_4 = new QLabel(HomePage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(850, 170, 221, 61));
        label_4->setFont(font1);
        pushButton_3 = new QPushButton(HomePage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(870, 230, 161, 41));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background:rgb(116, 183, 255);\n"
"\n"
"border-radius:20px;"));
        RoomOccupancyIcon = new QLabel(HomePage);
        RoomOccupancyIcon->setObjectName("RoomOccupancyIcon");
        RoomOccupancyIcon->setGeometry(QRect(560, 150, 271, 171));
        RoomOccupancyIcon->setStyleSheet(QString::fromUtf8("background:url(:/Image/Room.jfif);"));
        RoomOccupancyIcon->setPixmap(QPixmap(QString::fromUtf8(":/Image/Room.jfif")));
        RoomOccupancyIcon->setScaledContents(true);
        widget = new QWidget(HomePage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(550, 370, 521, 191));
        widget->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0,0,0);\n"
"border-radius:20px;\n"
"\n"
"background:url(:/Image/ok.jfif)"));
        label_6 = new QLabel(HomePage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(870, 420, 221, 61));
        label_6->setFont(font1);
        pushButton_4 = new QPushButton(HomePage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(870, 490, 161, 41));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background:rgb(116, 183, 255);\n"
"\n"
"border-radius:20px;"));
        OtheServicesIcon = new QLabel(HomePage);
        OtheServicesIcon->setObjectName("OtheServicesIcon");
        OtheServicesIcon->setGeometry(QRect(560, 380, 271, 171));
        OtheServicesIcon->setPixmap(QPixmap(QString::fromUtf8(":/Image/OIP (1).jfif")));
        OtheServicesIcon->setScaledContents(true);
        Incomeicon = new QLabel(HomePage);
        Incomeicon->setObjectName("Incomeicon");
        Incomeicon->setGeometry(QRect(20, 380, 271, 171));
        Incomeicon->setPixmap(QPixmap(QString::fromUtf8(":/Image/r22.jpeg")));
        Incomeicon->setScaledContents(true);
        label_3 = new QLabel(HomePage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 30, 351, 71));
        QFont font2;
        font2.setPointSize(36);
        label_3->setFont(font2);
        Revenueimg->raise();
        IncomeManWidget->raise();
        StaaffBack->raise();
        label_2->raise();
        StaffText->raise();
        StaffManagIcon->raise();
        pushButton_2->raise();
        IncomeText->raise();
        label->raise();
        pushButton->raise();
        RoomBack->raise();
        label_4->raise();
        pushButton_3->raise();
        RoomOccupancyIcon->raise();
        widget->raise();
        label_6->raise();
        pushButton_4->raise();
        OtheServicesIcon->raise();
        Incomeicon->raise();
        label_3->raise();

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        Revenueimg->setText(QString());
        label_2->setText(QString());
        StaffText->setText(QCoreApplication::translate("HomePage", "Staff Management", nullptr));
        StaffManagIcon->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("HomePage", "Enter", nullptr));
        IncomeText->setText(QCoreApplication::translate("HomePage", "Income", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "Management", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "Enter", nullptr));
        label_4->setText(QCoreApplication::translate("HomePage", "Room Occupancy", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HomePage", "Enter", nullptr));
        RoomOccupancyIcon->setText(QString());
        label_6->setText(QCoreApplication::translate("HomePage", "Other Services", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HomePage", "Enter", nullptr));
        OtheServicesIcon->setText(QString());
        Incomeicon->setText(QString());
        label_3->setText(QCoreApplication::translate("HomePage", "Our Services", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
