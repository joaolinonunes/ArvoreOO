/* 
 * File:   NO.cpp
 * Author: João
 * 
 * Created on 1 de Agosto de 2020, 21:22
 */
                
           //Ao criar a classe em .cpp automaticamente se cria o .h

#include "NO.h" //Primeiro inicia-se no arquivo .h q é incluido os cabeçalhos 
               //dos metodos.
#include <cstdlib> //Incluir
#include "iostream" //Incluir
#include <stddef.h> //Incluir

NO::NO() {
    this->direita = this->esquerda = NULL; //informei ao metodo q os espaços 
                                          //reservados para direito e esquerdo
                                         // começão nulos.
}

NO::NO(int valor) { //Passo p metodo construtor valor e nulo para direi e esque 
    this->valor = valor;
    this->direita = this->esquerda = NULL;
}

NO::~NO() {
}

