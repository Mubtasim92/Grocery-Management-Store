#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>
#include "mydb.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDialog>

namespace Ui {
class AddItem;
}

class AddItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddItem(QWidget *parent = nullptr);
    ~AddItem();
    void Show();

private slots:
    void on_btnAdd_clicked();

    void on_txtDOP_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::AddItem *ui;
    QSqlDatabase db;
    void resetElements();

};

#endif // ADDITEM_H
