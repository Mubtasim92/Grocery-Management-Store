#ifndef UPDATEITEM_H
#define UPDATEITEM_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class UpdateItem;
}

class UpdateItem : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateItem(QWidget *parent = nullptr);
    ~UpdateItem();
    void Show();

private slots:
    void on_pushButton_clicked();

    void on_txtId_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::UpdateItem *ui;
    void updateUI();
};

#endif // UPDATEITEM_H
