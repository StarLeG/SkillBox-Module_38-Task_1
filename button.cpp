#include "button.h"
#include "./ui_button.h"

Button::Button(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Button)
{
    ui->setupUi(this);
}

Button::~Button()
{
    delete ui;
}


void Button::play()
{
    player->setMedia(QUrl("qrc:/beep.mp3"));
    player->play();


}

