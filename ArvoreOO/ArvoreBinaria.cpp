/* 
 * File:   ArvoreBinaria.cpp
 * Author: João
 * 
 * Created on 1 de Agosto de 2020, 21:21
 */

#include "ArvoreBinaria.h"
#include <cstdlib>   //incluir
#include "iostream"   //incluir
#include "No.h"   //incluir
#include <stddef.h>   //incluir
using namespace std;   //incluir

ArvoreBinaria::ArvoreBinaria() {
    this->raiz = NULL;  //raiz recebe nulo
}

ArvoreBinaria::ArvoreBinaria(const ArvoreBinaria& orig) {
}

ArvoreBinaria::~ArvoreBinaria() {
}

bool ArvoreBinaria::vazio() { //metodo para verificar se raiz é iguala a nula
    return this->raiz == NULL;
}

void ArvoreBinaria::insere(int valor){ //metodo para inserir
    NO *tmp = this->raiz; //cria um ponteiro *tmp do tipo NO q recebe esta raiz
    NO *ant = NULL; //cria um ponteiro *ant do tipo NO q recebe Nulo para troca 
                    // de valores.
    
    while (tmp != NULL){ //enquanto tmp for diferente de Nulo
        ant = tmp; //ant recebe o valor de tmp
        if (tmp->valor < valor)//Se o valor inserido for maior q o valor em tmp 
            tmp = tmp->direita;
        else
            tmp = tmp->esquerda;
    }
   if (this->vazio()){//Se o metodo q verifica se raiz é nulavazio for verdade
        this->raiz=new NO(valor);//raiz recebe o valor
    }else //se não
        if(ant->valor < valor){//Se valor q foi inserido for maior q valorDE ant
            ant->direita =new NO(valor);//cria novo NO para direita
        }else{//Se não 
            ant->esquerda =new NO(valor);//cria novo NO para esquerda
        }
}
            //ERD
void ArvoreBinaria::emOrdem(NO *inicio) {
    if (inicio != NULL) {
        this->emOrdem(inicio->esquerda);   
        cout << inicio->valor << " ";
        this->emOrdem(inicio->direita);
    }
}
                //EDR
void ArvoreBinaria::PosOrdem(NO* inicio){
     if (inicio != NULL) {
        this->PosOrdem (inicio->esquerda);   
        this->PosOrdem (inicio->direita);
        cout << inicio->valor << " ";
    }
}
                //RED
void ArvoreBinaria::PreOrdem(NO* inicio){
     if (inicio != NULL) {
        cout << inicio->valor << " ";
        this->PreOrdem (inicio->esquerda);   
        this->PreOrdem (inicio->direita);
        
    }
}
    //metodo para encontrar o nivel de um valor
int ArvoreBinaria::Nivel(int valor) { //recebe o valor inserido como parametro 
 return Nivel (this->raiz, valor, 0);//passa para o metodo Nivel com parametros 
                          //o valor da raiz,o valor inserido e zero para o nivel
}
        // passa para este metodo
int ArvoreBinaria::Nivel(NO *inicio, int valor, int nivel) {
 if (!inicio)//sem inicio a arvore binaria é nula
 return -1;//então retorna -1
 else {//se não
 if (valor == inicio->valor)//se o valor passado for igual ao valor da raiz
 return nivel;//retorna o nivel que no caso é 0
 else {// se não
 ++nivel;//o nivel conta mais um

 if (valor < inicio->valor)//se o valor passado for menor que a raiz busca de forma
 nivel = Nivel (inicio->esquerda, valor, nivel);//recursiva do lado esquerdo
 else if (valor > inicio->valor)//senão se o valor passado for maior que a raiz
 nivel = Nivel (inicio->direita, valor, nivel);//busca de forma recursiva do lado
                                //direito e vai somando o nivel até o valor passado
 }

 return nivel;//depois de encontrar o valor,retorna o nivel
 }
} 

int ArvoreBinaria::Altura() {
 return Altura (this->raiz);
} 

int ArvoreBinaria::Altura(NO *inicio) {
 if (!inicio)
 return -1;
 else {
 int alturaesquerda, alturadireita;
 alturaesquerda = Altura (inicio->esquerda);
 alturadireita = Altura (inicio->direita);

 if (alturaesquerda < alturadireita)
 return alturadireita + 1;
 else
 return alturaesquerda + 1;
 }
}

int ArvoreBinaria::SomatoriaNos(NO *inicio) {
 static int soma=0;

 if (inicio != NULL) {
 soma+=inicio->valor;
 this->SomatoriaNos(inicio->esquerda);
 this->SomatoriaNos(inicio->direita);
 }
 return soma;
}

int ArvoreBinaria::SomatoriaNos2(NO *inicio) {
 int x=0;
 if (inicio != NULL) {
 x=inicio->valor+ this->SomatoriaNos2(inicio->esquerda)+this->SomatoriaNos2(inicio->direita);

 }
 return x;
} 

NO* ArvoreBinaria::noMaior(NO *raiz){
 NO *temp=NULL;
 temp = raiz;
 if(temp->direita== NULL){
 return temp;
 } else{
 return noMaior(raiz->direita);
 }
} 

int ArvoreBinaria::Busca (NO *inicio, int valor) {
 while (inicio != NULL) {
 if (valor == inicio->valor)
 return inicio->valor;
 else if (valor < inicio->valor)
 inicio = inicio->esquerda;
 else
 inicio = inicio->direita;
 }
 return 0;
} 


int ArvoreBinaria::pesquiSeque (int A[],int valor){
    int n = 10;
    for(int i=1;i<n;i++){
        if(A[i]==valor)
            return i;
    }
   
}



int ArvoreBinaria::PesquisaBinaria (int *A,int valor){
 int m,i,N, j, temp;
 int inf = 0;
 N=10;

  for(int i=0;i<N;i++){
    for(int i=0;i<N;i++){
        if (A[i] > A[i+1]){
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;  
        }
    }   
    }
 m = N/2;
 do {
    
    if (valor == A[m]){
        return m;
        inf = 1;
    }else if (valor<A[m])
        --m;
    else
        ++m;
 }while (inf != 1);

}