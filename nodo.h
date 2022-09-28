#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
#include "punteggio.h"


template<class T>
class Node{
   private:
    T val;
    Node<T>* next;
    bool verbose;
    
    template<typename U> 
    friend class List;   
        public:
            Node(T v, bool _verbose=true) : val(v), next(nullptr), verbose(_verbose) { }

            Node(T v, Node<T>* n, bool _verbose=true) : val(v), next(n), verbose(_verbose) { }
            
            T& getVal(){ return this->val; }

            Node<T>* getNext() const { return this->next; }
            
            friend ostream& operator<<(ostream& out,Node<T>& node){
                if(node.verbose)
                    out << "value = " << node.val;

                return out;
            }
    
};

#endif