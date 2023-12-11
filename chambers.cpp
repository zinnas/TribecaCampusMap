#include "chambers.h"
#include "ui_chambers.h"


Chambers::Chambers(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Chambers)
{
    ui->setupUi(this);
}

Chambers::~Chambers()
{
    delete ui;
}

