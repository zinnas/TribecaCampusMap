#include "login.h"
#include "ui_login.h"
#include "maincampus.h"
#include <QMessageBox>
#include <ctype.h>
#include <QRegularExpression>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


//Action that will be taken when log in button is clicked
//Check if user enteres 8-digits EMPLID ID


void Login::on_pushButtonLogIn2_clicked() {
    try {
        QString emplidID = ui->lineEditEmplidID->text();
        QRegularExpression regex("\\b\\d{8}\\b");  // Regular expression for exactly 8 digits

        if (!regex.match(emplidID).hasMatch()) {
            QMessageBox::warning(this, "Log In", "Please enter a valid 8-digit numeric EMPLID ID");
        } else {
            hide();
            MainCampus mainCampus;
            mainCampus.setModal(true);
            mainCampus.exec();
        }
    } catch (const std::exception &e) {
        qDebug() << "Exception caught: " << e.what();
        QMessageBox::critical(this, "Error", "An unexpected error occurred. Please try again.");
        // Handle the exception
    }
}

