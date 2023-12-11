#ifndef TANG_H
#define TANG_H

#include <QDialog>

namespace Ui {
class Tang;
}

class Tang : public QDialog
{
    Q_OBJECT

public:
    explicit Tang(QWidget *parent = nullptr);
    ~Tang();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tang *ui;
};

#endif // TANG_H
