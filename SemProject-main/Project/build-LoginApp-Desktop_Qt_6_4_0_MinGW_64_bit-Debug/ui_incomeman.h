/********************************************************************************
** Form generated from reading UI file 'incomeman.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMEMAN_H
#define UI_INCOMEMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IncomeMan
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *horizontalFrame3;
    QHBoxLayout *horizontalLayout_4;
    QFrame *horizontalFrame4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *RoomManagement;
    QLineEdit *lineEdit;
    QLabel *Entertainment;
    QLineEdit *lineEdit_2;
    QLabel *Food;
    QLineEdit *lineEdit_3;
    QLabel *RoomBooking;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *RoomManagement_2;
    QLabel *Entertainment_2;
    QLabel *Food_2;
    QLineEdit *lineEdit_7;
    QLabel *RoomBooking_2;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_7;
    QLabel *RoomBooking_3;
    QLineEdit *lineEdit_11;
    QLabel *RoomBooking_4;
    QLineEdit *lineEdit_12;
    QLabel *RoomManagement_3;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLabel *RoomManagement_4;
    QLabel *label_6;
    QLabel *RoomBooking_5;
    QLineEdit *lineEdit_15;
    QLabel *RoomBooking_6;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton_3;

    void setupUi(QDialog *IncomeMan)
    {
        if (IncomeMan->objectName().isEmpty())
            IncomeMan->setObjectName("IncomeMan");
        IncomeMan->resize(1123, 638);
        IncomeMan->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(IncomeMan);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(IncomeMan);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1102, 3022));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(1080, 3000));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalFrame = new QFrame(frame);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setGeometry(QRect(-40, 9, 551, 501));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalFrame_2 = new QFrame(frame);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        horizontalFrame_2->setGeometry(QRect(209, 1690, 661, 411));
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalFrame3 = new QFrame(frame);
        horizontalFrame3->setObjectName("horizontalFrame3");
        horizontalFrame3->setGeometry(QRect(520, 9, 541, 501));
        horizontalLayout_4 = new QHBoxLayout(horizontalFrame3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalFrame4 = new QFrame(frame);
        horizontalFrame4->setObjectName("horizontalFrame4");
        horizontalFrame4->setGeometry(QRect(210, 1210, 661, 661));
        horizontalLayout_3 = new QHBoxLayout(horizontalFrame4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 510, 481, 481));
        label->setStyleSheet(QString::fromUtf8("background:rgba(34, 34, 34,78%);\n"
"border-radius:20px;\n"
""));
        RoomManagement = new QLabel(frame);
        RoomManagement->setObjectName("RoomManagement");
        RoomManagement->setGeometry(QRect(63, 628, 219, 25));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        RoomManagement->setFont(font);
        RoomManagement->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 627, 154, 26));
        Entertainment = new QLabel(frame);
        Entertainment->setObjectName("Entertainment");
        Entertainment->setGeometry(QRect(92, 678, 171, 25));
        Entertainment->setFont(font);
        Entertainment->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(290, 678, 154, 26));
        Food = new QLabel(frame);
        Food->setObjectName("Food");
        Food->setGeometry(QRect(152, 728, 61, 25));
        Food->setFont(font);
        Food->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(290, 729, 154, 26));
        RoomBooking = new QLabel(frame);
        RoomBooking->setObjectName("RoomBooking");
        RoomBooking->setGeometry(QRect(112, 778, 171, 25));
        RoomBooking->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(290, 780, 154, 26));
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(290, 940, 154, 26));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 880, 381, 41));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 940, 151, 25));
        label_2->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 550, 161, 61));
        label_3->setContextMenuPolicy(Qt::PreventContextMenu);
        label_3->setStyleSheet(QString::fromUtf8("font: 600 25pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        label_3->setWordWrap(false);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(550, 510, 491, 691));
        label_4->setStyleSheet(QString::fromUtf8("background:rgba(34, 34, 34,78%);\n"
"border-radius:20px;\n"
""));
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(830, 627, 154, 26));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(610, 1030, 381, 41));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(660, 1110, 151, 25));
        label_5->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        RoomManagement_2 = new QLabel(frame);
        RoomManagement_2->setObjectName("RoomManagement_2");
        RoomManagement_2->setGeometry(QRect(603, 628, 219, 25));
        RoomManagement_2->setFont(font);
        RoomManagement_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        Entertainment_2 = new QLabel(frame);
        Entertainment_2->setObjectName("Entertainment_2");
        Entertainment_2->setGeometry(QRect(620, 678, 171, 25));
        Entertainment_2->setFont(font);
        Entertainment_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        Food_2 = new QLabel(frame);
        Food_2->setObjectName("Food_2");
        Food_2->setGeometry(QRect(600, 728, 221, 25));
        Food_2->setFont(font);
        Food_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        lineEdit_7 = new QLineEdit(frame);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(830, 1110, 154, 26));
        RoomBooking_2 = new QLabel(frame);
        RoomBooking_2->setObjectName("RoomBooking_2");
        RoomBooking_2->setGeometry(QRect(610, 778, 231, 25));
        RoomBooking_2->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        lineEdit_8 = new QLineEdit(frame);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(830, 729, 154, 26));
        lineEdit_9 = new QLineEdit(frame);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(830, 678, 154, 26));
        lineEdit_10 = new QLineEdit(frame);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(830, 780, 154, 26));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(680, 550, 241, 61));
        label_7->setContextMenuPolicy(Qt::PreventContextMenu);
        label_7->setStyleSheet(QString::fromUtf8("font: 600 25pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        label_7->setWordWrap(false);
        RoomBooking_3 = new QLabel(frame);
        RoomBooking_3->setObjectName("RoomBooking_3");
        RoomBooking_3->setGeometry(QRect(610, 824, 211, 25));
        RoomBooking_3->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        lineEdit_11 = new QLineEdit(frame);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(830, 826, 154, 26));
        RoomBooking_4 = new QLabel(frame);
        RoomBooking_4->setObjectName("RoomBooking_4");
        RoomBooking_4->setGeometry(QRect(670, 870, 171, 25));
        RoomBooking_4->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        lineEdit_12 = new QLineEdit(frame);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(830, 872, 154, 26));
        RoomManagement_3 = new QLabel(frame);
        RoomManagement_3->setObjectName("RoomManagement_3");
        RoomManagement_3->setGeometry(QRect(591, 920, 231, 25));
        RoomManagement_3->setFont(font);
        RoomManagement_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        lineEdit_13 = new QLineEdit(frame);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(830, 920, 154, 26));
        lineEdit_14 = new QLineEdit(frame);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(829, 970, 154, 26));
        RoomManagement_4 = new QLabel(frame);
        RoomManagement_4->setObjectName("RoomManagement_4");
        RoomManagement_4->setGeometry(QRect(590, 970, 241, 25));
        RoomManagement_4->setFont(font);
        RoomManagement_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 600 15pt \"Bahnschrift SemiBold\";"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 1020, 481, 181));
        label_6->setStyleSheet(QString::fromUtf8("background:rgba(34, 34, 34,78%);\n"
"border-radius:20px;\n"
""));
        RoomBooking_5 = new QLabel(frame);
        RoomBooking_5->setObjectName("RoomBooking_5");
        RoomBooking_5->setGeometry(QRect(112, 828, 171, 25));
        RoomBooking_5->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        lineEdit_15 = new QLineEdit(frame);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(290, 830, 154, 26));
        RoomBooking_6 = new QLabel(frame);
        RoomBooking_6->setObjectName("RoomBooking_6");
        RoomBooking_6->setGeometry(QRect(220, 1050, 171, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        RoomBooking_6->setFont(font1);
        RoomBooking_6->setStyleSheet(QString::fromUtf8("font: 600 25pt \"Bahnschrift SemiBold\";\n"
"color:rgb(255, 255, 255);"));
        lineEdit_16 = new QLineEdit(frame);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(153, 1110, 251, 41));
        lineEdit_16->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 0, 93, 29));
        label->raise();
        horizontalFrame->raise();
        horizontalFrame_2->raise();
        horizontalFrame3->raise();
        horizontalFrame4->raise();
        RoomManagement->raise();
        lineEdit->raise();
        Entertainment->raise();
        lineEdit_2->raise();
        Food->raise();
        lineEdit_3->raise();
        RoomBooking->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        pushButton->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lineEdit_6->raise();
        pushButton_2->raise();
        label_5->raise();
        RoomManagement_2->raise();
        Entertainment_2->raise();
        Food_2->raise();
        lineEdit_7->raise();
        RoomBooking_2->raise();
        lineEdit_8->raise();
        lineEdit_9->raise();
        lineEdit_10->raise();
        label_7->raise();
        RoomBooking_3->raise();
        lineEdit_11->raise();
        RoomBooking_4->raise();
        lineEdit_12->raise();
        RoomManagement_3->raise();
        lineEdit_13->raise();
        lineEdit_14->raise();
        RoomManagement_4->raise();
        label_6->raise();
        RoomBooking_5->raise();
        lineEdit_15->raise();
        RoomBooking_6->raise();
        lineEdit_16->raise();
        pushButton_3->raise();

        verticalLayout_2->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(IncomeMan);

        QMetaObject::connectSlotsByName(IncomeMan);
    } // setupUi

    void retranslateUi(QDialog *IncomeMan)
    {
        IncomeMan->setWindowTitle(QCoreApplication::translate("IncomeMan", "Dialog", nullptr));
        label->setText(QString());
        RoomManagement->setText(QCoreApplication::translate("IncomeMan", "Room Management:", nullptr));
        Entertainment->setText(QCoreApplication::translate("IncomeMan", " Entertainment:", nullptr));
        Food->setText(QCoreApplication::translate("IncomeMan", "Food:", nullptr));
        RoomBooking->setText(QCoreApplication::translate("IncomeMan", "Room Booking:", nullptr));
        pushButton->setText(QCoreApplication::translate("IncomeMan", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("IncomeMan", "Total Earned:", nullptr));
        label_3->setText(QCoreApplication::translate("IncomeMan", "Income ", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("IncomeMan", "Save", nullptr));
        label_5->setText(QCoreApplication::translate("IncomeMan", "Total Earned:", nullptr));
        RoomManagement_2->setText(QCoreApplication::translate("IncomeMan", "Room Management:", nullptr));
        Entertainment_2->setText(QCoreApplication::translate("IncomeMan", " Entertainment:", nullptr));
        Food_2->setText(QCoreApplication::translate("IncomeMan", "Food And Bevrages", nullptr));
        RoomBooking_2->setText(QCoreApplication::translate("IncomeMan", "Staff Management", nullptr));
        label_7->setText(QCoreApplication::translate("IncomeMan", "Expenditure", nullptr));
        RoomBooking_3->setText(QCoreApplication::translate("IncomeMan", "Tax And Insurance", nullptr));
        lineEdit_11->setText(QString());
        RoomBooking_4->setText(QCoreApplication::translate("IncomeMan", "Utilities", nullptr));
        lineEdit_12->setText(QString());
        RoomManagement_3->setText(QCoreApplication::translate("IncomeMan", "Marketing And Sales", nullptr));
        RoomManagement_4->setText(QCoreApplication::translate("IncomeMan", "System Maintainance", nullptr));
        label_6->setText(QString());
        RoomBooking_5->setText(QCoreApplication::translate("IncomeMan", "Other Sources", nullptr));
        lineEdit_15->setText(QString());
        RoomBooking_6->setText(QCoreApplication::translate("IncomeMan", "Profit", nullptr));
        pushButton_3->setText(QCoreApplication::translate("IncomeMan", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncomeMan: public Ui_IncomeMan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMEMAN_H
