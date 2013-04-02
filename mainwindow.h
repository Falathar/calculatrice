#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow (QWidget *parent = 0);


    ~MainWindow();

private slots:
    void handleButton();
    //void handle_m_boutton1();


private :
    QPushButton *m_boutton;
    QLabel *m_screen;

    QPushButton *m_boutton1;
    QPushButton *m_boutton2;
    QPushButton *m_boutton3;
    QPushButton *m_boutton4;
    QPushButton *m_boutton5;
    QPushButton *m_boutton6;
    QPushButton *m_boutton7;
    QPushButton *m_boutton8;
    QPushButton *m_boutton9;
    QPushButton *m_boutton0;

    // constants:
    const int  SCREEN_HEIGHT = 100;
    const int  SCREEN_WEIGHT = 100;

};

#endif // MAINWINDOW_H
