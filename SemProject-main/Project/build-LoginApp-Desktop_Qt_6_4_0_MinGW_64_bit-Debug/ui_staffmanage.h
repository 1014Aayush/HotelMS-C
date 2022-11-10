/********************************************************************************
** Form generated from reading UI file 'staffmanage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFMANAGE_H
#define UI_STAFFMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Staffmanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton;

    void setupUi(QDialog *Staffmanage)
    {
        if (Staffmanage->objectName().isEmpty())
            Staffmanage->setObjectName("Staffmanage");
        Staffmanage->resize(1080, 720);
        label = new QLabel(Staffmanage);
        label->setObjectName("label");
        label->setGeometry(QRect(2, -1, 1071, 81));
        label->setStyleSheet(QString::fromUtf8("background:url(:/Image/OIP.jfif);\n"
"border-color: rgb(996, 96, 96);\n"
""));
        label_2 = new QLabel(Staffmanage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, -1, 401, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(28);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));
        horizontalFrame = new QFrame(Staffmanage);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setGeometry(QRect(30, 160, 261, 241));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(Staffmanage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(321, 161, 91, 41));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_4 = new QLabel(Staffmanage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(321, 252, 91, 41));
        label_4->setFont(font1);
        label_5 = new QLabel(Staffmanage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(321, 343, 71, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(Staffmanage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(321, 435, 81, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(Staffmanage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(321, 526, 131, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(Staffmanage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(450, 524, 131, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(Staffmanage);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(400, 159, 91, 41));
        label_9->setFont(font1);
        label_10 = new QLabel(Staffmanage);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(400, 341, 71, 31));
        label_10->setFont(font1);
        label_11 = new QLabel(Staffmanage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(400, 433, 81, 31));
        label_11->setFont(font1);
        label_12 = new QLabel(Staffmanage);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(420, 250, 91, 41));
        label_12->setFont(font1);
        pushButton = new QPushButton(Staffmanage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 90, 93, 29));

        retranslateUi(Staffmanage);

        QMetaObject::connectSlotsByName(Staffmanage);
    } // setupUi

    void retranslateUi(QDialog *Staffmanage)
    {
        Staffmanage->setWindowTitle(QCoreApplication::translate("Staffmanage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Staffmanage", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Staffmanage", "Staff Management", nullptr));
        label_3->setText(QCoreApplication::translate("Staffmanage", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("Staffmanage", "Position:", nullptr));
        label_5->setText(QCoreApplication::translate("Staffmanage", "Salary:", nullptr));
        label_6->setText(QCoreApplication::translate("Staffmanage", "Works:", nullptr));
        label_7->setText(QCoreApplication::translate("Staffmanage", "Description:", nullptr));
        label_8->setText(QCoreApplication::translate("Staffmanage", "Description:", nullptr));
        label_9->setText(QCoreApplication::translate("Staffmanage", "Name:", nullptr));
        label_10->setText(QCoreApplication::translate("Staffmanage", "Salary:", nullptr));
        label_11->setText(QCoreApplication::translate("Staffmanage", "Works:", nullptr));
        label_12->setText(QCoreApplication::translate("Staffmanage", "Position:", nullptr));
        pushButton->setText(QCoreApplication::translate("Staffmanage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Staffmanage: public Ui_Staffmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFMANAGE_H
