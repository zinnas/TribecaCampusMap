#include "fiterman.h"
#include "ui_fiterman.h"
#include <QMessageBox>
#include "fiterman9f.h"
#include "maincampus.h"

Fiterman::Fiterman(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Fiterman)
{
    ui->setupUi(this);
    /*
    ui->listWidget->addItem("1st floor");
    ui->listWidget->addItem("2nd floor");
    ui->listWidget->addItem("3rd floor");
    ui->listWidget->addItem("4th floor");
    ui->listWidget->addItem("5th floor");
    ui->listWidget->addItem("6th floor");
    ui->listWidget->addItem("7th floor");
    ui->listWidget->addItem("8th floor");
    ui->listWidget->addItem("9th floor");
    ui->listWidget->addItem("10th floor");
    ui->listWidget->addItem("11th floor");
    ui->listWidget->addItem("12th floor");
    ui->listWidget->addItem("13th floor");
    ui->listWidget->addItem("14th floor");
    */
}

Fiterman::~Fiterman()
{
    delete ui;
}






void Fiterman::on_pushButton1stF_clicked()
{
    QMessageBox::information(this, "1st Floor", "Nothing fun in here. Except printers :P!!");

}

void Fiterman::on_pushButton2ndF_clicked()
{
    QMessageBox::information(this, "2nd Floor", "Elevators are in maintenance. Come back soon!");
}


void Fiterman::on_pushButton9thF_clicked()
{
    hide();

    Fiterman9F fiterman9f;
    fiterman9f.setModal(true);
    fiterman9f.exec();

}


void Fiterman::on_pushButton13thF_clicked()
{
    QMessageBox::warning(this, "13th Floor", "Access denied.");
}


void Fiterman::on_pushButtonCampusMap_clicked()
{
    hide();
    MainCampus mainCampus;
    mainCampus.setModal(true);
    mainCampus.exec();
}




void Fiterman::on_pushButton3rdF_clicked()
{
    QMessageBox::information(this, "3rd Floor", "We are working on it");
}


void Fiterman::on_pushButton4th_clicked()
{
    QMessageBox::information(this, "4th floor", "It is my 3rd year and idk what's in here.");

}


void Fiterman::on_pushButton5thFloor_clicked()
{
    QMessageBox::information(this, "5th Floor", "Ooo so you like math?");
}



void Fiterman::on_pushButton6tF_clicked()
{
    QMessageBox::information(this, "6th Floor", "6x6=?");
}


void Fiterman::on_pushButton7thF_clicked()
{
    QMessageBox::information(this, "7th Floor", "Why would you even come here?");
}


void Fiterman::on_pushButton8thF_clicked()
{
    QMessageBox::information(this, "8th Floor", "I am running out of jokes... Help!!");
}


void Fiterman::on_pushButton10thF_clicked()
{
    QMessageBox::information(this, "Academic Literacy and Linguistics", "So you're cool, huh?");
}


void Fiterman::on_pushButton11thF_clicked()
{
    QMessageBox::information(this, "11th Floor", "11 is not even a good looking number.");
}


void Fiterman::on_pushButton12thF_clicked()
{
    QMessageBox::information(this, "Grants Office", "I am gathering information for you !");
}


void Fiterman::on_pushButton14thF_clicked()
{
    QMessageBox::warning(this, "14th Floor", "Access denied.");
}

