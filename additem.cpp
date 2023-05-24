#include "additem.h"
#include "ui_additem.h"
#include <QMessageBox>

AddItem::AddItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItem)
{
    ui->setupUi(this);
    db = QSqlDatabase :: addDatabase("QSQLITE");
        db.setDatabaseName("c:/Grocery Manager.sqlite");
        qDebug()<< db.open();
}

AddItem::~AddItem()
{
    db.close();
    delete ui;
}

void AddItem::Show()
{
    this->show();
}

void AddItem::on_btnAdd_clicked()
{
    ui->lblInfo->setText("");
    QString sName = ui->txtName->text();
    QString sQuantity = ui->txtQuantity->text();
    QString sStatus = ui->cmbStatus->currentText();
    QString sDOP = ui->txtDOP->text();
    QString sDOS = ui->txtDOS->text();
    QString sSellingPrice = ui->txtSellingPrice->text();
    QString sPurchasePrice = ui->txtPurchasePrice->text();

    QSqlQuery query;
    query.exec("insert into cppbuzz_items(Name, Quantity, Status, DOP, DOS, SellingPrice, PurchasePrice) values ('" +sName +"','" +sQuantity + "','"+ sStatus + "','" +sDOP + "','"+ sDOS+ "','"+sSellingPrice+ "','"+ sPurchasePrice + "')");
    QMessageBox :: information(this,"Insert info","Insert information successful");
    }

void AddItem::resetElements()
{
    ui->txtName->clear();
    ui->txtQuantity->clear();
    ui->txtDOP->clear();
    ui->txtDOS->clear();
    ui->txtSellingPrice->clear();
    ui->txtPurchasePrice->clear();
}

void AddItem::on_txtDOP_cursorPositionChanged(int arg1, int arg2)
{

}

