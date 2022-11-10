#ifndef SQLCHECK_H
#define SQLCHECK_H


#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class sqlcheck;
}

class sqlcheck : public QDialog
{
    Q_OBJECT

public:
    explicit sqlcheck(QWidget *parent = nullptr);
    ~sqlcheck();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sqlcheck *ui;
};

#endif // SQLCHECK_H
