//
// Created by jeffr on 14/9/2022.
//

#include "Pila.h"

template<class T>
int Pila<T>::size() {
    return n;
}

template<class T>
Pila<T>::Pila() {
    this->S = new Lista<T>;
    n = 0;
}

template<class T>
bool Pila<T>::empty() const {
    return n == 0;
}

template<class T>
void Pila<T>::push(T *o) {
    ++n;
    S->agregarInicio(o);
}

template<class T>
T *Pila<T>::top() /*throw(StackEmpty)*/ {
    if (empty())
        cout<<"vacio";
    //throw StackEmpty("Top sobre un stack vacio");
    return S->valorInicio();
}

template<class T>
void Pila<T>::pop() /*throw(StackEmpty)*/ {
    if (empty())
        cout<<"vacio";
    //throw StackEmpty("Top sobre un stack vacio");
    S->borrarInicio();
    n--;
}

template<class T>
Pila<T>::~Pila() {
    delete S;
}