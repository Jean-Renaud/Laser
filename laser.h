#ifndef LASER_H
#define LASER_H
#include <QString>


class Laser
{
public:
    Laser(QString id, QString Nom, QString Courant, QString angle, QString Classe, QString Type, QString Focalisable, QString Puissance, QString Alimentation, QString indiceProtection, QString Couleur);

    QString getId();
    QString getNom();
    QString getCourant();
    QString getAngle();
    QString getClasse();
    QString getType();
    QString getFocalisable();
    QString getPuissance();
    QString getAlimentation();
    QString getIndiceProtection();
    QString getCouleur();


private:

    QString id;
    QString Nom;
    QString Courant;
    QString Angle;
    QString Classe;
    QString Type;
    QString Focalisable;
    QString Puissance;
    QString Alimentation;
    QString indiceProtection;
    QString Couleur;

};



#endif // LASER_H
