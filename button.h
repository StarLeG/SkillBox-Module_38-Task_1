#ifndef BUTTON_H
#define BUTTON_H

#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class Button; }
QT_END_NAMESPACE

class Button : public QMainWindow
{
    Q_OBJECT

public:
    Button(QWidget *parent = nullptr);
    ~Button();


private slots:
    void play();

private:
    Ui::Button *ui;
    QMediaPlayer* player = new QMediaPlayer();


};
#endif // BUTTON_H
