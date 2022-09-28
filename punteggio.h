#ifndef PUNTEGGIO_H
#define PUNTEGGIO_H
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class punteggio{
    public:
        string cognome,nome,circolo;
        double punti;
        int anno;
        public:

        punteggio(string cognome,string nome,string circolo,double punti,int anno){
            this->cognome=cognome;
            this->nome=nome;
            this->circolo=circolo;
            this->punti=punti;
            this->anno=anno;
        }
        double getPunti(){
            return this->punti;
        }
        string getNome(){
            return this->nome;
        }
        string getCognome(){
            return this->cognome;
        }
        string getCircolo(){
            return this->circolo;
        }
        int getAnno(){
            return this->anno;
        }
        friend ostream& operator <<(ostream& os,punteggio& obj){
            os<<"nome:"<<obj.getNome()<<endl;
            os<<"cognome:"<<obj.getCognome()<<endl;
            os<<"circolo:"<<obj.getCircolo()<<endl;
            os<<"punteggio:"<<obj.getPunti()<<endl;
            os<<"anno di nascita:"<<obj.getPunti()<<endl;
            return os;
        }
            bool operator <= (punteggio& obj){return this->punti <= obj.punti;}

            bool operator >= (punteggio& obj){return this->punti >= obj.punti;}

            bool operator > (punteggio& obj){return this->punti > obj.punti ;}

            bool operator < (punteggio& obj){return this->punti < obj.punti ;}

            bool operator ==(punteggio& obj){return this->punti == obj.punti ;}
            bool operator !=(punteggio& obj){return this->punti != obj.punti ;}
        




};
#endif