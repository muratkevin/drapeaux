#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "Drapeau.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void Drapeau_ALLEMAGNE();
    void Drapeau_AUTRICHE();
    void Drapeau_BELGIQUE();
    void Drapeau_BULGARIE();
    void Drapeau_ESTONIE();
    void Drapeau_FRANCE();
    void Drapeau_HONGRIE();
    void Drapeau_IRLANDE();
    void Drapeau_ITALIE();
    void Drapeau_LETTONIE();
    void Drapeau_LITUANIE();
    void Drapeau_LUXEMBOURG();
    void Drapeau_PAYS_BAS();
    void Drapeau_ROUMANIE();

private:
    Ui::MainWindow *ui;
    QPushButton *B_ALLEMAGNE;
    QPushButton *B_AUTRICHE;
    QPushButton *B_BELGIQUE;
    QPushButton *B_BULGARIE;
    QPushButton *B_ESTONIE;
    QPushButton *B_FRANCE;
    QPushButton *B_HONGRIE;
    QPushButton *B_IRLANDE;
    QPushButton *B_ITALIE;
    QPushButton *B_LETTONIE;
    QPushButton *B_LITUANIE;
    QPushButton *B_LUXEMBOURG;
    QPushButton *B_PAYS_BAS;
    QPushButton *B_ROUMANIE;

    QHBoxLayout *Hlayout1;
    QHBoxLayout *Hlayout2;
    QVBoxLayout *Pagelayout;

    void setButtonWidth(QPushButton *button, int width);
};

#endif
