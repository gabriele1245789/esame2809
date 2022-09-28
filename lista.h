#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <string>
#include "nodo.h"
using namespace std;

template<class T>
class List{
   protected: 
    Node<T>* head;
    int counter = 0;
    bool verbose;
    private:
        Node<T>* tail;
        public:
            List(bool _verbose=true) : head(nullptr), tail(nullptr), verbose(_verbose) { }
        
            List(Node<T>* h) : head(h), tail(h) { }

            List(Node<T>* h, Node<T>* t) : head(h), tail(t) { }
    };

#endif