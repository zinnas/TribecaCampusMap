// azhar.h
#ifndef AZHAR_H
#define AZHAR_H
#include "info.h"

#include <QDialog>

namespace Ui {
class Azhar;
}

class Azhar : public QDialog, public Info
{
    Q_OBJECT

public:
    explicit Azhar(QWidget *parent = nullptr);
    ~Azhar();

private slots:
    void on_pushButton_clicked();
    void on_textEdit_copyAvailable(bool b);

private:
    Ui::Azhar *ui;
};

#endif // AZHAR_H
