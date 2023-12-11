#ifndef WEI_H
#define WEI_H

#include <QDialog>

namespace Ui {
class wEI;
}

class wEI : public QDialog
{
    Q_OBJECT

public:
    explicit wEI(QWidget *parent = nullptr);
    ~wEI();

private slots:
    void on_pushButton_clicked();

private:
    Ui::wEI *ui;
};

#endif // WEI_H
