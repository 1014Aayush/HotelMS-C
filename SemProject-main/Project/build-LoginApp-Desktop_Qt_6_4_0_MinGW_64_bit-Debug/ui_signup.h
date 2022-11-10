/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label_7;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(1080, 720);
        label = new QLabel(signup);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1080, 720));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Image/The-Rose-Hotel.jpg")));
        label_2 = new QLabel(signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 20, 591, 641));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Image/output-onlinepngtools (4).png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 150, 101, 20));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);"));
        lineEdit = new QLineEdit(signup);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(350, 180, 391, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"border-radius:15px;"));
        label_4 = new QLabel(signup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 240, 161, 20));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);"));
        lineEdit_2 = new QLineEdit(signup);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(350, 270, 391, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"border-radius:15px;"));
        lineEdit_3 = new QLineEdit(signup);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(350, 360, 391, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"border-radius:15px;"));
        label_5 = new QLabel(signup);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 330, 63, 20));
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);"));
        label_6 = new QLabel(signup);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(360, 420, 161, 20));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);"));
        lineEdit_4 = new QLineEdit(signup);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(350, 450, 391, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"border-radius:15px;"));
        pushButton = new QPushButton(signup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(472, 510, 131, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background:rgb(255, 255, 255);"));
        label_7 = new QLabel(signup);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 80, 141, 51));
        QFont font;
        font.setPointSize(24);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);"));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("signup", "Business Name", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "Years Of Subscription", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "SignUp", nullptr));
        label_7->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
