#ifndef CHAMBERS_H
#define CHAMBERS_H

#include <QDialog>

namespace Ui {
class Chambers;
}

class Chambers : public QDialog
{
    Q_OBJECT

public:
    explicit Chambers(QWidget *parent = nullptr);
    ~Chambers();

private:
    Ui::Chambers *ui;
};

#endif // CHAMBERS_H
