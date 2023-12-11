#ifndef FITERMAN9F_H
#define FITERMAN9F_H

#include <QDialog>

namespace Ui {
class Fiterman9F;
}

class Fiterman9F : public QDialog
{
    Q_OBJECT

public:
    explicit Fiterman9F(QWidget *parent = nullptr);
    ~Fiterman9F();


private slots:
    void on_pushButtonWei_clicked();

    void on_pushButtonAzhar_clicked();

    void on_pushButtonKok_clicked();

    void on_pushButton_clicked();

    void on_pushButtonChen_clicked();

    void on_pushButtonLeung_clicked();

    void on_pushButtonErrera_clicked();

    void on_pushButtonTang_clicked();

    void on_pushButtonSongWei_clicked();

private:
    Ui::Fiterman9F *ui;
};

#endif // FITERMAN9F_H
