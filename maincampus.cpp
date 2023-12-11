#include "maincampus.h"
#include "ui_maincampus.h"
#include "fiterman.h"
//#include "chambers.h"
#include <QMessageBox>
MainCampus::MainCampus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainCampus)
{
    ui->setupUi(this);
}

MainCampus::~MainCampus()
{
    delete ui;
}


void MainCampus::on_pushButtonFiterman_clicked()
{
    hide();
    Fiterman fiterman;
    fiterman.setModal(true);
    fiterman.exec();
}


void MainCampus::on_pushButtonChambers_clicked()
{

    //hide();
    QMessageBox::information(this, "Chamber", "Nothing to see here. Yet!");

    /*
    Chambers chambers;
    chambers.setModal(true);
    chambers.exec();
    */
}



void MainCampus::on_pushButtonMurray_clicked()
{
    QMessageBox::information(this, "Murray", "Nothing to see here. Yet!");
}

