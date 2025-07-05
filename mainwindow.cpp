#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux tricolores UE");
    resize(700, 400);

    QPixmap bkgnd("C:/Users/kevin/Documents/drapeaux/drapeau-europe.jpeg"); // Utilisez des barres obliques inversées dans le chemin
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);

    B_ALLEMAGNE = new QPushButton("Allemagne");
    B_AUTRICHE = new QPushButton("Autriche");
    B_BELGIQUE = new QPushButton("Belgique");
    B_BULGARIE = new QPushButton("Bulgarie");
    B_ESTONIE = new QPushButton("Estonie");
    B_FRANCE = new QPushButton("France");
    B_HONGRIE = new QPushButton("Hongrie");
    B_IRLANDE = new QPushButton("Irlande");
    B_ITALIE = new QPushButton("Italie");
    B_LETTONIE = new QPushButton("Lettonie");
    B_LITUANIE = new QPushButton("Lituanie");
    B_LUXEMBOURG = new QPushButton("Luxembourg");
    B_PAYS_BAS = new QPushButton("Pays-Bas");
    B_ROUMANIE = new QPushButton("Roumanie");

    connect(B_ALLEMAGNE, SIGNAL(clicked()), this, SLOT(Drapeau_ALLEMAGNE()));
    connect(B_AUTRICHE, SIGNAL(clicked()), this, SLOT(Drapeau_AUTRICHE()));
    connect(B_BELGIQUE, SIGNAL(clicked()), this, SLOT(Drapeau_BELGIQUE()));
    connect(B_BULGARIE, SIGNAL(clicked()), this, SLOT(Drapeau_BULGARIE()));
    connect(B_ESTONIE, SIGNAL(clicked()), this, SLOT(Drapeau_ESTONIE()));
    connect(B_FRANCE, SIGNAL(clicked()), this, SLOT(Drapeau_FRANCE()));
    connect(B_HONGRIE, SIGNAL(clicked()), this, SLOT(Drapeau_HONGRIE()));
    connect(B_IRLANDE, SIGNAL(clicked()), this, SLOT(Drapeau_IRLANDE()));
    connect(B_ITALIE, SIGNAL(clicked()), this, SLOT(Drapeau_ITALIE()));
    connect(B_LETTONIE, SIGNAL(clicked()), this, SLOT(Drapeau_LETTONIE()));
    connect(B_LITUANIE, SIGNAL(clicked()), this, SLOT(Drapeau_LITUANIE()));
    connect(B_LUXEMBOURG, SIGNAL(clicked()), this, SLOT(Drapeau_LUXEMBOURG()));
    connect(B_PAYS_BAS, SIGNAL(clicked()), this, SLOT(Drapeau_PAYS_BAS()));
    connect(B_ROUMANIE, SIGNAL(clicked()), this, SLOT(Drapeau_ROUMANIE()));

    Hlayout1 = new QHBoxLayout;
        Hlayout1->addWidget(B_ALLEMAGNE);
        Hlayout1->addWidget(B_AUTRICHE);
        Hlayout1->addWidget(B_BELGIQUE);
        Hlayout1->addWidget(B_BULGARIE);
        Hlayout1->addWidget(B_ESTONIE);
        Hlayout1->addWidget(B_FRANCE);
        Hlayout1->addWidget(B_HONGRIE);

        Hlayout2 = new QHBoxLayout;
        Hlayout2->addWidget(B_IRLANDE);
        Hlayout2->addWidget(B_ITALIE);
        Hlayout2->addWidget(B_LETTONIE);
        Hlayout2->addWidget(B_LITUANIE);
        Hlayout2->addWidget(B_LUXEMBOURG);
        Hlayout2->addWidget(B_PAYS_BAS);
        Hlayout2->addWidget(B_ROUMANIE);

    QVBoxLayout *Pagelayout = new QVBoxLayout;
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);

    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);
}

void MainWindow::Drapeau_ALLEMAGNE()
{
    Drapeau *D = new Drapeau("Black", "red", "gold", "Vertical", "Allemagne");
}

void MainWindow::Drapeau_AUTRICHE()
{
    Drapeau *D = new Drapeau("Red", "White", "Red", "Horizontal", "Autriche");
}

void MainWindow::Drapeau_BELGIQUE()
{
    Drapeau *D = new Drapeau("Black", "Yellow", "Red", "Horizontal", "Belgique");
}

void MainWindow::Drapeau_BULGARIE()
{
    Drapeau *D = new Drapeau("White", "Green", "Red", "Vertical", "Bulgarie");
}

void MainWindow::Drapeau_ESTONIE()
{
    Drapeau *D = new Drapeau("Blue", "Black", "White", "Vertical", "Estonie");
}

void MainWindow::Drapeau_FRANCE()
{
    Drapeau *D = new Drapeau("Blue", "White", "Red", "Horizontal", "France");
}

void MainWindow::Drapeau_HONGRIE()
{
    Drapeau *D = new Drapeau("Red", "White", "Green", "Vertical", "Hongrie");
}

void MainWindow::Drapeau_IRLANDE()
{
    Drapeau *D = new Drapeau("Green", "White", "Orange", "Horizontal", "Irlande");
}

void MainWindow::Drapeau_ITALIE()
{
    Drapeau *D = new Drapeau("Green", "White", "Red", "Horizontal", "Italie");
}

void MainWindow::Drapeau_LETTONIE()
{
    Drapeau *D = new Drapeau("Crimson", "White", "Crimson", "Vertical", "Lettonie");
}

void MainWindow::Drapeau_LITUANIE()
{
    Drapeau *D = new Drapeau("Yellow", "Green", "Red", "Vertical", "Lituanie");
}

void MainWindow::Drapeau_LUXEMBOURG()
{
    Drapeau *D = new Drapeau("Red", "White", "SkyBlue", "Vertical", "Luxembourg");
}

void MainWindow::Drapeau_PAYS_BAS()
{
    Drapeau *D = new Drapeau("Red", "White", "Blue", "Vertical", "Pays-Bas");
}

void MainWindow::Drapeau_ROUMANIE()
{
    Drapeau *D = new Drapeau("Blue", "Yellow", "Red", "Horizontal", "Roumanie");
}


MainWindow::~MainWindow()
{
    delete ui;
}

