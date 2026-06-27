//
// Created by vagner on 27/06/2026.
//

#ifndef SAMPLE_QWIDGET_MAINWINDOW_H
#define SAMPLE_QWIDGET_MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>

QT_BEGIN_NAMESPACE

namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;

    int m_contador;

    QTimer m_timer;
    QDateTime m_datetime;

private slots:
    void onTimeout() const;
    void onPbtContarClicked();

};


#endif //SAMPLE_QWIDGET_MAINWINDOW_H
