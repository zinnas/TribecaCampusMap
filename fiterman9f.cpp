#include "fiterman9f.h"
#include "ui_fiterman9f.h"
#include "wei.h"
#include "azhar.h"
#include "metekok.h"
#include "fiterman.h"
#include "chen.h"
#include "leung.h"
#include "errera.h"
#include "tang.h"
#include <QMessageBox>

Fiterman9F::Fiterman9F(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Fiterman9F)
{
    ui->setupUi(this);
}

Fiterman9F::~Fiterman9F()
{
    delete ui;
}

void Fiterman9F::on_pushButtonWei_clicked()
{
    wEI wei;
    wei.setModal(true);
    wei.exec();
}



void Fiterman9F::on_pushButtonAzhar_clicked()
{
    Azhar azhar;
    azhar.setModal(true);
    azhar.exec();
}


void Fiterman9F::on_pushButtonKok_clicked()
{
    MeteKok metekok;
    metekok.setModal(true);
    metekok.exec();
}


void Fiterman9F::on_pushButton_clicked()
{
    hide();
    Fiterman fiterman;
    fiterman.setModal(true);
    fiterman.exec();

}


void Fiterman9F::on_pushButtonChen_clicked()
{
    Chen chen;
    chen.setModal(true);
    chen.exec();
}


void Fiterman9F::on_pushButtonLeung_clicked()
{
    Leung leung;
    leung.setModal(true);
    leung.exec();
}


void Fiterman9F::on_pushButtonErrera_clicked()
{
    Errera errera;
    errera.setModal(true);
    errera.exec();
}


void Fiterman9F::on_pushButtonTang_clicked()
{
    Tang tang;
    tang.setModal(true);
    tang.exec();
}


void Fiterman9F::on_pushButtonSongWei_clicked()
{
    QMessageBox::information(this, "wei", "This is the same person as the chairperson Wei!");
}

