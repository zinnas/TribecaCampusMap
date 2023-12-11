#include "chen.h"
#include "ui_chen.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


Chen::Chen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Chen)
{
    ui->setupUi(this);
}

Chen::~Chen()
{
    delete ui;
}

void Chen::on_pushButton_clicked()
{
    QFile chenInfo("C:/Users/zin-n/Documents/LastVersion/chen.txt");

    if(!chenInfo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }

    QTextStream in(&chenInfo);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
}

