//
// Created by vagner on 27/06/2026.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), m_contador(0) {
    ui->setupUi(this);

    onTimeout();
    ui->ledContador->setText("0");
    QObject::connect(&m_timer, &QTimer::timeout, this, &MainWindow::onTimeout);
    m_timer.setInterval(1000);
    m_timer.start();

    QObject::connect(ui->pbtContar, &QPushButton::clicked, this, &MainWindow::onPbtContarClicked);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onTimeout() const {
    ui->lblDataHora->setText(m_datetime.currentDateTime().toString("dd/MM/yyyy hh:mm:ss"));
}

void MainWindow::onPbtContarClicked() {
    ui->ledContador->setText(QString::number(++m_contador));
}
