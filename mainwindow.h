#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "basededonnees.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void laser(QString model, QString type, QString puissance);
    void accessoires();
    void alim24();
    void image();
    void alim5();
    void combo();
    void chargerCouleur();
    void chargerPuissance();
    void chargerIndice();
    void chargerClasse();
    void chargerAngle();
    void comptage();

private slots:

    void on_enregistrerEnBdd_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_supprimerLaser_clicked();

    void on_validModif_clicked();

    void on_btnAjoutCouleur_clicked();

    void on_btnAjoutIndice_clicked();

    void on_btnAjoutPuissance_clicked();

    void on_btnAjoutClasse_clicked();

    void on_tabWidget_tabBarClicked();

    void on_btnSupprimerCouleur_clicked();

    void on_btnSupprimerIndice_clicked();

    void on_btnSupprimerPuissance_clicked();

    void on_btnSupprimerClasse_clicked();

    void on_tableauSupprimer_activated(const QModelIndex &index);

    void on_btnRechercherCouleur_clicked();

    void on_btnRechercherClasse_clicked();

    void on_btnRechercherPuissance_clicked();

    void on_btnRechercherIndice_clicked();

    void on_tableauClasse_activated(const QModelIndex &index);

    void on_tableauPuissance_activated(const QModelIndex &index);

    void on_tableauProtection_activated(const QModelIndex &index);

    void on_btnAjoutAngle_clicked();

    void on_pushButton_3_clicked();

    void on_tableauAngle_activated(const QModelIndex &index);

    void on_modifierCouleur_clicked();

    void on_modifierClasse_clicked();

    void on_modifierPuissance_clicked();

    void on_modifierIndice_clicked();

    void on_modifierAngle_clicked();

    void on_btnSupprimerIndice_2_clicked();

    void on_chercherNom_clicked();

    void on_toolBox_currentChanged();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_comboAngle_currentTextChanged();

private:
    Ui::MainWindow *ui;
    BaseDeDonnees *bdd;
};

#endif // MAINWINDOW_H
