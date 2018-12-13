#include "laser.h"

Laser::Laser(QString id, QString Nom, QString Courant, QString Angle, QString Classe, QString Type, QString Focalisable, QString Puissance, QString Alimentation, QString indiceProtection, QString Couleur)
{
    this->id = id;
    this->Nom = Nom;
    this->Courant = Courant;
    this->Angle = Angle;
    this->Classe = Classe;
    this->Type = Type;
    this->Focalisable = Focalisable;
    this->Puissance = Puissance;
    this->Alimentation = Alimentation;
    this->indiceProtection = indiceProtection;
    this->Couleur = Couleur;

}

QString Laser::getId()
{
    return this->id;
}

QString Laser::getNom()
{
    return this->Nom;
}

QString Laser::getCourant()
{
    return this->Courant;
}

QString Laser::getAngle()
{
    return this->Angle;
}

QString Laser::getClasse()
{
    return this->Classe;
}

QString Laser::getType()
{
    return this->Type;
}

QString Laser::getFocalisable()
{
    return this->Focalisable;
}

QString Laser::getPuissance()
{
    return this->Puissance;
}

QString Laser::getAlimentation()
{
    return this->Alimentation;
}

QString Laser::getIndiceProtection()
{
    return this->indiceProtection;
}

QString Laser::getCouleur()
{
    return this->Couleur;
}
