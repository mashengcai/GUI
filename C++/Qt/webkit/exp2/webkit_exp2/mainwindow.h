#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebView>
#include <QLineEdit>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected slots:
    void changeLocation();     // 改变路径
    void setProgress(int);     // 更新进度
    void adjustTitle();        // 更新标题显示
    void finishLoading(bool);  // 加载完成后进行处理

private :
    QWebView *view;
    QLineEdit *locationEdit;
    int progress;
};

#endif // MAINWINDOW_H
