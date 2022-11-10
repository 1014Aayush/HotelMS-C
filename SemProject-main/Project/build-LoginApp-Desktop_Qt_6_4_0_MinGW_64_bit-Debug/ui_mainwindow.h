/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Background;
    QLabel *BlueBackground;
    QLineEdit *Username;
    QLineEdit *Password;
    QPushButton *Login;
    QLabel *LoginText;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1080, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Background = new QLabel(centralwidget);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 1080, 720));
        Background->setPixmap(QPixmap(QString::fromUtf8(":/Image/The-Rose-Hotel.jpg")));
        Background->setScaledContents(true);
        BlueBackground = new QLabel(centralwidget);
        BlueBackground->setObjectName("BlueBackground");
        BlueBackground->setGeometry(QRect(640, 0, 450, 720));
        BlueBackground->setCursor(QCursor(Qt::ArrowCursor));
        BlueBackground->setPixmap(QPixmap(QString::fromUtf8(":/Image/output-onlinepngtools (3).png")));
        BlueBackground->setScaledContents(true);
        Username = new QLineEdit(centralwidget);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(720, 250, 271, 41));
        Username->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"border-radius:10px;\n"
""));
        Password = new QLineEdit(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(720, 320, 271, 41));
        Password->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"border-radius:10px;\n"
""));
        Password->setEchoMode(QLineEdit::Password);
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(810, 380, 93, 41));
        Login->setCursor(QCursor(Qt::PointingHandCursor));
        Login->setStyleSheet(QString::fromUtf8("background:rgb(250,250,250);\n"
"border-radius:10px;"));
        LoginText = new QLabel(centralwidget);
        LoginText->setObjectName("LoginText");
        LoginText->setGeometry(QRect(780, 150, 161, 81));
        QFont font;
        font.setPointSize(36);
        LoginText->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(810, 430, 93, 29));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"border-radius:10px;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 140, 371, 351));
        label->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/Screenshot 2022-11-08 121736 (1).png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1080, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Background->setText(QString());
        BlueBackground->setText(QString());
        Username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        LoginText->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sign Up?", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
