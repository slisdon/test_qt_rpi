#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QString styleButtonActive = "QPushButton {"
                        "border-style: outset;"
                        "border-width: 4px;"
                        "border-radius: 10px;"
                        "border-color: yellow;"
                        "background-color: blue;"
                        "font: bold 20px;"
                        "padding: 6px;"
                        "selection-background-color: yellow;"
                        "}";
    QString styleButtonInactive = "QPushButton {"
                        "border-style: outset;"
                        "border-width: 4px;"
                        "border-radius: 10px;"
                        "border-color: yellow;"
                        "background-color: white;"
                        "font: bold 20px;"
                        "padding: 6px;"
                        "selection-color: yellow;"
                        "selection-background-color: yellow;"
                        "}";

public Q_SLOTS:
    void playTV();
};

#endif // MAINWINDOW_H
