/********************************************************************************
** Form generated from reading UI file 'Staff.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_H
#define UI_STAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1080, 720);
        Dialog->setStyleSheet(QString::fromUtf8("background:url(:/Image/OIP.jfif);"));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 60, 391, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font.setPointSize(36);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(290, 380, 471, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 310, 221, 51));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 460, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(115, 115, 255)"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Staff Management", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Employee Full Name", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_H
