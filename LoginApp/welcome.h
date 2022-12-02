#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Welcome;
}
QT_END_NAMESPACE
class Welcome : public QDialog
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
