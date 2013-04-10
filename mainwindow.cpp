#include "mainwindow.h"
#include <QCoreApplication>
#include <QPushButton>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //creation fenetre
    this->setFixedSize(700,500);


    // Create the button, make "this" the parent
    m_boutton = new QPushButton ("quitter", this);
    m_boutton->setToolTip("quitter l'application");
    m_boutton0 = new QPushButton("0",this);
    m_boutton1 = new QPushButton("1",this);
    m_boutton2 = new QPushButton("2",this);
    m_boutton3 = new QPushButton("3",this);
    m_boutton4 = new QPushButton("4",this);
    m_boutton5 = new QPushButton("5",this);
    m_boutton6 = new QPushButton("6",this);
    m_boutton7 = new QPushButton("7",this);
    m_boutton8 = new QPushButton("8",this);
    m_boutton9 = new QPushButton("9",this);


    // signe de calcul
    m_plus = new QPushButton("+",this);
    m_plus->setCursor(Qt::PointingHandCursor);
    m_plus->setFont(QFont("Arial"));
    m_plus->setToolTip("+");
    m_moins = new QPushButton("-",this);
    m_moins->setCursor(Qt::PointingHandCursor);
    m_moins->setToolTip("-");
    m_diviser = new QPushButton("÷",this);
    m_diviser->setCursor(Qt::PointingHandCursor);
    m_diviser->setToolTip("+");





    // set size and location of the button
    m_boutton->setGeometry(QRect(QPoint(100, 450),
                                 QSize(200, 50)));     //valeur = Mybutton

    m_boutton0->setGeometry(QRect(QPoint(100, 350),    // valeur 1
                                  QSize(200, 50)));

    m_boutton1->setGeometry(QRect(QPoint(100, 300),    // valeur 1
                                  QSize(200, 50)));


    m_boutton2->setGeometry(QRect(QPoint(300, 300),
                                  QSize(200, 50)));     // valeur=2

    m_boutton3->setGeometry(QRect(QPoint(500, 300),
                                  QSize(200, 50)));    // valeur 3

    m_boutton4->setGeometry(QRect(QPoint(100, 250),
                                  QSize(200, 50)));     // valeur 4

    m_boutton5->setGeometry(QRect(QPoint(300, 250),
                                  QSize(200, 50)));   // valeur 5

    m_boutton6->setGeometry(QRect(QPoint(500, 250),   // valeur 6
                                  QSize(200, 50)));

    m_boutton7->setGeometry(QRect(QPoint(100, 200),   // valeur7
                                  QSize(200, 50)));

    m_boutton8->setGeometry(QRect(QPoint(300, 200),
                                  QSize(200, 50)));    // valeur 8

    m_boutton9->setGeometry(QRect(QPoint(500, 200),
                                  QSize(200, 50)));  // valeur 9

    m_plus->setGeometry(QRect(QPoint(300, 350),
                              QSize(200, 50)));  // valeur 9

    m_moins->setGeometry(QRect(QPoint(500, 350),
                              QSize(200, 50)));  // valeur 9
    m_diviser->setGeometry(QRect(QPoint(500, 400),
                                 QSize(200, 50)));  // valeur 9




    // Connect button signal to appropriate slot
    connect(m_boutton, SIGNAL(released()), this, SLOT(handleButton()));
    connect(m_boutton0, SIGNAL(released()), this, SLOT(handleButton()));
    connect(m_boutton1, SIGNAL(released()), this, SLOT(handle_m_boutton1()));
    connect(m_boutton2, SIGNAL(released()), this, SLOT(handle_m_boutton2()));
    connect(m_boutton3, SIGNAL(released()), this, SLOT(handle_m_boutton3()));
    connect(m_boutton4, SIGNAL(released()), this, SLOT(handle_m_boutton4()));
    connect(m_boutton5, SIGNAL(released()), this, SLOT(handle_m_boutton5()));
    connect(m_boutton6, SIGNAL(released()), this, SLOT(handle_m_boutton6()));
    connect(m_boutton7, SIGNAL(released()), this, SLOT(handle_m_boutton7()));
    connect(m_boutton8, SIGNAL(released()), this, SLOT(handle_m_boutton8()));
    connect(m_boutton9, SIGNAL(released()), this, SLOT(handle_m_boutton9()));
    connect(m_moins, SIGNAL(released()), this, SLOT(handle_m_moins()));
    connect(m_plus, SIGNAL(released()), this, SLOT(handle_m_plus()));
    connect(m_diviser, SIGNAL(released()), this, SLOT(handle_m_diviser()));
    QObject::connect(m_boutton, SIGNAL(clicked()), qApp, SLOT(quit()));

    m_screen = new QLabel(this);
    m_screen->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    m_screen->setText("calcul");
    m_screen->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    m_screen->resize(SCREEN_WEIGHT,SCREEN_HEIGHT);


}

MainWindow::~MainWindow()
{
    
}

// void pour chaque bouton
void MainWindow::handleButton()                         // bouton 0
{

    // change the text
    m_boutton0->setText("0");


    // resize button
    m_boutton0->resize(200,50);

    m_screen->setText("0");

}



void MainWindow::handle_m_boutton1()                    // boutton 1
{
    // change the text
    m_boutton1->setText("1");


    // resize button
    m_boutton1->resize(200,50);

    m_screen->setText("1");
}


void MainWindow::handle_m_boutton2()                    // boutton 1
{
    // change the text
    m_boutton2->setText("2");

    // resize button
    m_boutton2->resize(200,50);

    m_screen->setText("2");
}



void MainWindow::handle_m_boutton3()                    // boutton 1
{
    // change the text
    m_boutton3->setText("3");

    // resize button
    m_boutton3->resize(200,50);

    m_screen->setText("3");
}

void MainWindow::handle_m_boutton4()                    // boutton 1
{
    // change the text
    m_boutton4->setText("4");

    // resize button
    m_boutton4->resize(200,50);

    m_screen->setText("4");
}


void MainWindow::handle_m_boutton5()                    // boutton 1
{
    // change the text
    m_boutton5->setText("5");

    // resize button
    m_boutton5->resize(200,50);

    m_screen->setText("5");
}

void MainWindow::handle_m_boutton6()                    // boutton 1
{
    // change the text
    m_boutton6->setText("6");

    // resize button
    m_boutton6->resize(200,50);

    m_screen->setText("6");
}





void MainWindow::handle_m_boutton7()                    // boutton 1
{
    // change the text
    m_boutton7->setText("7");

    // resize button
    m_boutton7->resize(200,50);
    m_screen->setText("7");
}

void MainWindow::handle_m_boutton8()                    // boutton 1
{
    // change the text
    m_boutton8->setText("8");

    // resize button
    m_boutton8->resize(200,50);
    m_screen->setText("8");
}

void MainWindow::handle_m_boutton9()                    // boutton 1
{
    // change the text
    m_boutton9->setText("9");

    // resize button
    m_boutton9->resize(200,50);
    m_screen->setText("9");
}

void MainWindow::handle_m_plus()                    // boutton 1
{
    // change the text
    m_plus->setText("+");

    // resize button
    m_plus->resize(200,50);
    m_screen->setText("+");
}

void MainWindow::handle_m_moins()                    // boutton 1
{
    // change the text
    m_moins->setText("-");

    // resize button
    m_moins->resize(200,50);
    m_screen->setText("-");
}

void MainWindow::handle_m_diviser()                    // boutton 1
{
    // change the text
    m_diviser->setText("÷");

    // resize button
    m_diviser->resize(200,50);
    m_screen->setText("÷");
}
