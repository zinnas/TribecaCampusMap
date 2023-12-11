#include "metekok.h"
#include "ui_metekok.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MeteKok::MeteKok(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MeteKok)
{
    ui->setupUi(this);
}

MeteKok::~MeteKok()
{
    delete ui;
}

void MeteKok::on_pushButton_clicked()
{
    QFile kokInfo("C:/Users/zin-n/Documents/LastVersion/meteKok.txt");

    if(!kokInfo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }

    QTextStream in(&kokInfo);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
}

