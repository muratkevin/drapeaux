#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Drapeau : public QWidget
{
    Q_OBJECT

public:
    Drapeau(QWidget *parent = nullptr);
    Drapeau(QString C1, QString C2, QString C3, QString type, QString title);
    ~Drapeau();

private:
    QHBoxLayout *Horiz_layout;
    QVBoxLayout *Vertic_layout;
};
