#include "mainwindow.h"
#include"connection.h"
#include<QApplication>
#include <QMessageBox>
#include "employe.h"
#include "ventevehicule.h"
#include "facture.h"
#include"trajets.h"



int main(int argc, char *argv[])

{
    QApplication a(argc, argv);
    connection c;
    bool test=c.createconnect();//etablir la connexion
    MainWindow w;
    if(test)
       {
           w.show();
           QMessageBox::information(nullptr, QObject::tr("database is open"),
           QObject::tr("connection successful.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);

   }
       else
           QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                       QObject::tr("connection failed.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

   return a.exec();
}


