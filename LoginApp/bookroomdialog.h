#ifndef BOOKROOMDIALOG_H
#define BOOKROOMDIALOG_H

#include <QDialog>
#include <QtSql/QSql>
#include <QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>


namespace Ui {
class bookroomdialog;
}

class bookroomdialog : public QDialog
{
    Q_OBJECT

public:
    explicit bookroomdialog(QWidget *parent = nullptr);
    ~bookroomdialog();

private slots:
    //void on_pushButton_clicked();

    void on_Cancel_clicked();

    void on_pushButton_clicked();

private:
    Ui::bookroomdialog *ui;
    QSqlDatabase database;

};

#endif // BOOKROOMDIALOG_H
