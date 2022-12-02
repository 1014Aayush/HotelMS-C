#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QtSql/QSql>
#include <QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_pushButton_clicked();

private:
    Ui::signup *ui;
    QSqlDatabase database;
};

#endif // SIGNUP_H
