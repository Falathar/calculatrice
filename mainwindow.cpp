#include "mainwindow.h"
#include <QCoreApplication>
#include <QPushButton>
#include <QLabel>
#include <QLCDNumber>
#include <QMessageBox>
#include <QPalette>
#include <QBrush>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Empty buffer
    buffer1  = "";
    buffer2  = "";
    bufferop = "";

    // Create main windows
    this->setFixedSize(700,500);

    // Create "quit" button
    m_boutton =  new QPushButton ("quitter", this);
    m_boutton->setToolTip("quitter l'application");

    // Create "digits" buttons
    for(int i=0; i<=9; i++)
    {
        QString text = QString::number(i);
        listButtons << new QPushButton(text,this);
        connect(listButtons[i], SIGNAL(clicked()), this, SLOT(handle_m_boutton()));
    }

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
    m_plus->setStyleSheet ("QPushButton {background : }");
    setStyleSheet("background-color: grey;");










    m_egal=new QPushButton("=",this);
    m_egal->setToolTip("=");
    // set size and location of the button
    m_boutton->setGeometry(QRect(QPoint(610, 350),
                                 QSize(90, 50)));     //valeur = Mybutton

    listButtons[0]->setGeometry(QRect(QPoint(10, 350),    // valeur 1
                                      QSize(400, 50)));

    listButtons[1]->setGeometry(QRect(QPoint(10, 300),    // valeur 1
                                      QSize(200, 50)));


    listButtons[2]->setGeometry(QRect(QPoint(210, 300),
                                      QSize(200, 50)));     // valeur=2

    listButtons[3]->setGeometry(QRect(QPoint(410, 300),
                                      QSize(200, 50)));    // valeur 3

    listButtons[4]->setGeometry(QRect(QPoint(10, 250),
                                      QSize(200, 50)));     // valeur 4

    listButtons[5]->setGeometry(QRect(QPoint(210, 250),
                                      QSize(200, 50)));   // valeur 5

    listButtons[6]->setGeometry(QRect(QPoint(410, 250),   // valeur 6
                                      QSize(200, 50)));

    listButtons[7]->setGeometry(QRect(QPoint(10, 200),   // valeur7
                                      QSize(200, 50)));

    listButtons[8]->setGeometry(QRect(QPoint(210, 200),
                                      QSize(200, 50)));    // valeur 8

    listButtons[9]->setGeometry(QRect(QPoint(410, 200),
                                      QSize(200, 50)));  // valeur 9
    m_plus->setGeometry(QRect(QPoint(610, 250),
                              QSize(90, 50)));  // valeur 9

    m_moins->setGeometry(QRect(QPoint(610, 300),
                               QSize(90, 50)));  // valeur 9
    m_diviser->setGeometry(QRect(QPoint(610, 200),
                                 QSize(90, 50)));  // valeur 9

    m_egal->setGeometry(QRect(QPoint(410, 350),
                                 QSize(200, 50)));  // valeur 9


    // Connect button signal to appropriate slot
    connect(m_moins, SIGNAL(clicked()), this, SLOT(handle_m_boutton()));
    connect(m_plus, SIGNAL(clicked()), this, SLOT(handle_m_boutton()));
    connect(m_diviser, SIGNAL(clicked()), this, SLOT(handle_m_boutton()));
    connect(m_egal, SIGNAL(clicked()), this, SLOT(handle_m_boutton()));
    QObject::connect(m_boutton, SIGNAL(clicked()), qApp, SLOT(quit()));

    m_screen = new QLCDNumber(this);
    m_screen->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    m_screen->display("hello");
    //m_screen->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    m_screen->resize(SCREEN_WEIGHT,SCREEN_HEIGHT);



}

MainWindow::~MainWindow()
{
    
}

void MainWindow::handle_m_boutton()
{
    QPushButton *button = (QPushButton *)sender();
    QString txtButton=button->text();

    bool ok;
    float fbuffer1 = buffer1.toFloat(&ok);
    float fbuffer2 = buffer2.toFloat(&ok);

    if(isOperator(txtButton))
    {
        if(bufferop.compare("+") == 0)
        {
            buffer1 = QString::number(fbuffer1 + fbuffer2);
        }
        else if(bufferop.compare("-") == 0)
        {
            buffer1 = QString::number(fbuffer1 - fbuffer2);
        }
        else if(bufferop.compare("*") == 0)
        {
            buffer1 = QString::number(fbuffer1 * fbuffer2);
        }
        else if(bufferop.compare("÷") == 0)
        {
            buffer1 = QString::number(fbuffer1 / fbuffer2);
        }

        if(bufferop.compare("=") == 0)
        {
            txtButton="";
        }

        bufferop=txtButton;
        buffer2 = "";
        m_screen->display(buffer1);
    }
    else
    {
        if(bufferop.isEmpty())
        {
            buffer1.append(txtButton);
            m_screen->display(buffer1);
        }
        else
        {
            buffer2.append(txtButton);
            m_screen->display(buffer2);
        }
    }

    //QMessageBox msgBox;
    //msgBox.setText("buffer1: "+buffer1+" op "+bufferop+" buffer2: "+buffer2);
    //msgBox.exec();
}

bool MainWindow::isOperator(QString text)
{
    return text.compare("+") == 0 || text.compare("-") == 0 || text.compare("÷") == 0 || text.compare("*") == 0 || text.compare("=") == 0;
}


