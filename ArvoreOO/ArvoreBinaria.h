/* 
 * File:   ArvoreBinaria.h
 * Author: João
 *
 * Created on 1 de Agosto de 2020, 21:21
 */

#ifndef ARVOREBINARIA_H
#define	ARVOREBINARIA_H

#include "NO.h" //primeiro passo incluir NO.h

class ArvoreBinaria {
public:
    ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();
    
     NO *raiz; //cria um ponteiro em NO
    void insere(int valor); //metodo inserir valor passando parametro
    bool vazio(); //metodo para verificar se raiz é nula
    void PreOrdem(NO *inicio);//metodo pre ordem
    void emOrdem (NO *inicio);//metodo em ordem
    void PosOrdem (NO *inicio);//metodo pos ordem
    int Nivel(int valor);
    int Nivel(NO *inicio, int valor, int nivel);
    int Altura();
    int Altura(NO *inicio);
    int SomatoriaNos(NO *inicio);
    int SomatoriaNos2(NO *inicio);
    NO* noMaior(NO *raiz);
    int Busca (NO *inicio, int valor);
    int pesquiSeque(int A[],int valor);
    int Bolha(int A[]);
    int PesquisaBinaria (int *A,int valor);
private:

};

#endif	/* ARVOREBINARIA_H */

