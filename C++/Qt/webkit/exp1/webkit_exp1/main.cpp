#include <QApplication>
#include <QWebView>
#include <QUrl>
#include <QWebFrame>
/*学习链接：http://shouce.jb51.net/qt-beginning/46.html*/
/**
libqt5webkit5 - Web content engine library for Qt
libqt5webkit5-dbgsym - debug symbols for libqt5webkit5
libqt5webkit5-dev - Web content engine library for Qt - development files
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWebView view;
    view.load(QUrl("http://www.baidu.com"));
    view.show();

    return a.exec();
}
