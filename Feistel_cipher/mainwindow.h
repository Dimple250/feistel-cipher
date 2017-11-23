#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtWidgets>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
   void createMap();
   void Chiper();
   void createTables();
   void createBlok(int);

private:
    Ui::MainWindow *ui;
    QWidget* MainWidget;
    QTableWidget* tablewidget;
    QMap<QString,int> alphabet;
    QMap<int,QString> NumbersAlphabet;

    QString text;
    QStringList bloks;
    QString key,key2;

    int tableHeight;
    int tableWidth;

    const int n=6;
    const int m=4;

        QString Lo,Ro;
        QString Rk1;
        QString RLo;
        QString R1;
        QString L1;
        QString Result;
public slots:
    void saveCSV();

};

#endif // MAINWINDOW_H
