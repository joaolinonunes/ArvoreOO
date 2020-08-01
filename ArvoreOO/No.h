/* 
 * File:   No.h
 * Author: João
 *
 * Created on 1 de Agosto de 2020, 18:10
 */

#ifndef NO_H
#define	NO_H
// O class NO é o primeiro a ser feito, é o que ira substituir o struct
class No{
public:
    No();
    NO (int valor); //construtor
    virtual ~No();
    int valor; //variavel 
    No *direito,*esquerdo; //ponteiros
    
private:    

};



#endif	/* NO_H */

