#include "closebutton.h"

#include <QPushButton>

CloseButton::CloseButton(QWidget *parent)
    : QWidget(parent)
{
    closeBut = new QPushButton("Close");
    closeBut->setGeometry(x(), y(), Qt::AlignHCenter, Qt::AlignVCenter);

    closeBut->show();
}

CloseButton::~CloseButton()
{

}
