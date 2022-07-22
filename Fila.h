#ifndef Fila_h
#define Fila_h
#include <iostream>
using namespace std;
 
#define MAX 5
//Cabeçalho do TAD Fila 
class Fila
{
  private:
  //Atributos da Fila
    int elementos[MAX];
    int primeiro;
    int ultimo;
    int nroElementos;
  public:
  //Operações primitivas da Fila
    void cria();         
    void insere(int, bool);
    int retira(bool);
    bool vazia();
    bool cheia();
};

#endif