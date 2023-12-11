#include "errera.h"
#include "ui_errera.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Errera::Errera(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Errera)
{
    ui->setupUi(this);
}

Errera::~Errera()
{
    delete ui;
}

void Errera::on_pushButton_clicked()
{
    QFile erreraInfo("C:/Users/zin-n/Documents/LastVersion/errera.txt");
    if(!erreraInfo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }

    QTextStream in(&erreraInfo);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

}

