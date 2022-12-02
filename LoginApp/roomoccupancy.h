#ifndef ROOMOCCUPANCY_H
#define ROOMOCCUPANCY_H
#include <QDialog>
//#include <homepage.h>


namespace Ui {
class roomoccupancy;
}

class roomoccupancy : public QDialog
{
    Q_OBJECT

public:
    explicit roomoccupancy(QWidget *parent = nullptr);
    ~roomoccupancy();



/*private slots:
    void on_pushButton_clicked();
*/
private:
    Ui::roomoccupancy *ui;

};

#endif // ROOMOCCUPANCY_H
