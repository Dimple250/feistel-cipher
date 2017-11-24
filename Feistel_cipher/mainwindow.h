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
   void createTable();
   void createBlok(int);

private:
    Ui::MainWindow *ui;

    QWidget* MainWidget;
    QWidget* MainTableWidget;
    QTableWidget* tablewidget;
    QScrollArea *scrollArea;

    QMap<QString,int> alphabet;
    QMap<int,QString> NumbersAlphabet;
    QList<QVBoxLayout*> masstables;

    QString text;
    QStringList bloks;
    QString key,key2;

    int tableHeight;
    int tableWidth;

    int n;
    int m;
    int NumberbOfBlok;

        QString Lo,Ro;
        QString Rk1;
        QString RLo;
        QString R1;
        QString L1;
        QString Result;
public slots:
    void saveCSV();
    void Chiper();
    void Dechiper();
    void createKey2();
    void showTables();

};

#endif // MAINWINDOW_H
