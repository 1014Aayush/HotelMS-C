#ifndef AVAILABLE_H
#define AVAILABLE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QtSql/QSql>
#include <QDebug>
#include <QDialog>


#include <QDialog>

namespace Ui {
class available;
}

class available : public QDialog
{
    Q_OBJECT

public:
    explicit available(QWidget *parent = nullptr);
    ~available();

private slots:
    void on_pushButton_clicked();

private:
    Ui::available *ui;
};

#endif // AVAILABLE_H
