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
    
private:

};

#endif	/* ARVOREBINARIA_H */

