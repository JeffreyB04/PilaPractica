//
// Created by jeffr on 14/9/2022.
//

#ifndef PILAPRACTICA_PILA_H
#define PILAPRACTICA_PILA_H


#include "Lista.h"
#include<iostream>

using namespace std;

template<class T>
class Pila {
private:
    Lista<T> *S;
    int n;
public:
    Pila();

    virtual ~Pila();

    int size();

    bool empty() const;

    T *top() /*throw(StackEmpty)*/;

    void push(T *o);

    void pop() /*throw(StackEmpty)*/;

};


#endif //PILAPRACTICA_PILA_H
