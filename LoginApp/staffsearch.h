#ifndef STAFFSEARCH_H
#define STAFFSEARCH_H

#include <QDialog>
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

    void on_pushButton_clicked();

private:
    Ui::Staffsearch *ui;
};

#endif // STAFFSEARCH_H
