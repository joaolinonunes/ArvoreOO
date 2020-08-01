/* 
 * File:   ArvoreBinaria.h
 * Author: João
 *
 * Created on 1 de Agosto de 2020, 18:20
 */

#ifndef ARVOREBINARIA_H
#define	ARVOREBINARIA_H

#include "No.h" //para usar a class No precisa ser incluida
// A class ArvoreBinaria é a segunda a ser feita pois usaremos a class NO aqui
class ArvoreBinaria{
public:
    ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();
    
    No *raiz;
    void insere (int valor);


};

#endif	/* ARVOREBINARIA_H */

