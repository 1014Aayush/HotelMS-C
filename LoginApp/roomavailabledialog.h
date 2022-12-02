#ifndef ROOMAVAILABLEDIALOG_H
#define ROOMAVAILABLEDIALOG_H

#include <QDialog>

namespace Ui {
class checkoutdialog;
}

class checkoutdialog : public QDialog
{
    Q_OBJECT

public:
    explicit checkoutdialog(QWidget *parent = nullptr);
    ~checkoutdialog();

private:
    Ui::checkoutdialog *ui;
};

#endif // ROOMAVAILABLEDIALOG_H
