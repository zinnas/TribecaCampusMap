#ifndef METEKOK_H
#define METEKOK_H

#include <QDialog>

namespace Ui {
class MeteKok;
}

class MeteKok : public QDialog
{
    Q_OBJECT

public:
    explicit MeteKok(QWidget *parent = nullptr);
    ~MeteKok();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MeteKok *ui;
};

#endif // METEKOK_H
