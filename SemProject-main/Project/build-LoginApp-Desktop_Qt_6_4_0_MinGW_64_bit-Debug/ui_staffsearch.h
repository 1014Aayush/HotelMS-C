/********************************************************************************
** Form generated from reading UI file 'staffsearch.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFSEARCH_H
#define UI_STAFFSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Staffsearch
{
public:
    QLabel *background;
    QLabel *StaffManagement;
    QLineEdit *lineEdit;
    QLabel *EnteName;
    QPushButton *SearchButton;
    QPushButton *pushButton;

    void setupUi(QDialog *Staffsearch)
    {
        if (Staffsearch->objectName().isEmpty())
            Staffsearch->setObjectName("Staffsearch");
        Staffsearch->resize(1080, 720);
        background = new QLabel(Staffsearch);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 1080, 720));
        background->setPixmap(QPixmap(QString::fromUtf8(":/Image/OIP.jfif")));
        background->setScaledContents(true);
        StaffManagement = new QLabel(Staffsearch);
        StaffManagement->setObjectName("StaffManagement");
        StaffManagement->setGeometry(QRect(360, 40, 401, 131));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font.setPointSize(36);
        StaffManagement->setFont(font);
        lineEdit = new QLineEdit(Staffsearch);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 300, 631, 61));
        lineEdit->setFocusPolicy(Qt::WheelFocus);
        lineEdit->setStyleSheet(QString::fromUtf8("padding-left:10px;"));
        EnteName = new QLabel(Staffsearch);
        EnteName->setObjectName("EnteName");
        EnteName->setGeometry(QRect(230, 260, 301, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font1.setPointSize(10);
        font1.setBold(false);
        EnteName->setFont(font1);
        SearchButton = new QPushButton(Staffsearch);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(460, 380, 121, 41));
        SearchButton->setStyleSheet(QString::fromUtf8("background:url(:/Image/OIP.jfif);\n"
""));
        pushButton = new QPushButton(Staffsearch);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 10, 93, 29));

        retranslateUi(Staffsearch);

        QMetaObject::connectSlotsByName(Staffsearch);
    } // setupUi

    void retranslateUi(QDialog *Staffsearch)
    {
        Staffsearch->setWindowTitle(QCoreApplication::translate("Staffsearch", "Dialog", nullptr));
        background->setText(QString());
        StaffManagement->setText(QCoreApplication::translate("Staffsearch", "Staff Management", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Staffsearch", "Full Name", nullptr));
        EnteName->setText(QCoreApplication::translate("Staffsearch", "Enter The Name of Employee", nullptr));
        SearchButton->setText(QCoreApplication::translate("Staffsearch", "Search", nullptr));
        pushButton->setText(QCoreApplication::translate("Staffsearch", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Staffsearch: public Ui_Staffsearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFSEARCH_H
