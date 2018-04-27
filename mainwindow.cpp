#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "collatzconjecture.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //MainWindow::spinBox.value();
    collatzconjecture cc(ui->spinBox->value());
    std::string s = "Starting point\nNumber: " + std::to_string(cc.getNumber());
    ui->textEdit->setText(s.c_str());
    while(cc.getNumber() != 1)
    {
        cc.runRule();
        s = "Number: " + std::to_string(cc.getNumber());
        ui->textEdit->append(s.c_str());
    }
    s = "Total Steps: " + std::to_string(cc.getSteps());
    ui->textEdit->append(s.c_str());
}
