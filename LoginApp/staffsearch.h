#ifndef STAFFSEARCH_H
#define STAFFSEARCH_H

#include <QDialog>
#include <staffmanage.h>

namespace Ui {
class Staffsearch;
}

class Staffsearch : public QDialog
{
    Q_OBJECT

public:
    explicit Staffsearch(QWidget *parent = nullptr);
    ~Staffsearch();

private slots:
    void on_SearchButton_clicked();

private:
    Ui::Staffsearch *ui;
    Staffmanage *staffManage;

};

#endif // STAFFSEARCH_H
