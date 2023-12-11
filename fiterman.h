#ifndef FITERMAN_H
#define FITERMAN_H

#include <QDialog>

namespace Ui {
class Fiterman;
}

class Fiterman : public QDialog
{
    Q_OBJECT

public:
    explicit Fiterman(QWidget *parent = nullptr);
    ~Fiterman();

private slots:
    void on_pushButton1stF_clicked();

    void on_pushButton9thF_clicked();

    void on_pushButton13thF_clicked();

    void on_pushButton_clicked();

    void on_pushButtonCampusMap_clicked();

    void on_pushButton2ndF_clicked();

    void on_pushButton3rdF_clicked();

    void on_pushButton4th_clicked();

    void on_pushButton5thFloor_clicked();

    void on_pushButton6tF_clicked();

    void on_pushButton7thF_clicked();

    void on_pushButton8thF_clicked();

    void on_pushButton10thF_clicked();

    void on_pushButton11thF_clicked();

    void on_pushButton12thF_clicked();

    void on_pushButton14thF_clicked();

private:
    Ui::Fiterman *ui;
};

#endif // FITERMAN_H
