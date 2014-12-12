#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#define MIN 1
#define MAX 6

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myShortcut= new QShortcut(Qt::Key_Any,this);
    connect(myShortcut, SIGNAL(activated()), this, SLOT(setCameraBack()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCameraBack(void)
{
    ui->lcdNumber->display(MIN + rand() % (MAX - MIN + 1));
}
