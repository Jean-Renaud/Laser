/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_4;
    QComboBox *comboTypeLaser;
    QLabel *label_8;
    QComboBox *comboSurface;
    QLabel *label_6;
    QLabel *label_10;
    QComboBox *comboCouleur;
    QLabel *label_12;
    QComboBox *comboFocal;
    QLabel *label_18;
    QComboBox *environnement;
    QLabel *label_3;
    QComboBox *comboAlim;
    QLabel *label_4;
    QComboBox *comboLumiere;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QGroupBox *groupBox;
    QLabel *label_7;
    QLineEdit *longueurLigne;
    QLineEdit *hauteurForm;
    QLabel *label_54;
    QGroupBox *groupBox_2;
    QLineEdit *inclinaisonForm;
    QLabel *label_56;
    QLabel *label_11;
    QComboBox *comboAngle;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *calculLigne;
    QGroupBox *groupBox_3;
    QLineEdit *hypotenuse;
    QLineEdit *pointForm;
    QLabel *label_59;
    QLineEdit *finForm;
    QLineEdit *angleHaut;
    QLabel *label_57;
    QLineEdit *angleBas;
    QLabel *label_55;
    QLabel *label_60;
    QLabel *label_58;
    QLabel *label_5;
    QLineEdit *ligneForm;
    QLineEdit *angleForm;
    QLineEdit *degre;
    QLineEdit *debutLigne;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QTableView *tableauResultat;
    QWidget *tab_2;
    QToolBox *toolBox;
    QWidget *page;
    QGroupBox *groupBox_14;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_23;
    QPushButton *enregistrerEnBdd;
    QLabel *label_9;
    QComboBox *enregistreType;
    QComboBox *enregistrerPuissance;
    QComboBox *enregistrerAlimentation;
    QComboBox *enregistrerIndice;
    QLineEdit *id;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *enregistrerNom;
    QComboBox *enregistrerCourant;
    QComboBox *enregistrerAngle;
    QLabel *label_33;
    QComboBox *enregistrerClasse;
    QComboBox *enregistrerCouleur;
    QLabel *label_22;
    QLabel *label_49;
    QComboBox *enregistrerFocalisable;
    QGroupBox *groupBox_16;
    QLabel *label_29;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLineEdit *ajoutCouleur;
    QLineEdit *ajoutIndice;
    QLineEdit *ajoutPuissance;
    QLineEdit *ajoutClasse;
    QPushButton *btnAjoutCouleur;
    QPushButton *btnAjoutIndice;
    QPushButton *btnAjoutPuissance;
    QPushButton *btnAjoutClasse;
    QLabel *label_51;
    QLineEdit *ajoutAngle;
    QPushButton *btnAjoutAngle;
    QWidget *page_2;
    QGroupBox *groupBox_15;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_30;
    QLineEdit *modifID;
    QLineEdit *modifNom;
    QLineEdit *modifType;
    QLineEdit *modifPuissance;
    QLineEdit *modifAlimentation;
    QLineEdit *modifIndice;
    QPushButton *validModif;
    QPushButton *supprimerLaser;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLineEdit *modifCourant;
    QLineEdit *modifAngle;
    QLineEdit *modifClasse;
    QLabel *label_37;
    QLineEdit *modifCouleur;
    QLabel *label_50;
    QLineEdit *modifFocalisable;
    QTableView *tableView;
    QGroupBox *groupBox_25;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_28;
    QPushButton *chercherNom;
    QLineEdit *rechercheParNom;
    QLabel *comptageBdd;
    QLabel *comptageBDD;
    QWidget *page_3;
    QGroupBox *groupBox_18;
    QLineEdit *idCouleurSuppr;
    QLabel *label_42;
    QLabel *label_41;
    QLineEdit *nomCouleurSuppr;
    QPushButton *btnSupprimerCouleur;
    QPushButton *modifierCouleur;
    QGroupBox *groupBox_17;
    QLineEdit *idIndiceSuppr;
    QLineEdit *nomIndiceSuppr;
    QLabel *label_43;
    QLabel *label_44;
    QPushButton *btnSupprimerIndice;
    QPushButton *modifierIndice;
    QGroupBox *groupBox_19;
    QLineEdit *idPuissanceSuppr;
    QLineEdit *nomPuissanceSuppr;
    QLabel *label_45;
    QLabel *label_46;
    QPushButton *btnSupprimerPuissance;
    QPushButton *modifierPuissance;
    QGroupBox *groupBox_21;
    QPushButton *btnRechercherCouleur;
    QTableView *tableauSupprimer;
    QGroupBox *groupBox_22;
    QPushButton *btnRechercherPuissance;
    QTableView *tableauPuissance;
    QGroupBox *groupBox_23;
    QPushButton *btnRechercherClasse;
    QTableView *tableauClasse;
    QGroupBox *groupBox_24;
    QPushButton *btnRechercherIndice;
    QTableView *tableauProtection;
    QGroupBox *groupBox_20;
    QLineEdit *idClasseSuppr;
    QLineEdit *nomClasseSuppr;
    QLabel *label_47;
    QLabel *label_48;
    QPushButton *btnSupprimerClasse;
    QPushButton *modifierClasse;
    QGroupBox *groupBox_26;
    QPushButton *pushButton_3;
    QTableView *tableauAngle;
    QGroupBox *groupBox_27;
    QLineEdit *idAngleSuppr;
    QLineEdit *nomAngleSuppr;
    QLabel *label_52;
    QLabel *label_53;
    QPushButton *btnSupprimerIndice_2;
    QPushButton *modifierAngle;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1565, 979);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 10, 1521, 921));
        tabWidget->setStyleSheet(QLatin1String("background-color: #535353;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(390, 40, 741, 511));
        groupBox_4->setStyleSheet(QLatin1String("border: 2px solid #95C306;\n"
"color: #ffffff;\n"
" margin-top: 1ex; /* leave space at the top for the title */\n"
"background-color: #535353;"));
        comboTypeLaser = new QComboBox(groupBox_4);
        comboTypeLaser->addItem(QString());
        comboTypeLaser->addItem(QString());
        comboTypeLaser->addItem(QString());
        comboTypeLaser->addItem(QString());
        comboTypeLaser->setObjectName(QStringLiteral("comboTypeLaser"));
        comboTypeLaser->setGeometry(QRect(170, 30, 111, 22));
        comboTypeLaser->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 30, 61, 16));
        label_8->setStyleSheet(QStringLiteral("border: none;"));
        comboSurface = new QComboBox(groupBox_4);
        comboSurface->addItem(QString());
        comboSurface->addItem(QString());
        comboSurface->addItem(QString());
        comboSurface->addItem(QString());
        comboSurface->setObjectName(QStringLiteral("comboSurface"));
        comboSurface->setGeometry(QRect(460, 30, 111, 22));
        comboSurface->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(321, 32, 121, 16));
        label_6->setStyleSheet(QStringLiteral("border: none;"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(32, 71, 61, 16));
        label_10->setStyleSheet(QStringLiteral("border:none"));
        comboCouleur = new QComboBox(groupBox_4);
        comboCouleur->addItem(QString());
        comboCouleur->addItem(QString());
        comboCouleur->addItem(QString());
        comboCouleur->setObjectName(QStringLiteral("comboCouleur"));
        comboCouleur->setGeometry(QRect(170, 70, 111, 22));
        comboCouleur->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(320, 70, 101, 16));
        label_12->setStyleSheet(QStringLiteral("border:none;"));
        comboFocal = new QComboBox(groupBox_4);
        comboFocal->addItem(QString());
        comboFocal->addItem(QString());
        comboFocal->addItem(QString());
        comboFocal->setObjectName(QStringLiteral("comboFocal"));
        comboFocal->setGeometry(QRect(460, 70, 111, 22));
        comboFocal->setStyleSheet(QStringLiteral("border: 1px solid #95C306;"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(32, 113, 91, 16));
        label_18->setStyleSheet(QStringLiteral("border:none;"));
        environnement = new QComboBox(groupBox_4);
        environnement->addItem(QString());
        environnement->addItem(QString());
        environnement->addItem(QString());
        environnement->addItem(QString());
        environnement->setObjectName(QStringLiteral("environnement"));
        environnement->setGeometry(QRect(170, 110, 111, 22));
        environnement->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 71, 16));
        label_3->setStyleSheet(QLatin1String("border:none;\n"
""));
        comboAlim = new QComboBox(groupBox_4);
        comboAlim->addItem(QString());
        comboAlim->addItem(QString());
        comboAlim->setObjectName(QStringLiteral("comboAlim"));
        comboAlim->setGeometry(QRect(170, 150, 111, 22));
        comboAlim->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 114, 71, 16));
        label_4->setStyleSheet(QStringLiteral("border:none;"));
        comboLumiere = new QComboBox(groupBox_4);
        comboLumiere->addItem(QString());
        comboLumiere->addItem(QString());
        comboLumiere->addItem(QString());
        comboLumiere->setObjectName(QStringLiteral("comboLumiere"));
        comboLumiere->setGeometry(QRect(460, 110, 111, 22));
        comboLumiere->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        line = new QFrame(groupBox_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 200, 741, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 200, 1, 311));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox_4);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(457, 200, 1, 311));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 230, 251, 231));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 96, 101, 20));
        label_7->setStyleSheet(QStringLiteral("border:none;"));
        longueurLigne = new QLineEdit(groupBox);
        longueurLigne->setObjectName(QStringLiteral("longueurLigne"));
        longueurLigne->setGeometry(QRect(120, 96, 113, 20));
        hauteurForm = new QLineEdit(groupBox);
        hauteurForm->setObjectName(QStringLiteral("hauteurForm"));
        hauteurForm->setGeometry(QRect(120, 56, 113, 20));
        hauteurForm->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_54 = new QLabel(groupBox);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(10, 56, 47, 13));
        label_54->setStyleSheet(QStringLiteral("border:none"));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 230, 207, 231));
        inclinaisonForm = new QLineEdit(groupBox_2);
        inclinaisonForm->setObjectName(QStringLiteral("inclinaisonForm"));
        inclinaisonForm->setGeometry(QRect(80, 90, 113, 20));
        inclinaisonForm->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_56 = new QLabel(groupBox_2);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(8, 92, 61, 16));
        label_56->setStyleSheet(QStringLiteral("border:none;"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(106, 200, 71, 21));
        comboAngle = new QComboBox(groupBox_2);
        comboAngle->addItem(QString());
        comboAngle->addItem(QString());
        comboAngle->addItem(QString());
        comboAngle->addItem(QString());
        comboAngle->addItem(QString());
        comboAngle->addItem(QString());
        comboAngle->setObjectName(QStringLiteral("comboAngle"));
        comboAngle->setGeometry(QRect(80, 122, 111, 22));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 123, 61, 21));
        label_13->setStyleSheet(QStringLiteral("border:none;"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 53, 61, 20));
        label_14->setStyleSheet(QStringLiteral("border:none;"));
        calculLigne = new QLineEdit(groupBox_2);
        calculLigne->setObjectName(QStringLiteral("calculLigne"));
        calculLigne->setGeometry(QRect(80, 54, 113, 20));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(460, 200, 281, 261));
        hypotenuse = new QLineEdit(groupBox_3);
        hypotenuse->setObjectName(QStringLiteral("hypotenuse"));
        hypotenuse->setGeometry(QRect(140, 143, 113, 20));
        pointForm = new QLineEdit(groupBox_3);
        pointForm->setObjectName(QStringLiteral("pointForm"));
        pointForm->setGeometry(QRect(140, 51, 113, 20));
        pointForm->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label_59 = new QLabel(groupBox_3);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(10, 86, 81, 16));
        label_59->setStyleSheet(QStringLiteral("border:none;"));
        finForm = new QLineEdit(groupBox_3);
        finForm->setObjectName(QStringLiteral("finForm"));
        finForm->setGeometry(QRect(140, 83, 113, 20));
        finForm->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        angleHaut = new QLineEdit(groupBox_3);
        angleHaut->setObjectName(QStringLiteral("angleHaut"));
        angleHaut->setGeometry(QRect(140, 203, 113, 20));
        label_57 = new QLabel(groupBox_3);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(10, 23, 71, 16));
        label_57->setStyleSheet(QStringLiteral("border:none;"));
        angleBas = new QLineEdit(groupBox_3);
        angleBas->setObjectName(QStringLiteral("angleBas"));
        angleBas->setGeometry(QRect(140, 173, 113, 20));
        label_55 = new QLabel(groupBox_3);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(10, 233, 101, 16));
        label_55->setStyleSheet(QStringLiteral("border:none;"));
        label_60 = new QLabel(groupBox_3);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(10, 113, 111, 16));
        label_60->setStyleSheet(QStringLiteral("border:none;"));
        label_58 = new QLabel(groupBox_3);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(10, 53, 121, 16));
        label_58->setStyleSheet(QStringLiteral("border:none;"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(9, 204, 91, 20));
        label_5->setStyleSheet(QStringLiteral("border:none;"));
        ligneForm = new QLineEdit(groupBox_3);
        ligneForm->setObjectName(QStringLiteral("ligneForm"));
        ligneForm->setGeometry(QRect(139, 113, 113, 20));
        ligneForm->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        angleForm = new QLineEdit(groupBox_3);
        angleForm->setObjectName(QStringLiteral("angleForm"));
        angleForm->setGeometry(QRect(140, 233, 113, 20));
        angleForm->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        degre = new QLineEdit(groupBox_3);
        degre->setObjectName(QStringLiteral("degre"));
        degre->setGeometry(QRect(254, 233, 21, 20));
        degre->setMaxLength(1);
        debutLigne = new QLineEdit(groupBox_3);
        debutLigne->setObjectName(QStringLiteral("debutLigne"));
        debutLigne->setGeometry(QRect(140, 20, 113, 20));
        debutLigne->setStyleSheet(QStringLiteral("border: 2px solid #95C306;"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 144, 81, 16));
        label->setStyleSheet(QStringLiteral("border:none;"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 173, 61, 21));
        label_2->setStyleSheet(QStringLiteral("border:none;"));
        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(500, 468, 91, 31));
        pushButton_5->setStyleSheet(QLatin1String("background-color:#00FF38;\n"
"color:#000000;"));
        pushButton_6 = new QPushButton(groupBox_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(630, 468, 91, 31));
        pushButton_6->setStyleSheet(QLatin1String("background-color:#00FF38;\n"
"color:#000000;"));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 468, 101, 31));
        pushButton->setStyleSheet(QLatin1String("background-color:#00FF38;\n"
"color:#000000;\n"
""));
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 468, 101, 31));
        pushButton_4->setStyleSheet(QLatin1String("background-color:#00FF38;\n"
"color:#000000;\n"
""));
        tableauResultat = new QTableView(tab);
        tableauResultat->setObjectName(QStringLiteral("tableauResultat"));
        tableauResultat->setGeometry(QRect(500, 580, 511, 281));
        tableauResultat->setStyleSheet(QStringLiteral("background-color:#ffffff;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        toolBox = new QToolBox(tab_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 10, 1511, 841));
        toolBox->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBox->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 94, 24));
        groupBox_14 = new QGroupBox(page);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(190, 10, 441, 531));
        groupBox_14->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */\n"
""));
        label_19 = new QLabel(groupBox_14);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(70, 50, 47, 16));
        label_19->setStyleSheet(QStringLiteral("border:none;"));
        label_20 = new QLabel(groupBox_14);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(70, 267, 47, 16));
        label_20->setStyleSheet(QStringLiteral("border:none;"));
        label_21 = new QLabel(groupBox_14);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(70, 347, 71, 16));
        label_21->setStyleSheet(QStringLiteral("border:none;"));
        label_23 = new QLabel(groupBox_14);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(70, 390, 111, 16));
        label_23->setStyleSheet(QStringLiteral("border:none;"));
        enregistrerEnBdd = new QPushButton(groupBox_14);
        enregistrerEnBdd->setObjectName(QStringLiteral("enregistrerEnBdd"));
        enregistrerEnBdd->setGeometry(QRect(250, 480, 111, 31));
        enregistrerEnBdd->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        label_9 = new QLabel(groupBox_14);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 307, 71, 16));
        label_9->setStyleSheet(QStringLiteral("border:none;"));
        enregistreType = new QComboBox(groupBox_14);
        enregistreType->addItem(QString());
        enregistreType->addItem(QString());
        enregistreType->addItem(QString());
        enregistreType->addItem(QString());
        enregistreType->setObjectName(QStringLiteral("enregistreType"));
        enregistreType->setGeometry(QRect(250, 267, 111, 22));
        enregistrerPuissance = new QComboBox(groupBox_14);
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->addItem(QString());
        enregistrerPuissance->setObjectName(QStringLiteral("enregistrerPuissance"));
        enregistrerPuissance->setGeometry(QRect(250, 307, 111, 22));
        enregistrerAlimentation = new QComboBox(groupBox_14);
        enregistrerAlimentation->addItem(QString());
        enregistrerAlimentation->addItem(QString());
        enregistrerAlimentation->addItem(QString());
        enregistrerAlimentation->setObjectName(QStringLiteral("enregistrerAlimentation"));
        enregistrerAlimentation->setGeometry(QRect(250, 347, 111, 22));
        enregistrerIndice = new QComboBox(groupBox_14);
        enregistrerIndice->addItem(QString());
        enregistrerIndice->addItem(QString());
        enregistrerIndice->addItem(QString());
        enregistrerIndice->addItem(QString());
        enregistrerIndice->setObjectName(QStringLiteral("enregistrerIndice"));
        enregistrerIndice->setGeometry(QRect(250, 390, 111, 22));
        id = new QLineEdit(groupBox_14);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(250, 10, 113, 20));
        label_31 = new QLabel(groupBox_14);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(70, 90, 91, 16));
        label_31->setStyleSheet(QStringLiteral("border:none;"));
        label_32 = new QLabel(groupBox_14);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(70, 130, 101, 16));
        label_32->setStyleSheet(QStringLiteral("border:none;"));
        enregistrerNom = new QLineEdit(groupBox_14);
        enregistrerNom->setObjectName(QStringLiteral("enregistrerNom"));
        enregistrerNom->setGeometry(QRect(250, 50, 113, 20));
        enregistrerCourant = new QComboBox(groupBox_14);
        enregistrerCourant->addItem(QString());
        enregistrerCourant->addItem(QString());
        enregistrerCourant->addItem(QString());
        enregistrerCourant->setObjectName(QStringLiteral("enregistrerCourant"));
        enregistrerCourant->setGeometry(QRect(250, 88, 111, 22));
        enregistrerAngle = new QComboBox(groupBox_14);
        enregistrerAngle->addItem(QString());
        enregistrerAngle->addItem(QString());
        enregistrerAngle->addItem(QString());
        enregistrerAngle->addItem(QString());
        enregistrerAngle->addItem(QString());
        enregistrerAngle->addItem(QString());
        enregistrerAngle->addItem(QString());
        enregistrerAngle->addItem(QString());
        enregistrerAngle->setObjectName(QStringLiteral("enregistrerAngle"));
        enregistrerAngle->setGeometry(QRect(250, 128, 111, 22));
        label_33 = new QLabel(groupBox_14);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(69, 172, 71, 16));
        label_33->setStyleSheet(QStringLiteral("border:none;"));
        enregistrerClasse = new QComboBox(groupBox_14);
        enregistrerClasse->addItem(QString());
        enregistrerClasse->addItem(QString());
        enregistrerClasse->addItem(QString());
        enregistrerClasse->addItem(QString());
        enregistrerClasse->addItem(QString());
        enregistrerClasse->addItem(QString());
        enregistrerClasse->setObjectName(QStringLiteral("enregistrerClasse"));
        enregistrerClasse->setGeometry(QRect(250, 170, 111, 22));
        enregistrerCouleur = new QComboBox(groupBox_14);
        enregistrerCouleur->addItem(QString());
        enregistrerCouleur->addItem(QString());
        enregistrerCouleur->setObjectName(QStringLiteral("enregistrerCouleur"));
        enregistrerCouleur->setGeometry(QRect(250, 440, 111, 22));
        label_22 = new QLabel(groupBox_14);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(71, 444, 61, 16));
        label_22->setStyleSheet(QStringLiteral("border:none;"));
        label_49 = new QLabel(groupBox_14);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(70, 220, 71, 16));
        label_49->setStyleSheet(QStringLiteral("border:none;"));
        enregistrerFocalisable = new QComboBox(groupBox_14);
        enregistrerFocalisable->addItem(QString());
        enregistrerFocalisable->addItem(QString());
        enregistrerFocalisable->addItem(QString());
        enregistrerFocalisable->setObjectName(QStringLiteral("enregistrerFocalisable"));
        enregistrerFocalisable->setGeometry(QRect(250, 220, 111, 22));
        groupBox_16 = new QGroupBox(page);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(770, 110, 471, 291));
        groupBox_16->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        label_29 = new QLabel(groupBox_16);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 40, 111, 16));
        label_29->setStyleSheet(QStringLiteral("border:none;"));
        label_38 = new QLabel(groupBox_16);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(20, 90, 151, 16));
        label_38->setStyleSheet(QStringLiteral("border:none;"));
        label_39 = new QLabel(groupBox_16);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(20, 140, 121, 16));
        label_39->setStyleSheet(QStringLiteral("border:none;"));
        label_40 = new QLabel(groupBox_16);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(20, 190, 131, 16));
        label_40->setStyleSheet(QStringLiteral("border:none;"));
        ajoutCouleur = new QLineEdit(groupBox_16);
        ajoutCouleur->setObjectName(QStringLiteral("ajoutCouleur"));
        ajoutCouleur->setGeometry(QRect(190, 40, 113, 20));
        ajoutIndice = new QLineEdit(groupBox_16);
        ajoutIndice->setObjectName(QStringLiteral("ajoutIndice"));
        ajoutIndice->setGeometry(QRect(190, 90, 113, 20));
        ajoutPuissance = new QLineEdit(groupBox_16);
        ajoutPuissance->setObjectName(QStringLiteral("ajoutPuissance"));
        ajoutPuissance->setGeometry(QRect(190, 140, 113, 20));
        ajoutClasse = new QLineEdit(groupBox_16);
        ajoutClasse->setObjectName(QStringLiteral("ajoutClasse"));
        ajoutClasse->setGeometry(QRect(190, 190, 113, 20));
        btnAjoutCouleur = new QPushButton(groupBox_16);
        btnAjoutCouleur->setObjectName(QStringLiteral("btnAjoutCouleur"));
        btnAjoutCouleur->setGeometry(QRect(340, 40, 75, 23));
        btnAjoutCouleur->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        btnAjoutIndice = new QPushButton(groupBox_16);
        btnAjoutIndice->setObjectName(QStringLiteral("btnAjoutIndice"));
        btnAjoutIndice->setGeometry(QRect(340, 90, 75, 23));
        btnAjoutIndice->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        btnAjoutPuissance = new QPushButton(groupBox_16);
        btnAjoutPuissance->setObjectName(QStringLiteral("btnAjoutPuissance"));
        btnAjoutPuissance->setGeometry(QRect(340, 140, 75, 23));
        btnAjoutPuissance->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        btnAjoutClasse = new QPushButton(groupBox_16);
        btnAjoutClasse->setObjectName(QStringLiteral("btnAjoutClasse"));
        btnAjoutClasse->setGeometry(QRect(340, 190, 75, 23));
        btnAjoutClasse->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        label_51 = new QLabel(groupBox_16);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(20, 240, 161, 16));
        label_51->setStyleSheet(QStringLiteral("border:none;"));
        ajoutAngle = new QLineEdit(groupBox_16);
        ajoutAngle->setObjectName(QStringLiteral("ajoutAngle"));
        ajoutAngle->setGeometry(QRect(190, 240, 113, 20));
        btnAjoutAngle = new QPushButton(groupBox_16);
        btnAjoutAngle->setObjectName(QStringLiteral("btnAjoutAngle"));
        btnAjoutAngle->setGeometry(QRect(340, 240, 75, 23));
        btnAjoutAngle->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("#585858");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        toolBox->addItem(page, icon, QStringLiteral("Ajouter"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 1505, 748));
        groupBox_15 = new QGroupBox(page_2);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(1140, 70, 361, 541));
        groupBox_15->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        label_24 = new QLabel(groupBox_15);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 30, 47, 16));
        label_24->setStyleSheet(QStringLiteral("border:none;"));
        label_25 = new QLabel(groupBox_15);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 70, 47, 16));
        label_25->setStyleSheet(QStringLiteral("border:none;"));
        label_26 = new QLabel(groupBox_15);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 230, 47, 16));
        label_26->setStyleSheet(QStringLiteral("border:none;"));
        label_27 = new QLabel(groupBox_15);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 310, 91, 16));
        label_27->setStyleSheet(QStringLiteral("border:none;"));
        label_28 = new QLabel(groupBox_15);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 350, 91, 16));
        label_28->setStyleSheet(QStringLiteral("border:none;"));
        label_30 = new QLabel(groupBox_15);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 390, 111, 16));
        label_30->setStyleSheet(QStringLiteral("border:none;"));
        modifID = new QLineEdit(groupBox_15);
        modifID->setObjectName(QStringLiteral("modifID"));
        modifID->setGeometry(QRect(160, 30, 113, 20));
        modifNom = new QLineEdit(groupBox_15);
        modifNom->setObjectName(QStringLiteral("modifNom"));
        modifNom->setGeometry(QRect(160, 70, 113, 20));
        modifType = new QLineEdit(groupBox_15);
        modifType->setObjectName(QStringLiteral("modifType"));
        modifType->setGeometry(QRect(160, 230, 113, 20));
        modifPuissance = new QLineEdit(groupBox_15);
        modifPuissance->setObjectName(QStringLiteral("modifPuissance"));
        modifPuissance->setGeometry(QRect(160, 310, 113, 20));
        modifAlimentation = new QLineEdit(groupBox_15);
        modifAlimentation->setObjectName(QStringLiteral("modifAlimentation"));
        modifAlimentation->setGeometry(QRect(160, 350, 113, 20));
        modifIndice = new QLineEdit(groupBox_15);
        modifIndice->setObjectName(QStringLiteral("modifIndice"));
        modifIndice->setGeometry(QRect(160, 390, 113, 20));
        validModif = new QPushButton(groupBox_15);
        validModif->setObjectName(QStringLiteral("validModif"));
        validModif->setGeometry(QRect(170, 460, 91, 31));
        validModif->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        supprimerLaser = new QPushButton(groupBox_15);
        supprimerLaser->setObjectName(QStringLiteral("supprimerLaser"));
        supprimerLaser->setGeometry(QRect(170, 500, 91, 31));
        supprimerLaser->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        label_34 = new QLabel(groupBox_15);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(20, 110, 71, 21));
        label_34->setStyleSheet(QStringLiteral("border:none;"));
        label_35 = new QLabel(groupBox_15);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(20, 150, 71, 16));
        label_35->setStyleSheet(QStringLiteral("border:none;"));
        label_36 = new QLabel(groupBox_15);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(20, 190, 47, 16));
        label_36->setStyleSheet(QStringLiteral("border:none;"));
        modifCourant = new QLineEdit(groupBox_15);
        modifCourant->setObjectName(QStringLiteral("modifCourant"));
        modifCourant->setGeometry(QRect(160, 110, 113, 20));
        modifAngle = new QLineEdit(groupBox_15);
        modifAngle->setObjectName(QStringLiteral("modifAngle"));
        modifAngle->setGeometry(QRect(160, 150, 113, 20));
        modifClasse = new QLineEdit(groupBox_15);
        modifClasse->setObjectName(QStringLiteral("modifClasse"));
        modifClasse->setGeometry(QRect(160, 190, 113, 20));
        label_37 = new QLabel(groupBox_15);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(20, 434, 71, 16));
        label_37->setStyleSheet(QLatin1String("border:none;\n"
""));
        modifCouleur = new QLineEdit(groupBox_15);
        modifCouleur->setObjectName(QStringLiteral("modifCouleur"));
        modifCouleur->setGeometry(QRect(160, 430, 113, 20));
        label_50 = new QLabel(groupBox_15);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(20, 270, 71, 16));
        label_50->setStyleSheet(QStringLiteral("border:none;"));
        modifFocalisable = new QLineEdit(groupBox_15);
        modifFocalisable->setObjectName(QStringLiteral("modifFocalisable"));
        modifFocalisable->setGeometry(QRect(160, 270, 113, 20));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 90, 1121, 521));
        tableView->setStyleSheet(QStringLiteral("background-color:#ffffff;"));
        groupBox_25 = new QGroupBox(page_2);
        groupBox_25->setObjectName(QStringLiteral("groupBox_25"));
        groupBox_25->setGeometry(QRect(480, 10, 151, 61));
        groupBox_25->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        pushButton_2 = new QPushButton(groupBox_25);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 22, 111, 31));
        pushButton_2->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        groupBox_28 = new QGroupBox(page_2);
        groupBox_28->setObjectName(QStringLiteral("groupBox_28"));
        groupBox_28->setGeometry(QRect(80, 20, 311, 51));
        groupBox_28->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        chercherNom = new QPushButton(groupBox_28);
        chercherNom->setObjectName(QStringLiteral("chercherNom"));
        chercherNom->setGeometry(QRect(210, 12, 91, 31));
        chercherNom->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        rechercheParNom = new QLineEdit(groupBox_28);
        rechercheParNom->setObjectName(QStringLiteral("rechercheParNom"));
        rechercheParNom->setGeometry(QRect(70, 20, 113, 20));
        comptageBdd = new QLabel(page_2);
        comptageBdd->setObjectName(QStringLiteral("comptageBdd"));
        comptageBdd->setGeometry(QRect(400, 630, 301, 41));
        comptageBdd->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        comptageBDD = new QLabel(page_2);
        comptageBDD->setObjectName(QStringLiteral("comptageBDD"));
        comptageBDD->setGeometry(QRect(620, 640, 71, 21));
        toolBox->addItem(page_2, QStringLiteral("Modifier ou supprimer"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 94, 24));
        groupBox_18 = new QGroupBox(page_3);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(1130, 0, 351, 121));
        groupBox_18->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        idCouleurSuppr = new QLineEdit(groupBox_18);
        idCouleurSuppr->setObjectName(QStringLiteral("idCouleurSuppr"));
        idCouleurSuppr->setGeometry(QRect(180, 30, 113, 20));
        label_42 = new QLabel(groupBox_18);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(70, 60, 81, 16));
        label_42->setStyleSheet(QStringLiteral("border:none;"));
        label_41 = new QLabel(groupBox_18);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(70, 30, 71, 16));
        label_41->setStyleSheet(QStringLiteral("border:none;"));
        nomCouleurSuppr = new QLineEdit(groupBox_18);
        nomCouleurSuppr->setObjectName(QStringLiteral("nomCouleurSuppr"));
        nomCouleurSuppr->setGeometry(QRect(180, 60, 113, 20));
        btnSupprimerCouleur = new QPushButton(groupBox_18);
        btnSupprimerCouleur->setObjectName(QStringLiteral("btnSupprimerCouleur"));
        btnSupprimerCouleur->setGeometry(QRect(250, 90, 75, 23));
        btnSupprimerCouleur->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        modifierCouleur = new QPushButton(groupBox_18);
        modifierCouleur->setObjectName(QStringLiteral("modifierCouleur"));
        modifierCouleur->setGeometry(QRect(150, 90, 75, 23));
        modifierCouleur->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        groupBox_17 = new QGroupBox(page_3);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setGeometry(QRect(1130, 460, 351, 111));
        groupBox_17->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        idIndiceSuppr = new QLineEdit(groupBox_17);
        idIndiceSuppr->setObjectName(QStringLiteral("idIndiceSuppr"));
        idIndiceSuppr->setGeometry(QRect(180, 20, 113, 20));
        nomIndiceSuppr = new QLineEdit(groupBox_17);
        nomIndiceSuppr->setObjectName(QStringLiteral("nomIndiceSuppr"));
        nomIndiceSuppr->setGeometry(QRect(180, 50, 113, 20));
        label_43 = new QLabel(groupBox_17);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(70, 20, 71, 16));
        label_43->setStyleSheet(QStringLiteral("border:none;"));
        label_44 = new QLabel(groupBox_17);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(70, 50, 81, 16));
        label_44->setStyleSheet(QStringLiteral("border:none;"));
        btnSupprimerIndice = new QPushButton(groupBox_17);
        btnSupprimerIndice->setObjectName(QStringLiteral("btnSupprimerIndice"));
        btnSupprimerIndice->setGeometry(QRect(250, 80, 75, 23));
        btnSupprimerIndice->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        modifierIndice = new QPushButton(groupBox_17);
        modifierIndice->setObjectName(QStringLiteral("modifierIndice"));
        modifierIndice->setGeometry(QRect(150, 80, 75, 23));
        modifierIndice->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        groupBox_19 = new QGroupBox(page_3);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(1130, 310, 351, 111));
        groupBox_19->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        idPuissanceSuppr = new QLineEdit(groupBox_19);
        idPuissanceSuppr->setObjectName(QStringLiteral("idPuissanceSuppr"));
        idPuissanceSuppr->setGeometry(QRect(180, 20, 113, 20));
        nomPuissanceSuppr = new QLineEdit(groupBox_19);
        nomPuissanceSuppr->setObjectName(QStringLiteral("nomPuissanceSuppr"));
        nomPuissanceSuppr->setGeometry(QRect(180, 50, 113, 20));
        label_45 = new QLabel(groupBox_19);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(70, 20, 71, 16));
        label_45->setStyleSheet(QStringLiteral("border:none;"));
        label_46 = new QLabel(groupBox_19);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(70, 50, 81, 16));
        label_46->setStyleSheet(QStringLiteral("border:none;"));
        btnSupprimerPuissance = new QPushButton(groupBox_19);
        btnSupprimerPuissance->setObjectName(QStringLiteral("btnSupprimerPuissance"));
        btnSupprimerPuissance->setGeometry(QRect(250, 80, 75, 23));
        btnSupprimerPuissance->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        modifierPuissance = new QPushButton(groupBox_19);
        modifierPuissance->setObjectName(QStringLiteral("modifierPuissance"));
        modifierPuissance->setGeometry(QRect(150, 80, 75, 23));
        modifierPuissance->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        groupBox_21 = new QGroupBox(page_3);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        groupBox_21->setGeometry(QRect(390, 0, 261, 281));
        groupBox_21->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
" margin-top: 1ex; /* leave space at the top for the title */\n"
"font-weight:bold;"));
        btnRechercherCouleur = new QPushButton(groupBox_21);
        btnRechercherCouleur->setObjectName(QStringLiteral("btnRechercherCouleur"));
        btnRechercherCouleur->setGeometry(QRect(80, 12, 101, 31));
        btnRechercherCouleur->setStyleSheet(QLatin1String("font-weight:normal;\n"
"border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        tableauSupprimer = new QTableView(groupBox_21);
        tableauSupprimer->setObjectName(QStringLiteral("tableauSupprimer"));
        tableauSupprimer->setGeometry(QRect(20, 50, 221, 211));
        tableauSupprimer->setStyleSheet(QStringLiteral("background-color:#ffffff;"));
        groupBox_22 = new QGroupBox(page_3);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        groupBox_22->setGeometry(QRect(190, 310, 261, 281));
        groupBox_22->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */\n"
"font-weight:bold;"));
        btnRechercherPuissance = new QPushButton(groupBox_22);
        btnRechercherPuissance->setObjectName(QStringLiteral("btnRechercherPuissance"));
        btnRechercherPuissance->setGeometry(QRect(80, 12, 101, 31));
        btnRechercherPuissance->setStyleSheet(QLatin1String("font-weight:normal;\n"
"border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        tableauPuissance = new QTableView(groupBox_22);
        tableauPuissance->setObjectName(QStringLiteral("tableauPuissance"));
        tableauPuissance->setGeometry(QRect(20, 51, 221, 211));
        groupBox_23 = new QGroupBox(page_3);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        groupBox_23->setGeometry(QRect(0, 0, 261, 281));
        groupBox_23->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */\n"
"font-weight:bold;"));
        btnRechercherClasse = new QPushButton(groupBox_23);
        btnRechercherClasse->setObjectName(QStringLiteral("btnRechercherClasse"));
        btnRechercherClasse->setGeometry(QRect(80, 12, 101, 31));
        btnRechercherClasse->setStyleSheet(QLatin1String("font-weight:normal;\n"
"border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        tableauClasse = new QTableView(groupBox_23);
        tableauClasse->setObjectName(QStringLiteral("tableauClasse"));
        tableauClasse->setGeometry(QRect(20, 50, 221, 211));
        groupBox_24 = new QGroupBox(page_3);
        groupBox_24->setObjectName(QStringLiteral("groupBox_24"));
        groupBox_24->setGeometry(QRect(770, 0, 261, 281));
        groupBox_24->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
" margin-top: 1ex; /* leave space at the top for the title */\n"
"font-weight:bold;"));
        btnRechercherIndice = new QPushButton(groupBox_24);
        btnRechercherIndice->setObjectName(QStringLiteral("btnRechercherIndice"));
        btnRechercherIndice->setGeometry(QRect(80, 12, 101, 31));
        btnRechercherIndice->setStyleSheet(QLatin1String("font-weight:normal;\n"
"border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        tableauProtection = new QTableView(groupBox_24);
        tableauProtection->setObjectName(QStringLiteral("tableauProtection"));
        tableauProtection->setGeometry(QRect(20, 50, 221, 211));
        groupBox_20 = new QGroupBox(page_3);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setGeometry(QRect(1130, 160, 351, 111));
        groupBox_20->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        idClasseSuppr = new QLineEdit(groupBox_20);
        idClasseSuppr->setObjectName(QStringLiteral("idClasseSuppr"));
        idClasseSuppr->setGeometry(QRect(180, 20, 113, 20));
        nomClasseSuppr = new QLineEdit(groupBox_20);
        nomClasseSuppr->setObjectName(QStringLiteral("nomClasseSuppr"));
        nomClasseSuppr->setGeometry(QRect(180, 50, 113, 20));
        label_47 = new QLabel(groupBox_20);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(70, 20, 71, 16));
        label_47->setStyleSheet(QStringLiteral("border:none;"));
        label_48 = new QLabel(groupBox_20);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(70, 50, 81, 16));
        label_48->setStyleSheet(QStringLiteral("border:none;"));
        btnSupprimerClasse = new QPushButton(groupBox_20);
        btnSupprimerClasse->setObjectName(QStringLiteral("btnSupprimerClasse"));
        btnSupprimerClasse->setGeometry(QRect(250, 80, 75, 23));
        btnSupprimerClasse->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        modifierClasse = new QPushButton(groupBox_20);
        modifierClasse->setObjectName(QStringLiteral("modifierClasse"));
        modifierClasse->setGeometry(QRect(150, 80, 75, 23));
        modifierClasse->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        groupBox_26 = new QGroupBox(page_3);
        groupBox_26->setObjectName(QStringLiteral("groupBox_26"));
        groupBox_26->setGeometry(QRect(580, 310, 261, 281));
        groupBox_26->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
" margin-top: 1ex; /* leave space at the top for the title */\n"
"font-weight:bold;"));
        pushButton_3 = new QPushButton(groupBox_26);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 12, 101, 31));
        pushButton_3->setStyleSheet(QLatin1String("font-weight:normal;\n"
"border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        tableauAngle = new QTableView(groupBox_26);
        tableauAngle->setObjectName(QStringLiteral("tableauAngle"));
        tableauAngle->setGeometry(QRect(20, 51, 221, 211));
        groupBox_27 = new QGroupBox(page_3);
        groupBox_27->setObjectName(QStringLiteral("groupBox_27"));
        groupBox_27->setGeometry(QRect(1130, 610, 351, 111));
        groupBox_27->setStyleSheet(QLatin1String("background-color:none;\n"
"border: 1px solid #0E0B0F;\n"
"\n"
" margin-top: 1ex; /* leave space at the top for the title */"));
        idAngleSuppr = new QLineEdit(groupBox_27);
        idAngleSuppr->setObjectName(QStringLiteral("idAngleSuppr"));
        idAngleSuppr->setGeometry(QRect(180, 20, 113, 20));
        nomAngleSuppr = new QLineEdit(groupBox_27);
        nomAngleSuppr->setObjectName(QStringLiteral("nomAngleSuppr"));
        nomAngleSuppr->setGeometry(QRect(180, 50, 113, 20));
        label_52 = new QLabel(groupBox_27);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(70, 20, 71, 16));
        label_52->setStyleSheet(QStringLiteral("border:none;"));
        label_53 = new QLabel(groupBox_27);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(70, 50, 81, 16));
        label_53->setStyleSheet(QStringLiteral("border:none;"));
        btnSupprimerIndice_2 = new QPushButton(groupBox_27);
        btnSupprimerIndice_2->setObjectName(QStringLiteral("btnSupprimerIndice_2"));
        btnSupprimerIndice_2->setGeometry(QRect(250, 80, 75, 23));
        btnSupprimerIndice_2->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        modifierAngle = new QPushButton(groupBox_27);
        modifierAngle->setObjectName(QStringLiteral("modifierAngle"));
        modifierAngle->setGeometry(QRect(150, 80, 75, 23));
        modifierAngle->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color:#95C206;\n"
"font: 13px;\n"
"height: 91px;\n"
"weidht: 31px;"));
        toolBox->addItem(page_3, QStringLiteral("Supprimer des options"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1565, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Configuration", nullptr));
        comboTypeLaser->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        comboTypeLaser->setItemText(1, QApplication::translate("MainWindow", "Ligne", nullptr));
        comboTypeLaser->setItemText(2, QApplication::translate("MainWindow", "Croix", nullptr));
        comboTypeLaser->setItemText(3, QApplication::translate("MainWindow", "Point", nullptr));

        label_8->setText(QApplication::translate("MainWindow", "Type laser: ", nullptr));
        comboSurface->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        comboSurface->setItemText(1, QApplication::translate("MainWindow", "Clair", nullptr));
        comboSurface->setItemText(2, QApplication::translate("MainWindow", "Fonc\303\251", nullptr));
        comboSurface->setItemText(3, QApplication::translate("MainWindow", "Brillant", nullptr));

        label_6->setText(QApplication::translate("MainWindow", "Surface de projection :", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Couleur :", nullptr));
        comboCouleur->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        comboCouleur->setItemText(1, QApplication::translate("MainWindow", "Vert", nullptr));
        comboCouleur->setItemText(2, QApplication::translate("MainWindow", "Rouge", nullptr));

        label_12->setText(QApplication::translate("MainWindow", "Focalisation :", nullptr));
        comboFocal->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        comboFocal->setItemText(1, QApplication::translate("MainWindow", "Oui", nullptr));
        comboFocal->setItemText(2, QApplication::translate("MainWindow", "Non", nullptr));

        label_18->setText(QApplication::translate("MainWindow", "Environnement :", nullptr));
        environnement->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        environnement->setItemText(1, QApplication::translate("MainWindow", "Poussi\303\250re", nullptr));
        environnement->setItemText(2, QApplication::translate("MainWindow", "Limaille", nullptr));
        environnement->setItemText(3, QApplication::translate("MainWindow", "Eau", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "Alimentation: ", nullptr));
        comboAlim->setItemText(0, QApplication::translate("MainWindow", "24 V", nullptr));
        comboAlim->setItemText(1, QApplication::translate("MainWindow", "5 V", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Lumi\303\250re :", nullptr));
        comboLumiere->setItemText(0, QApplication::translate("MainWindow", "Atelier normal", nullptr));
        comboLumiere->setItemText(1, QApplication::translate("MainWindow", "Tr\303\250s lumineux", nullptr));
        comboLumiere->setItemText(2, QApplication::translate("MainWindow", "Tr\303\250s sombre", nullptr));

        groupBox->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "Longueur de ligne :", nullptr));
        label_54->setText(QApplication::translate("MainWindow", "Hauteur :", nullptr));
        groupBox_2->setTitle(QString());
        label_56->setText(QApplication::translate("MainWindow", "Inclinaison :", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Cliquer 2 fois", nullptr));
        comboAngle->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        comboAngle->setItemText(1, QApplication::translate("MainWindow", "10", nullptr));
        comboAngle->setItemText(2, QApplication::translate("MainWindow", "20", nullptr));
        comboAngle->setItemText(3, QApplication::translate("MainWindow", "30", nullptr));
        comboAngle->setItemText(4, QApplication::translate("MainWindow", "40", nullptr));
        comboAngle->setItemText(5, QApplication::translate("MainWindow", "80", nullptr));

        label_13->setText(QApplication::translate("MainWindow", "Angle :", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Hauteur :", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "R\303\251sultats", nullptr));
        label_59->setText(QApplication::translate("MainWindow", "Fin de ligne :", nullptr));
        label_57->setText(QApplication::translate("MainWindow", "Debut de ligne :", nullptr));
        label_55->setText(QApplication::translate("MainWindow", "Angle d'ouverture :", nullptr));
        label_60->setText(QApplication::translate("MainWindow", "Longueur de ligne :", nullptr));
        label_58->setText(QApplication::translate("MainWindow", "Point de concentration :", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Angle haut :", nullptr));
        label->setText(QApplication::translate("MainWindow", "Hypot\303\251nuse :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Angle bas :", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Rechercher (3)", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "R\303\251initialiser", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Calculer ligne(2)", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Calculer Angle(1)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Configuration", nullptr));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "Cr\303\251er un nouveau laser", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Type :", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Alimentation : ", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Indice de protection :", nullptr));
        enregistrerEnBdd->setText(QApplication::translate("MainWindow", "Enregistrer", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Puissance :", nullptr));
        enregistreType->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistreType->setItemText(1, QApplication::translate("MainWindow", "Ligne", nullptr));
        enregistreType->setItemText(2, QApplication::translate("MainWindow", "Croix", nullptr));
        enregistreType->setItemText(3, QApplication::translate("MainWindow", "Point", nullptr));

        enregistrerPuissance->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistrerPuissance->setItemText(1, QApplication::translate("MainWindow", "1 mW", nullptr));
        enregistrerPuissance->setItemText(2, QApplication::translate("MainWindow", "3mW", nullptr));
        enregistrerPuissance->setItemText(3, QApplication::translate("MainWindow", "5 mW", nullptr));
        enregistrerPuissance->setItemText(4, QApplication::translate("MainWindow", "10 mW", nullptr));
        enregistrerPuissance->setItemText(5, QApplication::translate("MainWindow", "15 mW", nullptr));
        enregistrerPuissance->setItemText(6, QApplication::translate("MainWindow", "30 mW", nullptr));
        enregistrerPuissance->setItemText(7, QApplication::translate("MainWindow", "40 mW", nullptr));

        enregistrerAlimentation->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistrerAlimentation->setItemText(1, QApplication::translate("MainWindow", "5 V", nullptr));
        enregistrerAlimentation->setItemText(2, QApplication::translate("MainWindow", "24 V", nullptr));

        enregistrerIndice->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistrerIndice->setItemText(1, QApplication::translate("MainWindow", "IP 42", nullptr));
        enregistrerIndice->setItemText(2, QApplication::translate("MainWindow", "IP 54", nullptr));
        enregistrerIndice->setItemText(3, QApplication::translate("MainWindow", "IP 67", nullptr));

        label_31->setText(QApplication::translate("MainWindow", "Type de courant :", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "Angle d'ouverture :", nullptr));
        enregistrerCourant->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistrerCourant->setItemText(1, QApplication::translate("MainWindow", "AC", nullptr));
        enregistrerCourant->setItemText(2, QApplication::translate("MainWindow", "DC", nullptr));

        enregistrerAngle->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistrerAngle->setItemText(1, QApplication::translate("MainWindow", "10\302\260", nullptr));
        enregistrerAngle->setItemText(2, QApplication::translate("MainWindow", "20\302\260", nullptr));
        enregistrerAngle->setItemText(3, QApplication::translate("MainWindow", "30\302\260", nullptr));
        enregistrerAngle->setItemText(4, QApplication::translate("MainWindow", "40\302\260", nullptr));
        enregistrerAngle->setItemText(5, QApplication::translate("MainWindow", "80\302\260", nullptr));
        enregistrerAngle->setItemText(6, QApplication::translate("MainWindow", "38\302\260", nullptr));
        enregistrerAngle->setItemText(7, QApplication::translate("MainWindow", "62\302\260", nullptr));

        label_33->setText(QApplication::translate("MainWindow", "Classe laser :", nullptr));
        enregistrerClasse->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistrerClasse->setItemText(1, QApplication::translate("MainWindow", "Classe 1", nullptr));
        enregistrerClasse->setItemText(2, QApplication::translate("MainWindow", "Classe 2", nullptr));
        enregistrerClasse->setItemText(3, QApplication::translate("MainWindow", "Classe 2M", nullptr));
        enregistrerClasse->setItemText(4, QApplication::translate("MainWindow", "Classe 3R", nullptr));
        enregistrerClasse->setItemText(5, QApplication::translate("MainWindow", "Classe 3B", nullptr));

        enregistrerCouleur->setItemText(0, QApplication::translate("MainWindow", "Vert", nullptr));
        enregistrerCouleur->setItemText(1, QApplication::translate("MainWindow", "Rouge", nullptr));

        label_22->setText(QApplication::translate("MainWindow", "Couleur :", nullptr));
        label_49->setText(QApplication::translate("MainWindow", "Focalisable :", nullptr));
        enregistrerFocalisable->setItemText(0, QApplication::translate("MainWindow", "----------------------", nullptr));
        enregistrerFocalisable->setItemText(1, QApplication::translate("MainWindow", "Oui", nullptr));
        enregistrerFocalisable->setItemText(2, QApplication::translate("MainWindow", "Non", nullptr));

        groupBox_16->setTitle(QApplication::translate("MainWindow", "Ajouter des options", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Ajouter une couleur : ", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "Ajouter indice de protection :", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "Ajouter une puissance :", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "Ajouter une classe laser :", nullptr));
        btnAjoutCouleur->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        btnAjoutIndice->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        btnAjoutPuissance->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        btnAjoutClasse->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        label_51->setText(QApplication::translate("MainWindow", "Ajouter un angle d'ouverture :", nullptr));
        btnAjoutAngle->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Ajouter", nullptr));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "Modification ou suppression", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Type :", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "Puissance :", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Alimentation :", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Indice de protection :", nullptr));
        validModif->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        supprimerLaser->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "Courant :", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "Angle :", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "Classe :", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "Couleur :", nullptr));
        label_50->setText(QApplication::translate("MainWindow", "Focalisable :", nullptr));
        groupBox_25->setTitle(QApplication::translate("MainWindow", "Liste des lasers", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        groupBox_28->setTitle(QApplication::translate("MainWindow", "Chercher par nom", nullptr));
        chercherNom->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        comptageBdd->setText(QApplication::translate("MainWindow", "Nombre de lasers en base de donn\303\251es : ", nullptr));
        comptageBDD->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Modifier ou supprimer", nullptr));
        groupBox_18->setTitle(QApplication::translate("MainWindow", "Supprimer une couleur", nullptr));
        label_42->setText(QApplication::translate("MainWindow", "Nom couleur :", nullptr));
        label_41->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        btnSupprimerCouleur->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        modifierCouleur->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        groupBox_17->setTitle(QApplication::translate("MainWindow", "Supprimer un indice de protection", nullptr));
        idIndiceSuppr->setText(QString());
        nomIndiceSuppr->setText(QString());
        label_43->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        label_44->setText(QApplication::translate("MainWindow", "Nom indice :", nullptr));
        btnSupprimerIndice->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        modifierIndice->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        groupBox_19->setTitle(QApplication::translate("MainWindow", "Supprimer une puissance", nullptr));
        idPuissanceSuppr->setText(QString());
        nomPuissanceSuppr->setText(QString());
        label_45->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        label_46->setText(QApplication::translate("MainWindow", "Nom puissance :", nullptr));
        btnSupprimerPuissance->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        modifierPuissance->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        groupBox_21->setTitle(QApplication::translate("MainWindow", "Couleur", nullptr));
        btnRechercherCouleur->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        groupBox_22->setTitle(QApplication::translate("MainWindow", "Puissance", nullptr));
        btnRechercherPuissance->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        groupBox_23->setTitle(QApplication::translate("MainWindow", "Classe", nullptr));
        btnRechercherClasse->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        groupBox_24->setTitle(QApplication::translate("MainWindow", "Indice", nullptr));
        btnRechercherIndice->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        groupBox_20->setTitle(QApplication::translate("MainWindow", "Supprimer une Classe", nullptr));
        idClasseSuppr->setText(QString());
        nomClasseSuppr->setText(QString());
        label_47->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        label_48->setText(QApplication::translate("MainWindow", "Nom classe :", nullptr));
        btnSupprimerClasse->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        modifierClasse->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        groupBox_26->setTitle(QApplication::translate("MainWindow", "Angles", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        groupBox_27->setTitle(QApplication::translate("MainWindow", "Supprimer un angle d'ouverture", nullptr));
        idAngleSuppr->setText(QString());
        nomAngleSuppr->setText(QString());
        label_52->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        label_53->setText(QApplication::translate("MainWindow", "Nom angle :", nullptr));
        btnSupprimerIndice_2->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        modifierAngle->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "Supprimer des options", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Modification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
