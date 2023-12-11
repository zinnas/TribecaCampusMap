#include "leung.h"
#include "ui_leung.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


Leung::Leung(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Leung)
{
    ui->setupUi(this);
}

Leung::~Leung()
{
    delete ui;
}

void Leung::on_pushButton_clicked()
{
    QFile leungInfo("C:/Users/zin-n/Documents/LastVersion/leung.txt");

    if(!leungInfo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }

    QTextStream in(&leungInfo);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
}

