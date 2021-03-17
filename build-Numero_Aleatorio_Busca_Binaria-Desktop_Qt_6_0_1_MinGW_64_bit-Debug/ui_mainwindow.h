/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_SScrescente;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *pushButton_executar;
    QLabel *label_7;
    QLineEdit *lineEdit_elemento;
    QLineEdit *lineEdit_tamanho;
    QLabel *label_8;
    QPushButton *pushButton_SSdecrescente;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QTextEdit *textEdit_SelectionSort;
    QTextEdit *textEdit_saida;
    QLabel *label_6;
    QTextEdit *textEdit_resultado_busca;
    QLineEdit *lineEdit_semente;
    QPushButton *pushButton_BBinaria;
    QPushButton *pushButton_2;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1075, 671);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_SScrescente = new QPushButton(centralwidget);
        pushButton_SScrescente->setObjectName(QString::fromUtf8("pushButton_SScrescente"));
        pushButton_SScrescente->setGeometry(QRect(850, 20, 201, 41));
        QFont font;
        font.setPointSize(16);
        pushButton_SScrescente->setFont(font);
        pushButton_SScrescente->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 184, 255);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:20px;\n"
" border-color: black;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 450, 261, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 184, 255);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:20px;\n"
" border-color: black;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 141, 21));
        label_2->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 360, 161, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_5->setFont(font1);
        pushButton_executar = new QPushButton(centralwidget);
        pushButton_executar->setObjectName(QString::fromUtf8("pushButton_executar"));
        pushButton_executar->setGeometry(QRect(430, 50, 104, 71));
        pushButton_executar->setFont(font);
        pushButton_executar->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 184, 255);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:20px;\n"
" border-color: black;\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 440, 141, 21));
        label_7->setFont(font);
        lineEdit_elemento = new QLineEdit(centralwidget);
        lineEdit_elemento->setObjectName(QString::fromUtf8("lineEdit_elemento"));
        lineEdit_elemento->setGeometry(QRect(630, 400, 211, 31));
        lineEdit_elemento->setFont(font);
        lineEdit_tamanho = new QLineEdit(centralwidget);
        lineEdit_tamanho->setObjectName(QString::fromUtf8("lineEdit_tamanho"));
        lineEdit_tamanho->setGeometry(QRect(210, 50, 211, 31));
        lineEdit_tamanho->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(670, 30, 171, 31));
        label_8->setFont(font1);
        pushButton_SSdecrescente = new QPushButton(centralwidget);
        pushButton_SSdecrescente->setObjectName(QString::fromUtf8("pushButton_SSdecrescente"));
        pushButton_SSdecrescente->setGeometry(QRect(850, 70, 201, 41));
        pushButton_SSdecrescente->setFont(font);
        pushButton_SSdecrescente->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 184, 255);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:20px;\n"
" border-color: black;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 90, 111, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 140, 281, 31));
        label_4->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 371, 21));
        label->setFont(font1);
        textEdit_SelectionSort = new QTextEdit(centralwidget);
        textEdit_SelectionSort->setObjectName(QString::fromUtf8("textEdit_SelectionSort"));
        textEdit_SelectionSort->setGeometry(QRect(670, 130, 381, 171));
        textEdit_SelectionSort->setFont(font);
        textEdit_saida = new QTextEdit(centralwidget);
        textEdit_saida->setObjectName(QString::fromUtf8("textEdit_saida"));
        textEdit_saida->setGeometry(QRect(80, 180, 461, 121));
        textEdit_saida->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 400, 401, 31));
        label_6->setFont(font);
        textEdit_resultado_busca = new QTextEdit(centralwidget);
        textEdit_resultado_busca->setObjectName(QString::fromUtf8("textEdit_resultado_busca"));
        textEdit_resultado_busca->setGeometry(QRect(220, 470, 341, 91));
        textEdit_resultado_busca->setFont(font);
        lineEdit_semente = new QLineEdit(centralwidget);
        lineEdit_semente->setObjectName(QString::fromUtf8("lineEdit_semente"));
        lineEdit_semente->setGeometry(QRect(210, 90, 211, 31));
        lineEdit_semente->setFont(font);
        pushButton_BBinaria = new QPushButton(centralwidget);
        pushButton_BBinaria->setObjectName(QString::fromUtf8("pushButton_BBinaria"));
        pushButton_BBinaria->setGeometry(QRect(580, 500, 261, 41));
        pushButton_BBinaria->setFont(font);
        pushButton_BBinaria->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 184, 255);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:20px;\n"
" border-color: black;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 550, 261, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 184, 255);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:20px;\n"
" border-color: black;"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(560, 30, 16, 311));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 330, 1031, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 20, 31, 31));
        label_9->setFont(font1);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(600, 30, 31, 31));
        label_10->setFont(font1);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 360, 31, 31));
        label_11->setFont(font1);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(400, 360, 541, 21));
        QFont font2;
        font2.setPointSize(14);
        label_12->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1075, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_SScrescente->setText(QCoreApplication::translate("MainWindow", "Ordem Crescente", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Busca Vetor Original", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Tamanho:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Busca", nullptr));
        pushButton_executar->setText(QCoreApplication::translate("MainWindow", "Executar", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Resultado:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Selection Sort", nullptr));
        pushButton_SSdecrescente->setText(QCoreApplication::translate("MainWindow", "Ordem Decrescente", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Semente:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Resultado do vetor Original:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "N\303\272meros Aleatorios em um Vetor", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Digite o valor que deseja buscar no vetor:", nullptr));
        pushButton_BBinaria->setText(QCoreApplication::translate("MainWindow", "Busca Bin\303\241ria Iterativa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Busca Bin\303\241ria Recursiva", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "* Ordene o vetor primeiro para usar a busca Bin\303\241ria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
