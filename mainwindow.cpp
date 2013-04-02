#include "mainwindow.h"
#include <QCoreApplication>
#include <QPushButton>
 #include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //creation fenetre


    // Create the button, make "this" the parent
        m_button = new QPushButton("My Button", this);
        m_boutton0 = new QPushButton("0",this);
        m_boutton1 = new QPushButton("1",this);
        m_bouton = new QPushButton("2",this);
        m_boutton3 = new QPushButton("3",this);
        m_boutton4 = new QPushButton("4",this);
          m_boutton5 = new QPushButton("5",this);
            m_boutton6 = new QPushButton("6",this);
              m_boutton7 = new QPushButton("7",this);
                m_boutton8 = new QPushButton("8",this);
                  m_boutton9 = new QPushButton("9",this);

        // set size and location of the button
        m_button->setGeometry(QRect(QPoint(100, 100),
                                     QSize(200, 50)));     //valeur = Mybutton

        m_boutton0->setGeometry(QRect(QPoint(100, 350),    // valeur 1
                                     QSize(200, 50)));

        m_boutton1->setGeometry(QRect(QPoint(100, 300),    // valeur 1
                                     QSize(200, 50)));


        m_bouton->setGeometry(QRect(QPoint(300, 300),
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


        // Connect button signal to appropriate slot
        connect(m_boutton0, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton1, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_bouton, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton3, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton4, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton5, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton6, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton7, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton8, SIGNAL(released()), this, SLOT(handleButton()));
        connect(m_boutton9, SIGNAL(released()), this, SLOT(handleButton()));

          m_screen = new QLabel(this);
         m_screen->setFrameStyle(QFrame::Panel | QFrame::Sunken);
         m_screen->setText("first line\nsecond line");
         m_screen->setAlignment(Qt::AlignBottom | Qt::AlignRight);
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
    m_boutton0->resize(100,100);

    m_screen->setText("0");
}



void MainWindow::handle m_boutton1();                    // boutton 1
{
    // change the text
    m_boutton1->setText("1");


    // resize button
    m_boutton1->resize(100,100);

    m_screen->setText("1");
}





