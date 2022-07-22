#include <iostream>
#include "Fila.h"
using namespace std;

//Definição do TAD Fila

void Fila::cria(){//Metodo para criar uma Fila
  primeiro = 0;//Ajusta a posição do primeiro elemento para 0
  ultimo = 0;//Ajusta a posição do ultimo elemento para 0
  nroElementos = 0;//Ajusta o numero de elementos para 0
}

bool Fila::vazia(){//Metodo para checar se a fila esta vazia
  if(nroElementos == 0){//Se a fila nao tiver elementos
    return true;//Retorne verdadeiro para vazia
  }else{//Se a fila tiver elementos
    return false;//Retorne falso para vazia
  }
}

bool Fila::cheia(){//Metodo para checar se a fila esta cheia
  if(nroElementos == MAX){//Se o numero de elementos for igual ao maximo de elementos
    return true;//Retorne verdadeiro para cheio
  }else{//Caso exista espaco na fila para outros elementos 
    return false;//Retorne falso
  }
}

void Fila::insere(int x, bool deuCerto){//Metodo para inserir elementos na fila
  if(cheia()){//Se a fila estiver cheia
    deuCerto = false;//Nao insira elementos e informe que nao deu certo
  }else{ 
    deuCerto = true;//Informe que a operacao deu certo
    nroElementos++;//Aumenta o numero de elementos
    elementos[ultimo]= x;//Adiciona a fila o elemento x desejado
    if(ultimo == MAX-1){//Fila circular portanto caso chegue no final da fila
      ultimo = 0;//O proximo valor para ultimo se ajusta para 0
    }else{//Caso nao chegue ao final  
      ultimo++;//Aumenta em 1 a posição do ultimo
    }
  }
}

int Fila::retira(bool deuCerto){//Metodo que retira um elemento da fila e retorna o elemento retirado
  int x;//Elemento retornado
  if(vazia()){//Caso a fila esteja vazia
    deuCerto = false;//A operacao nao foi realizada com sucesso
  }else{//Caso haja elementos na fila
    deuCerto = true;//Um elemento foi realmente retirado da fila
    nroElementos--;//O numero de elementos decresce em 1
    x=elementos[primeiro];//x recebe o valor do elemento retirado
    if(primeiro == MAX-1){//Fila circular portanto caso chegue no final da fila
      primeiro = 0;//O proximo valor para primeiro se ajusta para 0
    }else{//Caso nao chegue ao final  
      primeiro++;//Aumenta em 1 a posição do primeiro
    }
  }
  return x;//Retorne o elemento retirado
}

