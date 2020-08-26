/* 
 * File:   main.cpp
 * Author: João
 *
 * Created on 1 de Agosto de 2020, 00:00
 */
#include <iostream>
#include <cstdlib>
#include "ArvoreBinaria.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   ArvoreBinaria *Obj1 = new ArvoreBinaria();
 Obj1->insere(5);
 Obj1->insere(1);
 Obj1->insere(3);
 Obj1->insere(6);
 Obj1->insere(4);
 Obj1->insere(2);
 Obj1->insere(7);
 Obj1->insere(8);
//int A[10]={5,3,7,9,2,1,4,6,8,0};
cout<<Obj1->Nivel(2)<<endl;
//cout<<Obj1->Altura();
//cout<<Obj1->SomatoriaNos(Obj1->raiz);
//cout<<Obj1->SomatoriaNos2(Obj1->raiz);
//cout<<Obj1->noMaior(Obj1->raiz)->valor;    
//cout<<Obj1->Busca(Obj1->raiz,6);
//cout<<Obj1->pesquiSeque(A,3);
//cout<<Obj1->PesquisaBinaria(A,5);
    return 0;
}

