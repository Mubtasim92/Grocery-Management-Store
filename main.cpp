#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("c:/Grocery Manager.sqlite");
    MainWindow w;
    w.show();

    return a.exec();
}
