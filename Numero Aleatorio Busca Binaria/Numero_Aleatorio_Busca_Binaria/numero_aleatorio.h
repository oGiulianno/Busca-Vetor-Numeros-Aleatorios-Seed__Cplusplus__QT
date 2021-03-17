#ifndef NUMERO_ALEATORIO_H
#define NUMERO_ALEATORIO_H

#include <QString>
#include <cstdlib>
#include <ctime>

//INICIO DO NAMESPACE
namespace giu {

//INICIO DA CLASSE
class Numero_Aleatorio {

    //PRIVADO
private:
    int tamanho;
    int elemento;
    unsigned semente;
    long *array_Original;
    long *array_Selection_Sort;
    long *array_Busca_Binaria; // iterativa e recursiva

    //PUBLICO
public:
    Numero_Aleatorio(int tamanho);
    //DESTRUTOR
    ~Numero_Aleatorio() { if(array_Original) delete [] array_Original;
                          if(array_Selection_Sort) delete [] array_Selection_Sort;
                          if(array_Busca_Binaria) delete [] array_Busca_Binaria; }
    int setSemente(){semente = time(0); return semente;}
    int getTamanho() const{return tamanho;}
    void setNumeroAleatorio();
    QString getVetor()const;
    QString getVetor_SelectioSort_CRESCENTE()const;
    QString getVetor_SelectioSort_DECRESCENTE()const;
    int BuscaSequencial(int elemento);
    int BuscaBinaria(int elemento);
    int BuscaBinaria_RECURSIVA(int inicio, int fim, int elemento); // CRESCENTE
    int BuscaBinaria_RECURSIVA_D(int inicio, int fim, int elemento); // DECRESCENTE
    int BuscaBinaria_ITERATIVA(int elemento); // CRESCENTE
    int BuscaBinaria_ITERATIVA_D(int elemento); // DECRESCENTE
    void selectionSort_CRESCENTE()const;
    void selectionSort_DECRESCENTE()const;


}; // FIM CLASSE
} // FIM NAMESPACE

#endif // NUMERO_ALEATORIO_H
