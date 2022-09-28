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

                Node<T>* getHead() const { return this->head; }

    Node<T>* getTail() const { return this->tail; }
    
    bool isEmpty() const { return (head == nullptr) && (tail == nullptr); }
    
    void insert(T val){ //inserimento lista vuota
        if(this->isEmpty()){
          head = new Node<T>(val,verbose);
          tail = head;
        }

        counter++;
    }

    void insertHead(T val){
        if(this->isEmpty()){
            this->insert(val);
            return;
        }  
        Node<T>* temp = new Node<T>(val,verbose); //creo nodo
        temp->next = head;  //imposto il successivo dell nodo alla vecchia testa
        this->head = temp;  //aggiorno la testa della lista col nuovo nodo
         
        counter++;
    }

    void insertTail(T val){
        if(this->isEmpty()){
            this->insert(val);
            return;
        }
        Node<T>* temp = new Node<T>(val,verbose); //creo nuovo nodo
        tail->next = temp; //imposto il successivo dell'ultimo elemento al nuovo nodo
        tail = temp; //aggiorno la coda
        counter++;
    }
    };

#endif