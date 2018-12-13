#ifndef BASEDEDONNEES_H
#define BASEDEDONNEES_H
#include <QtSql/QtSql>
#include <QMainWindow>
#include "laser.h"
#include <QApplication>


class BaseDeDonnees
{
public:
    BaseDeDonnees();
    ~BaseDeDonnees();
    QSqlDatabase laserBdd;
    void creerTableBdd();
    void ouvertureConnexion();
    void fermetureConnexion();
    bool creerUneReference(Laser &laser);
    void supprimerLaser(Laser &supprimerLaser);
    bool miseAJourLaser(Laser &mettreAjourLaser);


};

#endif // BASEDEDONNEES_H
