#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QColor>
#include <QColor>
#include <QLCDNumber>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow (QWidget *parent = 0);


    ~MainWindow();


private slots:
    void handle_m_boutton();

private :

    QString buffer1;
    QString buffer2;
    QString bufferop;

    QList<QPushButton*> listButtons;

    QList<QLabel*> listLabel;

    QPushButton *m_boutton;
    QLCDNumber *m_screen;
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
    QPushButton *m_egal;
    QPushButton *m_retour;

    //
    bool isOperator(QString);

    // constants:
    const int  SCREEN_HEIGHT = 50;
    const int  SCREEN_WEIGHT = 550;
};

#endif // MAINWINDOW_H
