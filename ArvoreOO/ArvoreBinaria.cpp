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

bool ArvoreBinaria::vazio() { //metodo para verificar se raiz é nula
    return this->raiz == NULL;
}

void ArvoreBinaria::insere(int valor){ 
    NO *tmp = this->raiz;
    NO *ant = NULL;
    
    while (tmp != NULL){
        ant = tmp;
        if (tmp->valor < valor)
            tmp = tmp->direita;
        else
            tmp = tmp->esquerda;
    }
   if (this->vazio()){
        this->raiz=new NO(valor);
    }else 
        if(ant->valor < valor){
            ant->direita =new NO(valor);
        }else{
            ant->esquerda =new NO(valor);
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

