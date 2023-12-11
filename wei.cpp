#include "wei.h"
#include "ui_wei.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
wEI::wEI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::wEI)
{
    ui->setupUi(this);
}

wEI::~wEI()
{
    delete ui;
}

void wEI::on_pushButton_clicked()
{
    QFile weiInfo("C:/Users/zin-n/Documents/LastVersion/wei.txt.txt");

    if(!weiInfo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");

    }

    QTextStream in(&weiInfo);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    weiInfo.close();
}

