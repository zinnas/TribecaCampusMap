#ifndef MAINCAMPUS_H
#define MAINCAMPUS_H

#include <QDialog>

namespace Ui {
class MainCampus;
}

class MainCampus : public QDialog
{
    Q_OBJECT

public:
    explicit MainCampus(QWidget *parent = nullptr);
    ~MainCampus();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonFiterman_clicked();

    void on_pushButtonChambers_clicked();

    void on_pushButtonMurray_clicked();

private:
    Ui::MainCampus *ui;
};

#endif // MAINCAMPUS_H
