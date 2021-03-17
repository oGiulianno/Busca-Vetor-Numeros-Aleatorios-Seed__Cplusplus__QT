#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow),
     //ARRAY ADICIONADO PARA FAZER O NEW
      arrayW(0),arraySS(0), arrayBB(0), arrayO(0)
{
    ui->setupUi(this);
    // DESATIVA EDITAR SEMENTE
    ui->lineEdit_semente->setEnabled(false);
    //ui->textEdit_resultado_busca->setEnabled(false);
    // FOCA O CURSOR NO TAMANHO
    ui->lineEdit_tamanho->setFocus();
    setStyleSheet("QPushButton {background-color: #AED6F1; color: black;}");

}

MainWindow::~MainWindow()
{
    if(arrayW) delete arrayW;
    if(arraySS) delete arraySS;
    if(arrayBB) delete arrayBB;
    delete ui;
}

// BOTAO EXECUTAR
void MainWindow::on_pushButton_executar_clicked()
{
    try
    {
        ui->textEdit_SelectionSort->setText("");
        int tamanho = ui->lineEdit_tamanho->text().toInt(); //DIGITAR O TAMANHO
        arrayW = new giu::Numero_Aleatorio(tamanho); //CRIAR O NOVO VETOR
        arraySS = new giu::Numero_Aleatorio(tamanho); //CRIAR O NOVO VETOR
        arrayBB = new giu::Numero_Aleatorio(tamanho); //CRIAR O NOVO VETOR
        ui->lineEdit_semente->setText(QString::number(arrayW->setSemente())); //VALOR ALEATORIO DA SEMENTE
        ui->textEdit_saida->setText(arrayW->getVetor()); //MOSTRA OS VALORES NA TELA
        arrayO = arrayW;

    }catch(QString &erro){
        QMessageBox::information(this,"Erro", erro);
    } catch (std::bad_alloc&){
        QMessageBox::critical(this,"Erro","Não criado");
    }
}


    //BOTAO BUSCAR VETOR ORIGINAL
void MainWindow::on_pushButton_clicked()
{
    try
    {
        int elemento = ui->lineEdit_elemento->text().toInt();
        if(arrayW->BuscaSequencial(elemento) != -1)
        {
            ui->textEdit_resultado_busca->setText("O valor está na posição: "+QString::number(arrayW->BuscaSequencial(elemento)));
        }else{
            ui->textEdit_resultado_busca->setText("O elemento não existe no vetor!");
        }
    }catch(QString &erro){
        QMessageBox::information(this,"Erro", erro);
    } catch (std::bad_alloc&){
        QMessageBox::critical(this,"Erro","Não criado");
    }
}

    //BOTAO SELECTION SORT CRESCENTE
void MainWindow::on_pushButton_SScrescente_clicked()
{
    try
    {
        ui->textEdit_SelectionSort->setText("");
        ui->textEdit_SelectionSort->setText(arraySS->getVetor_SelectioSort_CRESCENTE()); //MOSTRA OS VALORES NA TELA
    }catch(QString &erro){
        QMessageBox::information(this,"Erro", erro);
    } catch (std::bad_alloc&){
        QMessageBox::critical(this,"Erro","Não criado");
    }
}

    //BOTAO SELECTION SORT DECRESCENTE
void MainWindow::on_pushButton_SSdecrescente_clicked()
{
    try
    {
        ui->textEdit_SelectionSort->setText("");;
        ui->textEdit_SelectionSort->setText(arraySS->getVetor_SelectioSort_DECRESCENTE()); //MOSTRA OS VALORES NA TELA
    }catch(QString &erro){
        QMessageBox::information(this,"Erro", erro);
    } catch (std::bad_alloc&){
        QMessageBox::critical(this,"Erro","Não criado");
    }
}

        //BOTAO BUSCA BINARIA RECURSIVA
void MainWindow::on_pushButton_2_clicked()
{
    try
    {
        int elemento = ui->lineEdit_elemento->text().toInt();
        int inicio = 0;
        int fim = ui->lineEdit_tamanho->text().toInt();
        if(arraySS->BuscaBinaria_RECURSIVA(inicio,fim,elemento) != -1)
        {
            ui->textEdit_resultado_busca->setText("O valor está na posição: "+QString::number(arraySS->BuscaBinaria_RECURSIVA(inicio,fim,elemento)));
       }
        else if(arraySS->BuscaBinaria_RECURSIVA_D(inicio,fim,elemento) != -1)
        {
             ui->textEdit_resultado_busca->setText("O valor está na posição: "+QString::number(arraySS->BuscaBinaria_RECURSIVA_D(inicio,fim,elemento)));
        }else if(arraySS->BuscaBinaria_RECURSIVA_D(inicio,fim,elemento) == -1){
            ui->textEdit_resultado_busca->setText("O elemento não existe no vetor!");
        }
    }catch(QString &erro){
        QMessageBox::information(this,"Erro", erro);
    } catch (std::bad_alloc&){
        QMessageBox::critical(this,"Erro","Não criado");
    }
}

    //BOTAO BUSCA BINARIA ITERATIVA
void MainWindow::on_pushButton_BBinaria_clicked()
{
    try
    {
        int elemento = ui->lineEdit_elemento->text().toInt();
        if(arraySS->BuscaBinaria_ITERATIVA(elemento) != -1)
        {
            ui->textEdit_resultado_busca->setText("O valor está na posição: "+QString::number(arraySS->BuscaBinaria_ITERATIVA(elemento)));
        }
        else if(arraySS->BuscaBinaria_ITERATIVA_D(elemento) != -1)
        {
            ui->textEdit_resultado_busca->setText("O valor está na posição: "+QString::number(arraySS->BuscaBinaria_ITERATIVA_D(elemento)));
        }else if(arraySS->BuscaBinaria_ITERATIVA_D(elemento) == -1){
            ui->textEdit_resultado_busca->setText("O elemento não existe no vetor!");
        }
    }catch(QString &erro){
        QMessageBox::information(this,"Erro", erro);
    } catch (std::bad_alloc&){
        QMessageBox::critical(this,"Erro","Não criado");
    }
}
