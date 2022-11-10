/********************************************************************************
** Form generated from reading UI file 'roomoccupancy.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMOCCUPANCY_H
#define UI_ROOMOCCUPANCY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_roomoccupancy
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QPushButton *pushButton;

    void setupUi(QDialog *roomoccupancy)
    {
        if (roomoccupancy->objectName().isEmpty())
            roomoccupancy->setObjectName("roomoccupancy");
        roomoccupancy->resize(1080, 720);
        label = new QLabel(roomoccupancy);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1080, 720));
        label->setStyleSheet(QString::fromUtf8("background:url(:/Image/OIP.jfif)"));
        label_2 = new QLabel(roomoccupancy);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 30, 531, 131));
        QFont font;
        font.setPointSize(36);
        label_2->setFont(font);
        layoutWidget = new QWidget(roomoccupancy);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 180, 771, 381));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName("radioButton");

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        gridLayout->addWidget(radioButton_3, 0, 2, 1, 1);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName("radioButton_4");

        gridLayout->addWidget(radioButton_4, 0, 3, 1, 1);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName("radioButton_5");

        gridLayout->addWidget(radioButton_5, 0, 4, 1, 1);

        radioButton_6 = new QRadioButton(layoutWidget);
        radioButton_6->setObjectName("radioButton_6");

        gridLayout->addWidget(radioButton_6, 1, 0, 1, 1);

        radioButton_7 = new QRadioButton(layoutWidget);
        radioButton_7->setObjectName("radioButton_7");

        gridLayout->addWidget(radioButton_7, 1, 1, 1, 1);

        radioButton_8 = new QRadioButton(layoutWidget);
        radioButton_8->setObjectName("radioButton_8");

        gridLayout->addWidget(radioButton_8, 1, 2, 1, 1);

        radioButton_9 = new QRadioButton(layoutWidget);
        radioButton_9->setObjectName("radioButton_9");

        gridLayout->addWidget(radioButton_9, 1, 3, 1, 1);

        radioButton_10 = new QRadioButton(layoutWidget);
        radioButton_10->setObjectName("radioButton_10");

        gridLayout->addWidget(radioButton_10, 1, 4, 1, 1);

        radioButton_11 = new QRadioButton(layoutWidget);
        radioButton_11->setObjectName("radioButton_11");

        gridLayout->addWidget(radioButton_11, 2, 0, 1, 1);

        radioButton_12 = new QRadioButton(layoutWidget);
        radioButton_12->setObjectName("radioButton_12");

        gridLayout->addWidget(radioButton_12, 2, 1, 1, 1);

        radioButton_13 = new QRadioButton(layoutWidget);
        radioButton_13->setObjectName("radioButton_13");

        gridLayout->addWidget(radioButton_13, 2, 2, 1, 1);

        radioButton_14 = new QRadioButton(layoutWidget);
        radioButton_14->setObjectName("radioButton_14");

        gridLayout->addWidget(radioButton_14, 2, 3, 1, 1);

        radioButton_15 = new QRadioButton(layoutWidget);
        radioButton_15->setObjectName("radioButton_15");
        radioButton_15->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(radioButton_15, 2, 4, 1, 1);

        pushButton = new QPushButton(roomoccupancy);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 10, 93, 29));
        label->raise();
        layoutWidget->raise();
        label_2->raise();
        pushButton->raise();

        retranslateUi(roomoccupancy);

        QMetaObject::connectSlotsByName(roomoccupancy);
    } // setupUi

    void retranslateUi(QDialog *roomoccupancy)
    {
        roomoccupancy->setWindowTitle(QCoreApplication::translate("roomoccupancy", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("roomoccupancy", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("roomoccupancy", "Room Occupancy", nullptr));
        radioButton->setText(QCoreApplication::translate("roomoccupancy", "101", nullptr));
        radioButton_2->setText(QCoreApplication::translate("roomoccupancy", "102", nullptr));
        radioButton_3->setText(QCoreApplication::translate("roomoccupancy", "103", nullptr));
        radioButton_4->setText(QCoreApplication::translate("roomoccupancy", "104", nullptr));
        radioButton_5->setText(QCoreApplication::translate("roomoccupancy", "105", nullptr));
        radioButton_6->setText(QCoreApplication::translate("roomoccupancy", "106", nullptr));
        radioButton_7->setText(QCoreApplication::translate("roomoccupancy", "107", nullptr));
        radioButton_8->setText(QCoreApplication::translate("roomoccupancy", "108", nullptr));
        radioButton_9->setText(QCoreApplication::translate("roomoccupancy", "109", nullptr));
        radioButton_10->setText(QCoreApplication::translate("roomoccupancy", "110", nullptr));
        radioButton_11->setText(QCoreApplication::translate("roomoccupancy", "111", nullptr));
        radioButton_12->setText(QCoreApplication::translate("roomoccupancy", "112", nullptr));
        radioButton_13->setText(QCoreApplication::translate("roomoccupancy", "113", nullptr));
        radioButton_14->setText(QCoreApplication::translate("roomoccupancy", "114", nullptr));
        radioButton_15->setText(QCoreApplication::translate("roomoccupancy", "115", nullptr));
        pushButton->setText(QCoreApplication::translate("roomoccupancy", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class roomoccupancy: public Ui_roomoccupancy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMOCCUPANCY_H
