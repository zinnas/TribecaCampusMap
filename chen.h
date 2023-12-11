#ifndef CHEN_H
#define CHEN_H

#include <QDialog>

namespace Ui {
class Chen;
}

class Chen : public QDialog
{
    Q_OBJECT

public:
    explicit Chen(QWidget *parent = nullptr);
    ~Chen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Chen *ui;
};

#endif // CHEN_H
