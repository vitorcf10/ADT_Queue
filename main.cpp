//Autor: Vitor Caligaris Figueira
//Data: 11/05/2021
//Objetivo: Implementacao do TAD Fila com suas operações primarias e operaçao mostra para mostrar a fila.
#include <iostream>
#include "Fila.h"//Incluir a fila
using namespace std;

void mostra(Fila s){//Procedimento para mostrar um fila atraves dos operadores primarios
  Fila aux;//Fila auxiliar
  int x, y;
  bool a, b;
  aux.cria();//Fila auxiliar criada
  while(s.vazia()==false){//Enquanto a fila principal nao estiver vazia
    x=s.retira(a);//Elemento retirado da fila principal
    aux.insere(x , b);//Adicionado a fila auxiliar
    cout<< x << " ";//Elemento mostrado no console
  }
  //Depois os elementos devem voltar a fila princial
  while(aux.vazia()==false){//Enquanto a fila auxiliar nao estiver vazia
    y=aux.retira(a);//Elemento retirado da fila auxiliar 
    s.insere(y, b);//E colocado na fila principal novamente
  }
}

int main() {//Main para mostrar o funcionamento do TAD Fila
  bool a, b;
  int x, y;
  Fila f;
  f.cria();//Cria f
  for(int i = 1; i<=MAX; i++){//Insira elementos na fila ate ela estar cheia
    f.insere(i, a);
  }
  cout << "Fila Cheia(1 = verdadeiro/ 0 = falso): " << f.cheia() << endl;//Mostre se a fila esta cheia ou nao de acordo com o metodo
  mostra(f);//Mostre a fila f
  cout << endl;
  //Retira 2 elementos da fila
  f.retira(b);
  f.retira(b);
  cout << "Fila Cheia(1 = verdadeiro/ 0 = falso): " << f.cheia() << endl;//Mostre se a fila esta cheia ou nao de acordo com o metodo
  mostra(f);//Mostre a fila f
  cout << endl;
  //Adicione outros 2 elementos
  f.insere(40, a);
  f.insere(7, a);
  cout << "Fila Cheia(1 = verdadeiro/ 0 = falso): " << f.cheia() << endl;//Mostre se a fila esta cheia ou nao de acordo com o metodo
  mostra(f);//Mostre a fila f
  cout << endl;
  for(int i = 1; i<=MAX; i++){//Retire todos os elementos e deixe a fila vazia
    f.retira(a);
  }
  cout << "Fila Vazia(1 = verdadeiro/ 0 = falso): " << f.vazia() << endl;//Confira se a fila esta vazia atraves do metodo 
  mostra(f);//Mostre a fila f vazia
}