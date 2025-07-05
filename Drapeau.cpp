#include "Drapeau.h"
#include "Color.h"

Drapeau::Drapeau(QWidget *parent) : QWidget(parent)
{
    Horiz_layout = new QHBoxLayout(this);
    Vertic_layout = new QVBoxLayout(this);
}

Drapeau::Drapeau(QString C1, QString C2, QString C3, QString type, QString title)
{
    Horiz_layout = new QHBoxLayout(this);
    Vertic_layout = new QVBoxLayout(this);

    Color *Couleur1 = new Color(C1);
    Color *Couleur2 = new Color(C2);
    Color *Couleur3 = new Color(C3);

    if (type == "Horizontal")
    {
        Horiz_layout->addWidget(Couleur1);
        Horiz_layout->addWidget(Couleur2);
        Horiz_layout->addWidget(Couleur3);
        Horiz_layout->setSpacing(0);
        Horiz_layout->setMargin(0);

        QWidget *widget = new QWidget;
        widget->setLayout(Horiz_layout);
        widget->resize(400, 400);
        widget->setWindowTitle(title);
        widget->show();
    }
    else if (type == "Vertical")
    {
        QVBoxLayout *Vert_layout = new QVBoxLayout;

        Vert_layout->addWidget(Couleur1);
        Vert_layout->addWidget(Couleur2);
        Vert_layout->addWidget(Couleur3);
        Vert_layout->setSpacing(0);
        Vert_layout->setMargin(0);

        QWidget *widget = new QWidget;
        widget->setLayout(Vert_layout);
        widget->resize(400, 400);
        widget->setWindowTitle(title);
        widget->show();
    }


    }

Drapeau::~Drapeau()
{
}
