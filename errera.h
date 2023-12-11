#ifndef ERRERA_H
#define ERRERA_H

#include <QDialog>

namespace Ui {
class Errera;
}

class Errera : public QDialog
{
    Q_OBJECT

public:
    explicit Errera(QWidget *parent = nullptr);
    ~Errera();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Errera *ui;
};

#endif // ERRERA_H
