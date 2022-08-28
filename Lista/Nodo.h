//
// Created by Matias & Juan on 8/18/2022.
//
#ifndef NODO_H
#define NODO_H

template<class T>
class Nodo {
private:
    // atributos
    T dato;
    Nodo<T> *siguiente;

public:
    // metodos
    void setDato(T dato){
        this->dato = dato;
    };
    T getDato(){
        return dato;
    };

    Nodo<T> * getSiguiente(){
        return siguiente;
    };
    void setSiguiente(Nodo<T> *siguiente){
        this->siguiente = siguiente;
    };


};






#endif //NODO_H
