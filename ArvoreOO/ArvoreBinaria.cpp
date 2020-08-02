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

void ArvoreBinaria::emOrdem(NO *inicio) {
    if (inicio != NULL) {
        this->emOrdem(inicio->esquerda);   
        cout << inicio->valor << " ";
        this->emOrdem(inicio->direita);
    }
}

void ArvoreBinaria::PosOrdem(NO* inicio){
     if (inicio != NULL) {
        this->PosOrdem (inicio->esquerda);   
        this->PosOrdem (inicio->direita);
        cout << inicio->valor << " ";
    }
}
void ArvoreBinaria::PreOrdem(NO* inicio){
     if (inicio != NULL) {
        cout << inicio->valor << " ";
        this->PreOrdem (inicio->esquerda);   
        this->PreOrdem (inicio->direita);
        
    }
}

