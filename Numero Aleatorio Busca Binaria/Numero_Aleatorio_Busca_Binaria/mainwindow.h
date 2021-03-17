#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "numero_aleatorio.h"
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_executar_clicked();

    void on_pushButton_clicked();

    void on_pushButton_SScrescente_clicked();

    void on_pushButton_SSdecrescente_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_BBinaria_clicked();

private:
    Ui::MainWindow *ui;
    //ADICIONADO
    giu::Numero_Aleatorio *arrayW;
    giu::Numero_Aleatorio *arraySS;
    giu::Numero_Aleatorio *arrayBB;
    giu::Numero_Aleatorio *arrayO;

};


#endif // MAINWINDOW_H
