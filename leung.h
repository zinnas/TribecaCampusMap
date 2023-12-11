#ifndef LEUNG_H
#define LEUNG_H

#include <QDialog>

namespace Ui {
class Leung;
}

class Leung : public QDialog
{
    Q_OBJECT

public:
    explicit Leung(QWidget *parent = nullptr);
    ~Leung();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Leung *ui;
};

#endif // LEUNG_H
