#include "basededonnees.h"
#include <QCoreApplication>
using namespace std;
BaseDeDonnees::BaseDeDonnees()
{

}

BaseDeDonnees::~BaseDeDonnees()
{

}

void BaseDeDonnees::ouvertureConnexion()
{
   laserBdd = QSqlDatabase::addDatabase("QSQLITE");
   laserBdd.setDatabaseName("LaserBDD");
   if(!laserBdd.open())
   {
       qDebug() << "Non connecté";
   }
   else
   {
       qDebug() << "Connecté à la BDD";
   }
}

void BaseDeDonnees::creerTableBdd()
{
    laserBdd = QSqlDatabase::addDatabase("QSQLITE");
    laserBdd.setDatabaseName("LaserBDD");
   laserBdd.open();
   QSqlQuery creation;
   creation.exec("CREATE TABLE IF NOT EXISTS Laser ("
                   "'id' INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "'Nom' TEXT NOT NULL,"
                   "'Courant' TEXT NOT NULL,"
                   "'Angle' TEXT NOT NULL,"
                   "'Classe' TEXT NOT NULL,"
                   "'Type' TEXT NOT NULL,"
                   "'Focalisable' TEXT NOT NULL,"
                   "'Puissance' TEXT NOT NULL,"
                   "'Alimentation' TEXT NOT NULL,"
                   "'Indice' INTEGER NOT NULL,"
                   "'Couleur' INTEGER NOT NULL"
                   ");");

   creation.exec("CREATE TABLE IF NOT EXISTS Angles ("
                   "'id' INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "'Nom' TEXT NOT NULL"
                   ");");

   creation.exec("CREATE TABLE IF NOT EXISTS Couleur ("
                   "'id' INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "'Nom' TEXT NOT NULL"
                   ");");

   creation.exec("CREATE TABLE IF NOT EXISTS Indice ("
                   "'id' INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "'Nom' TEXT NOT NULL"
                   ");");

   creation.exec("CREATE TABLE IF NOT EXISTS ClasseLaser ("
                   "'id' INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "'Nom' TEXT NOT NULL"
                   ");");

   creation.exec("CREATE TABLE IF NOT EXISTS Puissance ("
                   "'id' INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "'Nom' TEXT NOT NULL"
                   ");");

   //INSERTIONS

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (1, '----------------------')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (1, '1MW')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (2, '1MW')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (3, '3MW')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (4, '5MW')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (5, '10MW')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (6, '15MW')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (7, '30MW')");

   creation.exec("INSERT INTO Puissance (id, Nom) "
                           "VALUES (8, '40MW')");

   creation.exec("INSERT INTO ClasseLaser (id, Nom) "
                           "VALUES (1, '----------------------')");

   creation.exec("INSERT INTO ClasseLaser (id, Nom) "
                           "VALUES (2, '1')");

   creation.exec("INSERT INTO ClasseLaser (id, Nom) "
                           "VALUES (3, '2')");

   creation.exec("INSERT INTO ClasseLaser (id, Nom) "
                           "VALUES (4, '2M')");

   creation.exec("INSERT INTO ClasseLaser (id, Nom) "
                           "VALUES (5, '3R')");

   creation.exec("INSERT INTO ClasseLaser (id, Nom) "
                           "VALUES (6, '3B')");

   creation.exec("INSERT INTO Couleur (id, Nom) "
                           "VALUES (1, '----------------------')");

   creation.exec("INSERT INTO Couleur (id, Nom) "
                           "VALUES (2, 'Vert')");

   creation.exec("INSERT INTO Couleur (id, Nom) "
                           "VALUES (3, 'Rouge')");

   creation.exec("INSERT INTO Indice (id, Nom) "
                           "VALUES (1, '----------------------')");

   creation.exec("INSERT INTO Indice (id, Nom) "
                           "VALUES (2, 'IP 42')");

   creation.exec("INSERT INTO Indice (id, Nom) "
                           "VALUES (3, 'IP 54')");

   creation.exec("INSERT INTO Indice (id, Nom) "
                           "VALUES (4, 'IP 67')");

   creation.exec("INSERT INTO Indice (id, Nom) "
                           "VALUES (5, 'IP 65')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (1, '----------------------')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (2, '10°')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (3, '20°')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (4, '30°')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (5, '40°')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (6, '80°')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (7, '38°')");

   creation.exec("INSERT INTO Angles (id, Nom) "
                           "VALUES (8, '62°')");



}

void BaseDeDonnees::fermetureConnexion()
{

    this->laserBdd.close();
    this->laserBdd.removeDatabase(QSqlDatabase::defaultConnection);
}

bool BaseDeDonnees::creerUneReference(Laser &laser)
{
    qDebug() << "On rentre dans la fonction";
        QSqlQuery insererLaser;
        insererLaser.prepare("INSERT INTO Laser (Nom, Courant, Angle, Classe, Type, Focalisable, Puissance, Alimentation, Indice, Couleur) VALUES (:Nom, :Courant, :Angle, :Classe, :Type, :Focalisable, :Puissance, :Alimentation, :Indice, :Couleur)");
        insererLaser.bindValue(":Nom", laser.getNom());
        insererLaser.bindValue(":Courant", laser.getCourant());
        insererLaser.bindValue(":Angle", laser.getAngle());
        insererLaser.bindValue(":Classe", laser.getClasse());
        insererLaser.bindValue(":Type", laser.getType());
        insererLaser.bindValue(":Focalisable", laser.getFocalisable());
        insererLaser.bindValue(":Puissance", laser.getPuissance());
        insererLaser.bindValue(":Alimentation", laser.getAlimentation());
        insererLaser.bindValue(":Indice", laser.getIndiceProtection());
        insererLaser.bindValue(":Couleur", laser.getCouleur());
        return insererLaser.exec();

        qDebug() << "On a fini dans la fonction";

}

void BaseDeDonnees::supprimerLaser(Laser &supprimerLaser)
{
    QSqlQuery supprimerUnLaser;
    supprimerUnLaser.prepare("DELETE FROM Laser WHERE id = :id");
    supprimerUnLaser.bindValue(":id", supprimerLaser.getId());
    supprimerUnLaser.exec();

}

bool BaseDeDonnees::miseAJourLaser(Laser &mettreAjourLaser)
{
    QSqlQuery miseAjourLaser;

    miseAjourLaser.prepare("UPDATE Laser SET Nom = :nom, Courant = :courant, Angle = :angle, Classe = :classe, Type = :type, Focalisable = :focalisable, Puissance = :puissance, "
                           "Alimentation = :alimentation, Indice = :indice, Couleur = :couleur WHERE id = :id");
    miseAjourLaser.bindValue(":id", mettreAjourLaser.getId());
    miseAjourLaser.bindValue(":nom", mettreAjourLaser.getNom());
    miseAjourLaser.bindValue(":courant", mettreAjourLaser.getCourant());
    miseAjourLaser.bindValue(":angle", mettreAjourLaser.getAngle());
    miseAjourLaser.bindValue(":classe", mettreAjourLaser.getClasse());
    miseAjourLaser.bindValue(":type", mettreAjourLaser.getType());
    miseAjourLaser.bindValue(":focalisable", mettreAjourLaser.getFocalisable());
    miseAjourLaser.bindValue(":puissance", mettreAjourLaser.getPuissance());
    miseAjourLaser.bindValue(":alimentation", mettreAjourLaser.getAlimentation());
    miseAjourLaser.bindValue(":indice", mettreAjourLaser.getIndiceProtection());
    miseAjourLaser.bindValue(":couleur", mettreAjourLaser.getCouleur());

    return miseAjourLaser.exec();
}


