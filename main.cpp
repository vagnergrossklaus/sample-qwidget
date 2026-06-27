#include <QApplication>
#include <QLocale>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLocale::setDefault(QLocale(QLocale::Portuguese, QLocale::Brazil));

    app.setFont(QFont("Consolas", 12));

    MainWindow window;
    window.setWindowState(Qt::WindowFullScreen);
    window.show();

    return app.exec();
}
