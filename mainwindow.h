#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "additem.h"
#include "displayitems.h"
#include "expireditems.h"
#include "solditems.h"
#include "spoileditems.h"
#include "returneditems.h"
#include "availableitems.h"
#include "finditem.h"
#include "updateitem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAddItem_clicked();

    void on_btnUpdateItem_clicked();

    void on_btnSoldItems_clicked();

    void on_btnReport_clicked();

    void on_btnExpiredItems_clicked();

    void on_btnAvailableItems_clicked();

    void on_btnSpoiledItem_clicked();

    void on_btnReturnItems_clicked();

    void on_btnFindItem_clicked();

    void on_label_pic_2_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    AddItem * ptrAddItem;
    ItemsReport *ptrItemReport;

    SpoiledItems *ptrSpoiledItems;
    SoldItems *ptrSoldITems;
    ExpiredItems *ptrExpiredItems;
    ReturnedItems *ptrReturnedItems;
    AvailableItems *ptrAvailableItems;
    FindItem * ptrFindItem;
    UpdateItem *ptrUpdateItem;

};

#endif // MAINWINDOW_H
