#include "tang.h"
#include "ui_tang.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Tang::Tang(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Tang)
{
    ui->setupUi(this);
}

Tang::~Tang()
{
    delete ui;
}


void Tang::on_pushButton_clicked()
{
    QFile tangInfo("C:/Users/zin-n/Documents/LastVersion/tang.txt");

    if(!tangInfo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }

    QTextStream in(&tangInfo);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
}

