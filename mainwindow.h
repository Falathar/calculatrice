#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QColor>
#include <QColor>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow (QWidget *parent = 0);


    ~MainWindow();

private slots:
    void handleButton();
    void handle_m_boutton1();
    void handle_m_boutton2();
    void handle_m_boutton3();
    void handle_m_boutton4();
    void handle_m_boutton5();
    void handle_m_boutton6();
    void handle_m_boutton7();
    void handle_m_boutton8();
    void handle_m_boutton9();
    void handle_m_plus();
    void handle_m_moins();
    void handle_m_diviser();





private :
    QPushButton *m_boutton;
    QLabel *m_screen;
    QPushButton *m_boutton0;

    QPushButton *m_boutton1;
    QPushButton *m_boutton2;
    QPushButton *m_boutton3;
    QPushButton *m_boutton4;
    QPushButton *m_boutton5;
    QPushButton *m_boutton6;
    QPushButton *m_boutton7;
    QPushButton *m_boutton8;
    QPushButton *m_boutton9;
    QPushButton *m_plus;
    QPushButton *m_moins;
    QPushButton *m_diviser;





    // constants:
    const int  SCREEN_HEIGHT = 50;
    const int  SCREEN_WEIGHT = 450;




};

#endif // MAINWINDOW_H
