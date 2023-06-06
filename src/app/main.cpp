#include <QApplication>

#include "mainwindow.h"
#include "logutil.h"


int main(int argc, char *argv[])
{
    LogUtil::init();

    std::shared_ptr<spdlog::logger> log = LogUtil::getLogger("app");
    log->info("hello, graver creator!");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
