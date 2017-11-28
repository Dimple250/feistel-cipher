/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QLineEdit *Key1;
    QLabel *label;
    QLabel *label_2;
    QComboBox *Key2_ComboBox;
    QTextEdit *textEdit_2;
    QPushButton *Chiper_Button;
    QPushButton *Dechiper_Button;
    QPushButton *Tableview_Button;
    QPushButton *Save_Button;
    QLabel *label_3;
    QSpinBox *spinBox;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(627, 571);
        QFont font;
        font.setFamily(QStringLiteral("Noto Sans"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral("background-color: #454545;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 331, 191));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(158, 158, 158);\n"
"color: rgb(0, 0, 0);"));
        Key1 = new QLineEdit(centralWidget);
        Key1->setObjectName(QStringLiteral("Key1"));
        Key1->setGeometry(QRect(420, 35, 113, 31));
        Key1->setStyleSheet(QLatin1String("background-color: rgb(158, 158, 158);\n"
"border-color: rgb(186, 186, 186);\n"
"color: rgb(0, 0, 0);"));
        Key1->setMaxLength(4);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 40, 54, 17));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(152, 255, 238);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 99, 54, 17));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(152, 255, 238);"));
        Key2_ComboBox = new QComboBox(centralWidget);
        Key2_ComboBox->setObjectName(QStringLiteral("Key2_ComboBox"));
        Key2_ComboBox->setGeometry(QRect(420, 90, 111, 31));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        Key2_ComboBox->setFont(font2);
        Key2_ComboBox->setStyleSheet(QLatin1String("color: rgb(152, 255, 238);\n"
"selection-color: rgb(255, 130, 41);\n"
""));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 280, 601, 231));
        textEdit_2->setStyleSheet(QLatin1String("background-color: rgb(158, 158, 158);\n"
"color: rgb(0, 0, 0);"));
        Chiper_Button = new QPushButton(centralWidget);
        Chiper_Button->setObjectName(QStringLiteral("Chiper_Button"));
        Chiper_Button->setGeometry(QRect(10, 220, 141, 41));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        Chiper_Button->setFont(font3);
        Chiper_Button->setStyleSheet(QLatin1String("color: rgb(152, 255, 238);\n"
"selection-background-color: rgb(255, 255, 127);\n"
"selection-color: rgb(255, 130, 41);"));
        Dechiper_Button = new QPushButton(centralWidget);
        Dechiper_Button->setObjectName(QStringLiteral("Dechiper_Button"));
        Dechiper_Button->setGeometry(QRect(160, 220, 141, 41));
        Dechiper_Button->setFont(font3);
        Dechiper_Button->setStyleSheet(QLatin1String("color: rgb(152, 255, 238);\n"
""));
        Tableview_Button = new QPushButton(centralWidget);
        Tableview_Button->setObjectName(QStringLiteral("Tableview_Button"));
        Tableview_Button->setGeometry(QRect(310, 220, 141, 41));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        Tableview_Button->setFont(font4);
        Tableview_Button->setStyleSheet(QStringLiteral("color: rgb(152, 255, 238);"));
        Save_Button = new QPushButton(centralWidget);
        Save_Button->setObjectName(QStringLiteral("Save_Button"));
        Save_Button->setGeometry(QRect(460, 220, 141, 41));
        Save_Button->setFont(font3);
        Save_Button->setStyleSheet(QStringLiteral("color: rgb(152, 255, 238);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 160, 191, 17));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(152, 255, 238);"));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(540, 155, 45, 27));
        spinBox->setAutoFillBackground(false);
        spinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox->setWrapping(false);
        spinBox->setProperty("showGroupSeparator", QVariant(false));
        spinBox->setMinimum(1);
        spinBox->setMaximum(2);
        spinBox->setDisplayIntegerBase(10);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 627, 27));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\320\232\320\273\321\216\321\2071", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\273\321\216\321\2072", 0));
        Key2_ComboBox->clear();
        Key2_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "cxvxcvxc", 0)
        );
        Key2_ComboBox->setCurrentText(QApplication::translate("MainWindow", "cxvxcvxc", 0));
        Chiper_Button->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        Dechiper_Button->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        Tableview_Button->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
        Save_Button->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\260\321\203\320\275\320\264\320\276\320\262", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
