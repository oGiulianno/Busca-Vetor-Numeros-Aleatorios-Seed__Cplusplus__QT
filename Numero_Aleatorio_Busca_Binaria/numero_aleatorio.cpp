#include "numero_aleatorio.h"

//INICIO NAMESPACE
namespace giu{

    //CONSTRUTOR
    Numero_Aleatorio::Numero_Aleatorio(int tamanho):
        tamanho(0),
        semente(0),
        array_Original(nullptr),
        array_Selection_Sort(nullptr),
        array_Busca_Binaria(nullptr)
    {
        if(tamanho <= 0)
            throw QString ("O tamanho do vetor não pode ser <= 0");
        try{
        array_Original = new long[tamanho];
        array_Selection_Sort = new long[tamanho];
        array_Busca_Binaria = new long[tamanho];
        this->tamanho = tamanho;
        setNumeroAleatorio();
        }catch (std::bad_alloc&){
            throw QString("Sem memória");
        }
    }

    //NUMEROS ALEATORIOS
    void Numero_Aleatorio::setNumeroAleatorio(){
        //srand(semente);
        srand(time(NULL));
        for (int pos=0; pos<tamanho; pos++){
            *(array_Original + pos) = 2*(rand()%(RAND_MAX+1))-RAND_MAX;
        }
        array_Selection_Sort = array_Original;
        array_Busca_Binaria = array_Original;
    }

    //BUSCA SEQUENCIAL
    int Numero_Aleatorio::BuscaSequencial(int elemento){
        for(int pos=0; pos<tamanho; pos++)
        {
            if (elemento == array_Original[pos])
            {
                return pos;
            }
        }
        return -1;
    }

    //SELECTION SORT CRESCENTE
    void Numero_Aleatorio::selectionSort_CRESCENTE()const{
        for(int pos=0; pos<tamanho; pos++)
        {
            for(int m=0; m<tamanho; m++)
            {
                if(array_Selection_Sort[pos] < array_Selection_Sort[m])
                {
                    std::swap(array_Selection_Sort[pos],array_Selection_Sort[m]);
                }
            }
        }
    }

    //SELECTION SORT DECRESCENTE
    void Numero_Aleatorio::selectionSort_DECRESCENTE()const{
        for(int pos=0; pos<tamanho; pos++)
        {
            for(int m=0; m<tamanho; m++)
            {
                if(array_Selection_Sort[pos] > array_Selection_Sort[m])
                {
                    std::swap(array_Selection_Sort[m],array_Selection_Sort[pos]);
                }
            }
        }
    }

    //BUSCA BINARIA RECURSIVA CRESCENTE
    int Numero_Aleatorio::BuscaBinaria_RECURSIVA(int inicio, int fim, int elemento){
        if (inicio <= fim)
        {
            int pos = (inicio + fim)/2;
            if (array_Busca_Binaria[pos] == elemento)
            {
                return pos;
            }
            if (array_Busca_Binaria[pos] < elemento)
            {
                return BuscaBinaria_RECURSIVA(pos+1, fim, elemento);
            }
            else if (array_Busca_Binaria[pos] > elemento)
            {
            return BuscaBinaria_RECURSIVA(inicio, pos-1, elemento);
            }
        }
        return -1;
    }

    //BUSCA BINARIA RECURSIVA DECRESCENTE
    int Numero_Aleatorio::BuscaBinaria_RECURSIVA_D(int inicio, int fim, int elemento){
        if (inicio <= fim)
        {
            int pos = (inicio + fim)/2;
            if (array_Busca_Binaria[pos] == elemento)
            {
                return pos;
            }
            if (array_Busca_Binaria[pos] < elemento)
            {
                return BuscaBinaria_RECURSIVA_D(inicio, pos-1, elemento);
            }
            else if (array_Busca_Binaria[pos] > elemento)
            {
            return BuscaBinaria_RECURSIVA_D(pos+1, fim, elemento);
            }
        }
        return -1;
    }

    //BUSCA BINARIA ITERATIVA CRESCENTE
    int Numero_Aleatorio::BuscaBinaria_ITERATIVA(int elemento){
        int inicio = 0;
        int pos = 0;
        int fim = tamanho-1;
        while(inicio <= fim)
        {
           pos = (inicio+fim)/2;
           if(array_Busca_Binaria[pos] == elemento)
           {
               return pos;
           }
           else if(array_Busca_Binaria[pos] > elemento)
           {
               fim = pos-1;
           }
            else if(array_Busca_Binaria[pos] < elemento)
           {
               inicio = pos+1;
           }
        } return -1;
    }

    //BUSCA BINARIA ITERATIVA DECRESCENTE
    int Numero_Aleatorio::BuscaBinaria_ITERATIVA_D(int elemento){
        int inicio = 0;
        int pos = 0;
        int fim = tamanho+1;
        while(inicio <= fim)
        {
           pos = (inicio+fim)/2;
           if(array_Busca_Binaria[pos] == elemento)
           {
               return pos;
           }
           else if(array_Busca_Binaria[pos] < elemento)
           {
               fim = pos-1;
           }
            else if(array_Busca_Binaria[pos] > elemento)
           {
               inicio = pos+1;
           }
        } return -1;
    }

    //ORGANIZAR VALORES
    QString Numero_Aleatorio::getVetor_SelectioSort_CRESCENTE()const{
      QString saida = " { ";
      selectionSort_CRESCENTE();
      for(int pos=0; pos<tamanho; pos++)
      {
          saida += QString::number(*(array_Selection_Sort + pos));
          if(pos<tamanho - 1) saida += " | ";
      }
       saida += " } ";
       return saida;
    }

    //ORGANIZAR VALORES
    QString Numero_Aleatorio::getVetor_SelectioSort_DECRESCENTE()const{
      QString saida = " { ";
      selectionSort_DECRESCENTE();
      for(int pos=0; pos<tamanho; pos++)
      {
          saida += QString::number(*(array_Busca_Binaria + pos));
          if(pos<tamanho - 1) saida += " | ";
      }
       saida += " } ";
       return saida;
    }


    //ORGANIZAR VALORES
    QString Numero_Aleatorio::getVetor()const{
       QString saida = " { ";
       for (int pos=0; pos<tamanho; pos++){
           saida += QString::number(*(array_Original + pos));
           if(pos<tamanho - 1) saida += " | ";
       }
       saida += " } ";
       return saida;
    }

} // FIM NAMESPACE
