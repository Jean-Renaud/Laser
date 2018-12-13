#include "mainwindow.h"
#include "basededonnees.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    BaseDeDonnees bdd;
    bdd.creerTableBdd();

    w.setWindowTitle("Elyotec laser ligne");
    w.show();

    return a.exec();
}
