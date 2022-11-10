#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <homepage.h>
#include <signup.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDialog>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Login_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    HomePage *homePage;
    signup *signUp;


};
#endif // MAINWINDOW_H
