#ifndef CLOSEBUTTON_H
#define CLOSEBUTTON_H

#include <QWidget>

class QPushButton;

class CloseButton : public QWidget
{
    Q_OBJECT

public:
    CloseButton(QWidget *parent = 0);
    ~CloseButton();
private:
    QPushButton *closeBut;
};

#endif // CLOSEBUTTON_H
