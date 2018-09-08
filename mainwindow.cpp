#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /// \brief Настройки кнопок
    ui->btnExit->setStyleSheet(styleButtonActive);
    ui->btn1->setStyleSheet(styleButtonActive);

    ui->btnExit->setEnabled(true);
    ui->btn1->setEnabled(true);

    ui->btnExit->setText("ВЫХОД");
    ui->btnExit->setFixedWidth(200);
    ui->btnExit->setFixedHeight(50);

    ui->btn1->setText("Кинохит");
    ui->btn1->setFixedWidth(200);
    ui->btn1->setFixedHeight(50);

    connect(ui->btnExit, SIGNAL(clicked(bool)),
            this, SLOT(close())
            );

    connect(ui->btn1, SIGNAL(clicked(bool)),
            this, SLOT(playTV())
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::playTV() {
    system("~/iptv.sh omxplayer --aspect-mode fill -r -d -y -w -o hdmi http://50.7.136.155:8081/kinohit/index.m3u8");
}
