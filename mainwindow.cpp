#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "basededonnees.h"
#include "laser.h"
#include <QColor>
#include <QColorDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QFont>
#include <qmath.h>
#include <iostream>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


     ui->id->setVisible(false);
     ui->btnAjoutClasse->setCursor(Qt::PointingHandCursor);
     ui->btnAjoutCouleur->setCursor(Qt::PointingHandCursor);
     ui->btnAjoutIndice->setCursor(Qt::PointingHandCursor);
     ui->btnAjoutPuissance->setCursor(Qt::PointingHandCursor);
     ui->btnRechercherClasse->setCursor(Qt::PointingHandCursor);
     ui->btnRechercherCouleur->setCursor(Qt::PointingHandCursor);
     ui->btnRechercherIndice->setCursor(Qt::PointingHandCursor);
     ui->btnRechercherPuissance->setCursor(Qt::PointingHandCursor);
     ui->btnSupprimerClasse->setCursor(Qt::PointingHandCursor);
     ui->btnSupprimerCouleur->setCursor(Qt::PointingHandCursor);
     ui->btnSupprimerIndice->setCursor(Qt::PointingHandCursor);
     ui->btnSupprimerPuissance->setCursor(Qt::PointingHandCursor);
     ui->validModif->setCursor(Qt::PointingHandCursor);
     ui->supprimerLaser->setCursor(Qt::PointingHandCursor);
     ui->pushButton_2->setCursor(Qt::PointingHandCursor);
     ui->modifierAngle->setCursor(Qt::PointingHandCursor);
     ui->modifierClasse->setCursor(Qt::PointingHandCursor);
     ui->modifierCouleur->setCursor(Qt::PointingHandCursor);
     ui->modifierPuissance->setCursor(Qt::PointingHandCursor);
     ui->modifierIndice->setCursor(Qt::PointingHandCursor);
     ui->btnSupprimerIndice_2->setCursor(Qt::PointingHandCursor);
     ui->pushButton_3->setCursor(Qt::PointingHandCursor);
     ui->btnAjoutAngle->setCursor(Qt::PointingHandCursor);
     ui->enregistrerEnBdd->setCursor(Qt::PointingHandCursor);
     //ui->angleForm->setText("°");
     ui->degre->setEnabled(false);
     ui->degre->setText("°");
     ui->debutLigne->setEnabled(false);
     ui->pointForm->setEnabled(false);
     ui->finForm->setEnabled(false);
     ui->ligneForm->setEnabled(false);
     ui->hypotenuse->setEnabled(false);
     ui->angleBas->setEnabled(false);
     ui->angleHaut->setEnabled(false);
     ui->angleForm->setEnabled(false);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::accessoires()
{
    QPixmap pix("C:/Users/Jean-Renaud/Documents/choixLaserLigne/image/fixation.jpg");
    //ui->supports->setPixmap(pix);
}

void MainWindow::chargerCouleur()
{
    //COULEUR
        QSqlQueryModel * codeBdd = new QSqlQueryModel();
        QSqlQuery * couleur = new QSqlQuery;
        couleur->prepare("SELECT Nom FROM Couleur");

        if(!couleur->exec())
        {
            QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
        }
        else{
            codeBdd->setQuery(*couleur);
            ui->enregistrerCouleur->setModel(codeBdd);
        }
}

//METHODES PERMETTANT DE CHARGER LES OPTIONS DES LASERS LIGNE

void MainWindow::chargerPuissance()
{
    // PUISSANCE

        QSqlQueryModel * codeBdd3 = new QSqlQueryModel();
        QSqlQuery * puissance = new QSqlQuery;
        puissance->prepare("SELECT Nom FROM Puissance");

        if(!puissance->exec())
        {
            QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
        }
        else{
            codeBdd3->setQuery(*puissance);
            ui->enregistrerPuissance->setModel(codeBdd3);
        }
}

void MainWindow::chargerClasse()
{
    //CLASSE LASER

        QSqlQueryModel * codeBdd4 = new QSqlQueryModel();
        QSqlQuery * classe = new QSqlQuery;
        classe->prepare("SELECT Nom FROM ClasseLaser");

        if(!classe->exec())
        {
            QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
        }
        else{
            codeBdd4->setQuery(*classe);
            ui->enregistrerClasse->setModel(codeBdd4);
        }
}

void MainWindow::chargerAngle()
{
        QSqlQueryModel * codeBdd5 = new QSqlQueryModel();
        QSqlQuery * classe = new QSqlQuery;
        classe->prepare("SELECT Nom FROM Angles ORDER BY Nom ASC");

        if(!classe->exec())
        {
            QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
        }
        else{
            codeBdd5->setQuery(*classe);
            ui->enregistrerAngle->setModel(codeBdd5);
        }
}

void MainWindow::comptage()
{

    QSqlQuery compter;
    compter.exec("SELECT COUNT(*) FROM Laser");
    while(compter.next())
    {
        ui->comptageBDD->setText(compter.value(0).toString());
    }



}




void MainWindow::chargerIndice()
{
    //INDICE

        QSqlQueryModel * codeBdd2 = new QSqlQueryModel();
        QSqlQuery * indice = new QSqlQuery;
        indice->prepare("SELECT Nom FROM Indice");

        if(!indice->exec())
        {
            QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
        }
        else{
            codeBdd2->setQuery(*indice);
            ui->enregistrerIndice->setModel(codeBdd2);
        }

}


void MainWindow::on_enregistrerEnBdd_clicked()
{

    Laser *laser = new Laser(
                             ui->id->text(),
                             ui->enregistrerNom->text(),
                             ui->enregistrerCourant->currentText(),
                             ui->enregistrerAngle->currentText(),
                             ui->enregistrerClasse->currentText(),
                             ui->enregistreType->currentText(),
                             ui->enregistrerFocalisable->currentText(),
                             ui->enregistrerPuissance->currentText(),
                             ui->enregistrerAlimentation->currentText(),
                             ui->enregistrerIndice->currentText(),
                             ui->enregistrerCouleur->currentText()
                             );

    this->bdd->creerUneReference(*laser);
    QMessageBox::information(this, "Information", "Le laser a bien été ajouté en base de données.");

}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{

    QString renvoyerDansChampTexte = ui->tableView->model()->data(index).toString();
    ui->tableView->verticalHeader()->setVisible(false);
    QSqlQuery cliqueSurListe;
    cliqueSurListe.prepare("SELECT id, Nom, Courant, Angle, Classe, Type, Focalisable, Puissance, Alimentation, Indice, Couleur FROM Laser WHERE id = :id or "
                           "Nom = :nom or "
                           "Courant = :courant or "
                           "Angle = :angle or "
                           "Classe = :classe or "
                           "Type = :type or "
                           "Focalisable = :focalisable or "
                           "Puissance = :puissance or "
                           "Alimentation = :alimentation or "
                           "Indice = :indice or "
                           "Couleur = :couleur");
    cliqueSurListe.bindValue(":id", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":nom", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":courant", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":angle", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":classe", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":type", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":focalisable", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":puissance", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":alimentation",renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":indice", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":couleur", renvoyerDansChampTexte);


    cliqueSurListe.exec();

    while(cliqueSurListe.next())
    {
        ui->modifID->setText(cliqueSurListe.value(0).toString());
        ui->modifNom->setText(cliqueSurListe.value(1).toString());
        ui->modifCourant->setText(cliqueSurListe.value(2).toString());
        ui->modifAngle->setText(cliqueSurListe.value(3).toString());
        ui->modifClasse->setText(cliqueSurListe.value(4).toString());
        ui->modifType->setText(cliqueSurListe.value(5).toString());
        ui->modifFocalisable->setText(cliqueSurListe.value(6).toString());
        ui->modifPuissance->setText(cliqueSurListe.value(7).toString());
        ui->modifAlimentation->setText(cliqueSurListe.value(8).toString());
        ui->modifIndice->setText(cliqueSurListe.value(9).toString());
        ui->modifCouleur->setText(cliqueSurListe.value(10).toString());
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    comptage();
    QSqlQueryModel * modal2 = new QSqlQueryModel();
    clearFocus();
    QSqlQuery rechercherEnBdd;
    rechercherEnBdd.prepare("SELECT * FROM Laser ORDER BY Nom");
    if(!rechercherEnBdd.exec()){
        QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
    }
    else{
        modal2->setQuery(rechercherEnBdd);
        ui->tableView->setModel(modal2);
        ui->tableView->verticalHeader()->setVisible(false);
    }
}

void MainWindow::on_supprimerLaser_clicked()
{
    Laser *supprimerLaser = new Laser( ui->modifID->text(),
                                       ui->enregistrerNom->text(),
                                       ui->enregistrerCourant->currentText(),
                                       ui->enregistrerAngle->currentText(),
                                       ui->enregistrerClasse->currentText(),
                                       ui->enregistreType->currentText(),
                                       ui->enregistrerFocalisable->currentText(),
                                       ui->enregistrerPuissance->currentText(),
                                       ui->enregistrerAlimentation->currentText(),
                                       ui->enregistrerIndice->currentText(),
                                       ui->enregistrerCouleur->currentText()
                                       );

    if(ui->modifID->text().isEmpty())
    {
        QMessageBox::critical(this, "Information", "Vous devez selectionner un laser à supprimer.");

    }
    else{
        int reponse = QMessageBox::question(this, "Avertissement", "ATTENTION! Vous êtes sur le point de supprimer un laser,"
                                                                   " cette action est irreversible. Cliquez sur OUI pour confirmer ou"
                                                                   " sur NON pour annuler.", QMessageBox::Yes | QMessageBox::No);

        if (reponse == QMessageBox::Yes)
        {
            this->bdd->supprimerLaser(*supprimerLaser);
            QSqlQueryModel * actualiserListe = new QSqlQueryModel();
            QSqlQuery actualiser;
            actualiser.exec("SELECT * FROM Laser");
            actualiserListe->setQuery(actualiser);
            this->ui->tableView->setModel(actualiserListe);
            QMessageBox::information(this, "Information", "Le laser a correctement été supprimé.");
        }
        else if (reponse == QMessageBox::No)
        {
            QMessageBox::warning(this, "Information", "Le laser n'a pas été supprimé.");
        }
    }
}

void MainWindow::on_validModif_clicked()
{
    Laser *mettreAjourLaser = new Laser( ui->modifID->text(),
                                         ui->modifNom->text(),
                                         ui->modifCourant->text(),
                                         ui->modifAngle->text(),
                                         ui->modifClasse->text(),
                                         ui->modifType->text(),
                                         ui->modifFocalisable->text(),
                                         ui->modifPuissance->text(),
                                         ui->modifAlimentation->text(),
                                         ui->modifIndice->text(),
                                         ui->modifCouleur->text()
                                         );

    if(ui->modifID->text().isEmpty())
    {
        QMessageBox::critical(this,tr("Champ vide"),tr("Vous avez laissé un champ vide."));

    }
  else if(this->bdd->miseAJourLaser(*mettreAjourLaser))
    {
        QSqlQueryModel * rafraichirListeMajUtilisateur = new QSqlQueryModel();
        ui->tableView->verticalHeader()->setVisible(false);
        clearFocus();
        QSqlQuery rafraichirListe;
        rafraichirListe.exec("SELECT * FROM Laser");
        rafraichirListeMajUtilisateur->setQuery(rafraichirListe);
        this->ui->tableView->setModel(rafraichirListeMajUtilisateur);
        QMessageBox::information(this, "Modification réussie", "Le laser a été mis à jour avec succès.");

        //On réinitialise les champs de saisis.
        ui->modifNom->clear();
        ui->modifCourant->clear();
        ui->modifAngle->clear();
        ui->modifClasse->clear();
        ui->modifType->clear();
        ui->modifFocalisable->clear();
        ui->modifPuissance->clear();
        ui->modifAlimentation->clear();
        ui->modifIndice->clear();
        ui->modifCouleur->clear();
    }
    else
    {
        QMessageBox::critical(this,tr("Modification échouée"),tr("La modification du laser a échouée"));
    }
}


void MainWindow::on_btnAjoutCouleur_clicked()
{
    QString ajouterCouleur = ui->ajoutCouleur->text();
    QSqlQuery ajout;

    ajout.prepare("INSERT INTO Couleur (Nom) VALUES (:Nom)");
    ajout.bindValue(":Nom", ajouterCouleur);
    if(!ajout.exec())
    {
        QMessageBox::critical(this,tr("Ajout échoué"),tr("L'ajout de la couleur a échouée"));

    }
    else
    {
        chargerCouleur();
        QMessageBox::information(this,tr("Ajout réussi"),tr("L'ajout a été effectué avec succès."));
        ui->ajoutCouleur->clear();
    }



}

void MainWindow::on_btnAjoutIndice_clicked()
{
    QString ajouterIndice = ui->ajoutIndice->text();
    QSqlQuery ajout;

    ajout.prepare("INSERT INTO Indice (Nom) VALUES (:Nom)");
    ajout.bindValue(":Nom", ajouterIndice);
    if(!ajout.exec())
    {
        QMessageBox::critical(this,tr("Ajout échoué"),tr("L'ajout de l'indice a échoué"));

    }
    else
    {
        chargerIndice();
        QMessageBox::information(this,tr("Ajout réussi"),tr("L'ajout a été effectué avec succès."));
        ui->ajoutIndice->clear();
    }

}

void MainWindow::on_btnAjoutPuissance_clicked()
{
    QString ajouterPuissance = ui->ajoutPuissance->text();
    QSqlQuery ajout;

    ajout.prepare("INSERT INTO Puissance (Nom) VALUES (:Nom)");
    ajout.bindValue(":Nom", ajouterPuissance);
    if(!ajout.exec())
    {
        QMessageBox::critical(this,tr("Ajout échoué"),tr("L'ajout de la puissance a échouée"));

    }
    else
    {
        chargerPuissance();
        QMessageBox::information(this,tr("Ajout réussi"),tr("L'ajout a été effectué avec succès."));
        ui->ajoutPuissance->clear();
    }

}

void MainWindow::on_btnAjoutClasse_clicked()
{
    QString ajouterClasse = ui->ajoutClasse->text();
    QSqlQuery ajout;

    ajout.prepare("INSERT INTO ClasseLaser (Nom) VALUES (:Nom)");
    ajout.bindValue(":Nom", ajouterClasse);
    if(!ajout.exec())
    {
        QMessageBox::critical(this,tr("Ajout échoué"),tr("L'ajout de la classe laser a échouée"));

    }
    else
    {
        chargerClasse();
        QMessageBox::information(this,tr("Ajout réussi"),tr("L'ajout a été effectué avec succès."));
        ui->ajoutClasse->clear();
    }
}

void MainWindow::on_btnAjoutAngle_clicked()
{
    QString ajouterClasse = ui->ajoutAngle->text();
    QSqlQuery ajout;

    ajout.prepare("INSERT INTO Angles (Nom) VALUES (:Nom)");
    ajout.bindValue(":Nom", ajouterClasse);
    if(!ajout.exec())
    {
        QMessageBox::critical(this,tr("Ajout échoué"),tr("L'ajout de l'angle d'ouverture a échouée"));

    }
    else
    {
        chargerAngle();
        QMessageBox::information(this,tr("Ajout réussi"),tr("L'ajout a été effectué avec succès."));
        ui->ajoutAngle->clear();
    }
}


void MainWindow::on_tabWidget_tabBarClicked()
{
    chargerCouleur();
    chargerIndice();
    chargerPuissance();
    chargerClasse();
    chargerAngle();
}

//SUPPRESSION DES OPTIONS

void MainWindow::on_btnSupprimerCouleur_clicked()
{
    QString supprimerCouleur = ui->idCouleurSuppr->text();
    QSqlQuery supprimer;
    supprimer.prepare("DELETE FROM Couleur WHERE  id = :id");
    supprimer.bindValue(":id", supprimerCouleur);
    if(supprimer.exec())
    {
        QSqlQueryModel * actualiserListe = new QSqlQueryModel();
        QSqlQuery actualiser;
        actualiser.exec("SELECT * FROM Couleur");
        actualiserListe->setQuery(actualiser);
        this->ui->tableauSupprimer->setModel(actualiserListe);
        QMessageBox::information(this, "Information", "La puissance a correctement été supprimée.");
    }

}

void MainWindow::on_btnSupprimerIndice_clicked()
{
    QString supprimerIndice = ui->idIndiceSuppr->text();
    QSqlQuery supprimer;
    supprimer.prepare("DELETE FROM Indice WHERE  id = :id");
    supprimer.bindValue(":id", supprimerIndice);
    if(supprimer.exec())
    {
        QSqlQueryModel * actualiserListe = new QSqlQueryModel();
        QSqlQuery actualiser;
        actualiser.exec("SELECT * FROM Indice");
        actualiserListe->setQuery(actualiser);
        this->ui->tableauProtection->setModel(actualiserListe);
        QMessageBox::information(this, "Information", "La puissance a correctement été supprimée.");
    }

}

void MainWindow::on_btnSupprimerPuissance_clicked()
{
    QString supprimerPuissance = ui->idPuissanceSuppr->text();
    QSqlQuery supprimer;
    supprimer.prepare("DELETE FROM Puissance WHERE  id = :id");
    supprimer.bindValue(":id", supprimerPuissance);
    if(supprimer.exec())
    {
        QSqlQueryModel * actualiserListe = new QSqlQueryModel();
        QSqlQuery actualiser;
        actualiser.exec("SELECT * FROM Puissance");
        actualiserListe->setQuery(actualiser);
        this->ui->tableauPuissance->setModel(actualiserListe);
        QMessageBox::information(this, "Information", "La puissance a correctement été supprimée.");
    }
}

void MainWindow::on_btnSupprimerClasse_clicked()
{
    QString supprimerClasse = ui->idClasseSuppr->text();
    QSqlQuery supprimer;
    supprimer.prepare("DELETE FROM ClasseLaser WHERE  id = :id");
    supprimer.bindValue(":id", supprimerClasse);
    if(supprimer.exec())
    {
        QSqlQueryModel * actualiserListe = new QSqlQueryModel();
        QSqlQuery actualiser;
        actualiser.exec("SELECT * FROM Puissance");
        actualiserListe->setQuery(actualiser);
        this->ui->tableauClasse->setModel(actualiserListe);
        QMessageBox::information(this, "Information", "La puissance a correctement été supprimée.");
    }
}

void MainWindow::on_tableauSupprimer_activated(const QModelIndex &index)
{
    QString renvoyerDansChampTexte = ui->tableauSupprimer->model()->data(index).toString();
    ui->tableauSupprimer->verticalHeader()->setVisible(false);
    QSqlQuery cliqueSurListe;
    cliqueSurListe.prepare("SELECT id, Nom FROM Couleur WHERE id = :id or "
                           "Nom = :nom");
    cliqueSurListe.bindValue(":id", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":nom", renvoyerDansChampTexte);
    cliqueSurListe.exec();

    while(cliqueSurListe.next())
    {
        ui->idCouleurSuppr->setEnabled(false);
        ui->idCouleurSuppr->setText(cliqueSurListe.value(0).toString());
        ui->nomCouleurSuppr->setText(cliqueSurListe.value(1).toString());

    }
}

void MainWindow::on_btnRechercherCouleur_clicked()
{
    QSqlQueryModel * modal3 = new QSqlQueryModel();
    clearFocus();
    QSqlQuery rechercherEnBdd;
    rechercherEnBdd.prepare("SELECT * FROM Couleur");
    if(!rechercherEnBdd.exec()){
        QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
    }
    else{
        modal3->setQuery(rechercherEnBdd);
        ui->tableauSupprimer->setModel(modal3);
        ui->tableauSupprimer->verticalHeader()->setVisible(false);
    }
}

void MainWindow::on_btnRechercherClasse_clicked()
{
    QSqlQueryModel * modal4 = new QSqlQueryModel();
    clearFocus();
    QSqlQuery rechercherEnBdd;
    rechercherEnBdd.prepare("SELECT * FROM ClasseLaser");
    if(!rechercherEnBdd.exec()){
        QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
    }
    else{
        modal4->setQuery(rechercherEnBdd);
        ui->tableauClasse->setModel(modal4);
        ui->tableauClasse->verticalHeader()->setVisible(false);
    }
}

void MainWindow::on_btnRechercherPuissance_clicked()
{
    QSqlQueryModel * modal5 = new QSqlQueryModel();
    clearFocus();
    QSqlQuery rechercherEnBdd;
    rechercherEnBdd.prepare("SELECT * FROM Puissance");
    if(!rechercherEnBdd.exec()){
        QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
    }
    else{
        modal5->setQuery(rechercherEnBdd);
        ui->tableauPuissance->setModel(modal5);
        ui->tableauPuissance->verticalHeader()->setVisible(false);
    }
}


void MainWindow::on_btnRechercherIndice_clicked()
{
    QSqlQueryModel * modal6 = new QSqlQueryModel();
    clearFocus();
    QSqlQuery rechercherEnBdd;
    rechercherEnBdd.prepare("SELECT * FROM Indice");
    if(!rechercherEnBdd.exec()){
        QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
    }
    else{
        modal6->setQuery(rechercherEnBdd);
        ui->tableauProtection->setModel(modal6);
        ui->tableauProtection->verticalHeader()->setVisible(false);
    }
}

void MainWindow::on_tableauClasse_activated(const QModelIndex &index)
{

    QString renvoyerDansChampTexte = ui->tableauClasse->model()->data(index).toString();
    ui->tableauClasse->verticalHeader()->setVisible(false);
    QSqlQuery cliqueSurListe;
    cliqueSurListe.prepare("SELECT id, Nom FROM ClasseLaser WHERE id = :id or "
                           "Nom = :nom");
    cliqueSurListe.bindValue(":id", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":nom", renvoyerDansChampTexte);
    cliqueSurListe.exec();

    while(cliqueSurListe.next())
    {
        ui->idClasseSuppr->setEnabled(false);
        ui->idClasseSuppr->setText(cliqueSurListe.value(0).toString());
        ui->nomClasseSuppr->setText(cliqueSurListe.value(1).toString());

    }

}

void MainWindow::on_tableauPuissance_activated(const QModelIndex &index)
{
    QString renvoyerDansChampTexte = ui->tableauPuissance->model()->data(index).toString();
    ui->tableauPuissance->verticalHeader()->setVisible(false);
    QSqlQuery cliqueSurListe;
    cliqueSurListe.prepare("SELECT id, Nom FROM Puissance WHERE id = :id or "
                           "Nom = :nom");
    cliqueSurListe.bindValue(":id", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":nom", renvoyerDansChampTexte);
    cliqueSurListe.exec();

    while(cliqueSurListe.next())
    {
        ui->idPuissanceSuppr->setEnabled(false);
        ui->idPuissanceSuppr->setText(cliqueSurListe.value(0).toString());
        ui->nomPuissanceSuppr->setText(cliqueSurListe.value(1).toString());

    }
}

void MainWindow::on_tableauProtection_activated(const QModelIndex &index)
{
    QString renvoyerDansChampTexte = ui->tableauProtection->model()->data(index).toString();
    ui->tableauProtection->verticalHeader()->setVisible(false);
    QSqlQuery cliqueSurListe;
    cliqueSurListe.prepare("SELECT id, Nom FROM Indice WHERE id = :id or "
                           "Nom = :nom");
    cliqueSurListe.bindValue(":id", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":nom", renvoyerDansChampTexte);
    cliqueSurListe.exec();

    while(cliqueSurListe.next())
    {
        ui->idIndiceSuppr->setEnabled(false);
        ui->idIndiceSuppr->setText(cliqueSurListe.value(0).toString());
        ui->nomIndiceSuppr->setText(cliqueSurListe.value(1).toString());

    }
}



void MainWindow::on_pushButton_3_clicked()
{

    QSqlQueryModel * modal6 = new QSqlQueryModel();
    clearFocus();
    QSqlQuery rechercherEnBdd;
    rechercherEnBdd.prepare("SELECT * FROM Angles");
    if(!rechercherEnBdd.exec()){
        QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
    }
    else{
        modal6->setQuery(rechercherEnBdd);
        ui->tableauAngle->setModel(modal6);
        ui->tableauAngle->verticalHeader()->setVisible(false);
    }

}

void MainWindow::on_tableauAngle_activated(const QModelIndex &index)
{
    QString renvoyerDansChampTexte = ui->tableauAngle->model()->data(index).toString();
    ui->tableauAngle->verticalHeader()->setVisible(false);
    QSqlQuery cliqueSurListe;
    cliqueSurListe.prepare("SELECT id, Nom FROM Angles WHERE id = :id or "
                           "Nom = :nom");
    cliqueSurListe.bindValue(":id", renvoyerDansChampTexte);
    cliqueSurListe.bindValue(":nom", renvoyerDansChampTexte);
    cliqueSurListe.exec();

    while(cliqueSurListe.next())
    {
        ui->idAngleSuppr->setEnabled(false);
        ui->idAngleSuppr->setText(cliqueSurListe.value(0).toString());
        ui->nomAngleSuppr->setText(cliqueSurListe.value(1).toString());

    }
}

void MainWindow::on_modifierCouleur_clicked()
{
    QString MettreAJourOption = ui->nomCouleurSuppr->text();
    QString id = ui->idCouleurSuppr->text();
    if(ui->idCouleurSuppr->text().isEmpty())
    {
        QMessageBox::critical(this,tr("Champ vide"),tr("Vous avez laissé un champ vide."));

    }
  else
    {
        QSqlQuery maj;

        maj.prepare("UPDATE Couleur SET Nom = :nom WHERE id = :id");
        maj.bindValue(":id", id);
        maj.bindValue(":nom", MettreAJourOption);
        if(maj.exec())
        {

        QSqlQueryModel * rafraichirListeCouleur = new QSqlQueryModel();
        ui->tableauSupprimer->verticalHeader()->setVisible(false);
        clearFocus();
        QSqlQuery rafraichirListe;
        rafraichirListe.exec("SELECT * FROM Couleur");
        rafraichirListeCouleur->setQuery(rafraichirListe);
        this->ui->tableauSupprimer->setModel(rafraichirListeCouleur);
        QMessageBox::information(this, "Modification réussie", "L'option a été mise à jour avec succès.");

        //On réinitialise les champs de saisis.
        ui->idCouleurSuppr->clear();
        ui->nomCouleurSuppr->clear();
        }
    }

}

void MainWindow::on_modifierClasse_clicked()
{
    QString MettreAJourOption = ui->nomClasseSuppr->text();
    QString id = ui->idClasseSuppr->text();
    if(ui->idClasseSuppr->text().isEmpty())
    {
        QMessageBox::critical(this,tr("Champ vide"),tr("Vous avez laissé un champ vide."));

    }
  else
    {
        QSqlQuery maj;

        maj.prepare("UPDATE ClasseLaser SET Nom = :nom WHERE id = :id");
        maj.bindValue(":id", id);
        maj.bindValue(":nom", MettreAJourOption);
        if(maj.exec())
        {

        QSqlQueryModel * rafraichirListeCouleur = new QSqlQueryModel();
        ui->tableauClasse->verticalHeader()->setVisible(false);
        clearFocus();
        QSqlQuery rafraichirListe;
        rafraichirListe.exec("SELECT * FROM ClasseLaser");
        rafraichirListeCouleur->setQuery(rafraichirListe);
        this->ui->tableauClasse->setModel(rafraichirListeCouleur);
        QMessageBox::information(this, "Modification réussie", "L'option a été mise à jour avec succès.");

        //On réinitialise les champs de saisis.
        ui->idClasseSuppr->clear();
        ui->nomClasseSuppr->clear();
        }
    }
}

void MainWindow::on_modifierPuissance_clicked()
{
    QString MettreAJourOption = ui->nomPuissanceSuppr->text();
    QString id = ui->idPuissanceSuppr->text();
    if(ui->idPuissanceSuppr->text().isEmpty())
    {
        QMessageBox::critical(this,tr("Champ vide"),tr("Vous avez laissé un champ vide."));

    }
  else
    {
        QSqlQuery maj;

        maj.prepare("UPDATE puissance SET Nom = :nom WHERE id = :id");
        maj.bindValue(":id", id);
        maj.bindValue(":nom", MettreAJourOption);
        if(maj.exec())
        {

        QSqlQueryModel * rafraichirListeCouleur = new QSqlQueryModel();
        ui->tableauPuissance->verticalHeader()->setVisible(false);
        clearFocus();
        QSqlQuery rafraichirListe;
        rafraichirListe.exec("SELECT * FROM Puissance");
        rafraichirListeCouleur->setQuery(rafraichirListe);
        this->ui->tableauPuissance->setModel(rafraichirListeCouleur);
        QMessageBox::information(this, "Modification réussie", "L'option a été mise à jour avec succès.");

        //On réinitialise les champs de saisis.
        ui->idPuissanceSuppr->clear();
        ui->nomPuissanceSuppr->clear();
        }
    }
}

void MainWindow::on_modifierIndice_clicked()
{
    QString MettreAJourOption = ui->nomIndiceSuppr->text();
    QString id = ui->idIndiceSuppr->text();
    if(ui->idIndiceSuppr->text().isEmpty())
    {
        QMessageBox::critical(this,tr("Champ vide"),tr("Vous avez laissé un champ vide."));

    }
  else
    {
        QSqlQuery maj;

        maj.prepare("UPDATE Indice SET Nom = :nom WHERE id = :id");
        maj.bindValue(":id", id);
        maj.bindValue(":nom", MettreAJourOption);
        if(maj.exec())
        {

        QSqlQueryModel * rafraichirListeCouleur = new QSqlQueryModel();
        ui->tableauProtection->verticalHeader()->setVisible(false);
        clearFocus();
        QSqlQuery rafraichirListe;
        rafraichirListe.exec("SELECT * FROM Indice");
        rafraichirListeCouleur->setQuery(rafraichirListe);
        this->ui->tableauProtection->setModel(rafraichirListeCouleur);
        QMessageBox::information(this, "Modification réussie", "L'option a été mise à jour avec succès.");

        //On réinitialise les champs de saisis.
        ui->idIndiceSuppr->clear();
        ui->nomIndiceSuppr->clear();
        }
    }
}

void MainWindow::on_modifierAngle_clicked()
{
    QString MettreAJourOption = ui->nomAngleSuppr->text();
    QString id = ui->idAngleSuppr->text();
    if(ui->idAngleSuppr->text().isEmpty())
    {
        QMessageBox::critical(this,tr("Champ vide"),tr("Vous avez laissé un champ vide."));

    }
  else
    {
        QSqlQuery maj;

        maj.prepare("UPDATE Angles SET Nom = :nom WHERE id = :id");
        maj.bindValue(":id", id);
        maj.bindValue(":nom", MettreAJourOption);
        if(maj.exec())
        {

        QSqlQueryModel * rafraichirListeCouleur = new QSqlQueryModel();
        ui->tableauAngle->verticalHeader()->setVisible(false);
        clearFocus();
        QSqlQuery rafraichirListe;
        rafraichirListe.exec("SELECT * FROM Angles");
        rafraichirListeCouleur->setQuery(rafraichirListe);
        this->ui->tableauAngle->setModel(rafraichirListeCouleur);
        QMessageBox::information(this, "Modification réussie", "L'option a été mise à jour avec succès.");

        //On réinitialise les champs de saisis.
        ui->idAngleSuppr->clear();
        ui->nomAngleSuppr->clear();
        }
    }
}

void MainWindow::on_btnSupprimerIndice_2_clicked()
{
    QString supprimerClasse = ui->idAngleSuppr->text();
    QSqlQuery supprimer;
    supprimer.prepare("DELETE FROM Angles WHERE  id = :id");
    supprimer.bindValue(":id", supprimerClasse);
    if(supprimer.exec())
    {
        QSqlQueryModel * actualiserListe = new QSqlQueryModel();
        QSqlQuery actualiser;
        actualiser.exec("SELECT * FROM Angles");
        actualiserListe->setQuery(actualiser);
        this->ui->tableauAngle->setModel(actualiserListe);
        QMessageBox::information(this, "Information", "L'angle a correctement été supprimé.");
    }
}

void MainWindow::on_chercherNom_clicked()
{
    QSqlQueryModel * modal2 = new QSqlQueryModel();
    ui->tableView->clearFocus();
    QString chercher = ui->rechercheParNom->text();
    QSqlQuery maRecherche;
    maRecherche.prepare("SELECT * FROM Laser WHERE Nom LIKE :nom");
    maRecherche.bindValue(":nom", chercher + '%');
    if(!maRecherche.exec())
    {
         QMessageBox::critical(this, "Erreur", "Un problème a été rencontré dans la base de données.");
    }
    else{
        modal2->setQuery(maRecherche);
        ui->tableView->setModel(modal2);
        ui->tableView->verticalHeader()->setVisible(false);
    }
}

void MainWindow::on_toolBox_currentChanged()
{
    chargerCouleur();
    chargerIndice();
    chargerPuissance();
    chargerClasse();
    chargerAngle();
}

void MainWindow::on_pushButton_4_clicked()
{
    //QString hauteur = ui->hauteurForm->text(); // Hauteur de fixation du laser, adjacent à l'hypotenuse.
    QString inclinaison = ui->inclinaisonForm->text();
    QString angle = ui->angleForm->text(); //Résultat final du calcul qui nous donne l'angle d'ouverture an haut du triangle.
    QString debutLigne = ui->debutLigne->text();
    QString finLigne = ui->finForm->text();
    QString caractere = "°";
    QString lumiere = ui->comboLumiere->currentText();
    QString alim = ui->comboAlim->currentText();
    QString degre = ui->degre->text();
    double oppose = ui->hauteurForm->text().toDouble();
    double adjacent = ui->longueurLigne->text().toDouble();
    double racine_un = adjacent * adjacent;
    double racine_deux = oppose * oppose;
    double calcul = racine_un + racine_deux;
    qreal resultatHypotenuse = sqrt(calcul);

   // CALCUL DE L'HYPOTENUSE
    ui->hypotenuse->setText(QString::number(resultatHypotenuse));

    //CALCUL TANGLE
    double PI = 3.14159265;
    double angleBas = atan(oppose / adjacent) * 180 / PI;
    ui->angleBas->setText(QString::number(angleBas));
    QString zer = QString::number(190-90-angleBas);
    ui->angleHaut->setText(zer);
    QString angleblabla = ui->angleHaut->text();
    //ui->angleForm->setText(zer.mid(0,2));
    if(zer > "0" && zer <= "16")
    {
        ui->angleForm->setText("10");
    }
    else if(zer > "16" && zer <= "26")
    {
        ui->angleForm->setText("20");

    }
    else if(zer > "26" && zer <= "36")
    {
        ui->angleForm->setText("30");

    }
    else if(zer > "36" && zer <= "50")
    {
        ui->angleForm->setText("40");

    }
    else if(zer > "50")
    {
        ui->angleForm->setText("80");

    }




}



void MainWindow::on_pushButton_clicked()
{
    QString oppose = ui->calculLigne->text();
    QString inclinaison = ui->inclinaisonForm->text();
    QString angle = ui->comboAngle->currentText(); //Résultat final du calcul qui nous donne l'angle d'ouverture an haut du triangle.
    QString debutLigne = ui->debutLigne->text();

    QString finLigne = ui->finForm->text();
    angle.mid(0,2);

    ui->debutLigne->setText(QString::number(oppose.toFloat() * (qTan(qDegreesToRadians(inclinaison.toFloat() - angle.toFloat() / 2)))));
    ui->finForm->setText(QString::number(oppose.toFloat() * (qTan(qDegreesToRadians(inclinaison.toFloat() + angle.toFloat() / 2)))));
    ui->pointForm->setText(QString::number(oppose.toFloat() * (qTan(qDegreesToRadians(inclinaison.toFloat())))));
    ui->ligneForm->setText(QString::number(finLigne.toFloat() - debutLigne.toFloat())); // Cosinus à l'hypoténuse*/

}

void MainWindow::on_pushButton_5_clicked()
{
    QString type = ui->comboTypeLaser->currentText();
    QString couleur = ui->comboCouleur->currentText();
    QString focal = ui->comboFocal->currentText();
    QString lumiere = ui->comboLumiere->currentText();
    QString alim = ui->comboAlim->currentText();
    QString degre = ui->degre->text();
    QString resultatAngle = ui->angleForm->text();





if(lumiere == "Atelier normal")
{
    QSqlQueryModel * modal18 = new QSqlQueryModel();

    QSqlQuery resultat;
    resultat.prepare("SELECT Nom, Classe, Puissance, Indice FROM Laser WHERE NOT Puissance = '1MW' AND NOT Puissance='3MW' AND NOT Puissance='30MW' AND NOT Puissance='40MW' AND "
                     "Type = :type AND Angle = :angle AND Alimentation = :alimentation AND Couleur = :couleur LIMIT 10");
    resultat.bindValue(":type",type);
   // resultat.bindValue(":focalisable", focal);
    resultat.bindValue(":angle", resultatAngle + degre);
    resultat.bindValue(":alimentation", alim);
    resultat.bindValue(":couleur", couleur);



    if(resultat.exec())
    {
        modal18->setQuery(resultat);
        ui->tableauResultat->setModel(modal18);
        ui->tableauResultat->verticalHeader()->setVisible(false);
    }
}
else if(lumiere == "Très sombre")
{
    if(couleur == "Vert" || couleur == "Rouge")
    {
        QSqlQueryModel * modal19 = new QSqlQueryModel();

        QSqlQuery resultat;
        resultat.prepare("SELECT Nom, Classe, Puissance, Indice FROM Laser WHERE NOT Puissance = '30MW' AND NOT Puissance='15MW' AND NOT Puissance='40MW' AND Type = :type "
                         "AND Focalisable = :focalisable AND Angle = :angle AND Alimentation = :alimentation AND Couleur = :couleur");
        resultat.bindValue(":type",type);
        resultat.bindValue(":focalisable", focal);
        resultat.bindValue(":angle", resultatAngle + degre);
        resultat.bindValue(":alimentation", alim);
        resultat.bindValue(":couleur", couleur);
        if(resultat.exec())
        {
            modal19->setQuery(resultat);
            ui->tableauResultat->setModel(modal19);
            ui->tableauResultat->verticalHeader()->setVisible(false);
        }
    }
    else
    {
        QSqlQueryModel * modal20 = new QSqlQueryModel();
        QSqlQuery resultat;
        resultat.prepare("SELECT Nom, Classe, Puissance, Indice, Couleur FROM Laser WHERE NOT Puissance = '30MW' AND NOT Puissance='15MW' AND NOT Puissance='40MW' AND Type = :type "
                         "AND Focalisable = :focalisable AND Angle = :angle AND Alimentation = :alimentation");
        resultat.bindValue(":type",type);
        resultat.bindValue(":focalisable", focal);
        resultat.bindValue(":angle", resultatAngle + degre);
        resultat.bindValue(":alimentation", alim);
        if(resultat.exec())
        {
            modal20->setQuery(resultat);
            ui->tableauResultat->setModel(modal20);
            ui->tableauResultat->verticalHeader()->setVisible(false);
        }
    }
}

else if(lumiere == "Très lumineux")
{


    QSqlQueryModel * modal19 = new QSqlQueryModel();


    QSqlQuery resultat;
    resultat.prepare("SELECT * FROM Laser WHERE NOT Puissance = '1MW' AND NOT Puissance='3MW' AND NOT Puissance='5MW' AND Type = :type "
                     "AND Focalisable = :focalisable AND Angle = :angle AND Alimentation = :alimentation");
    resultat.bindValue(":type",type);
    resultat.bindValue(":focalisable", focal);
    resultat.bindValue(":angle", resultatAngle);
    resultat.bindValue(":alimentation", alim);

    if(resultat.exec())
    {
        modal19->setQuery(resultat);
        ui->tableauResultat->setModel(modal19);
        ui->tableauResultat->verticalHeader()->setVisible(false);
    }
}
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->hauteurForm->clear();
    ui->longueurLigne->clear();
    ui->inclinaisonForm->clear();
    ui->debutLigne->clear();
    ui->pointForm->clear();
    ui->finForm->clear();
    ui->ligneForm->clear();
    ui->hypotenuse->clear();
    ui->angleBas->clear();
    ui->angleHaut->clear();
    ui->angleForm->clear();
    ui->calculLigne->clear();
}

void MainWindow::on_comboAngle_currentTextChanged()
{
    QString change = ui->comboAngle->currentText();
    ui->angleForm->setText(change);
}
