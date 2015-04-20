#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton *closeButton = new QPushButton("Close");

    closeButton->show();

    QObject::connect(closeButton, SIGNAL(clicked()), &a, SLOT(quit()));

    return a.exec();
}
