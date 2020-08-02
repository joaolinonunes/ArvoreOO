/* 
 * File:   NO.h
 * Author: João
 *
 * Created on 1 de Agosto de 2020, 21:22
 */

#ifndef NO_H
#define	NO_H
                //Ao criar a classe em .cpp automaticamente se cria .h
class NO {
public: 
    NO(); //metodo
    NO(int valor); //metodo construtor sendo passado valor como parametro
    virtual ~NO();
    int valor;  //variavel 
    NO  *direita,*esquerda; //criando ponteiros em NO
private:

};

#endif	/* NO_H */

