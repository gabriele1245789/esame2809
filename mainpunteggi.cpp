#include "lista.h"
#include<fstream>
#include "punteggio.h"
int main(){
    ifstream file;
    file.open("Punteggi.txt");
    int count=0;
    string s;
    List<punteggio> lista;
    while(getline(file,s)){
        count++;
    }
    file.close();
    file.open("Punteggi.txt");
    punteggio *pointers[count];
    for(int i=0;i<count;i++){
        string cognome,nome,circolo,punteggio0,anno;
        double punteggio1;
        int anno1;
        getline(file,cognome,';');
        getline(file,nome,';');
        getline(file,circolo,';');
        getline(file,punteggio0,';');
        getline(file,anno);
        punteggio1=atof(punteggio0.c_str());
        anno1=atoi(anno.c_str());
        pointers[i]=new punteggio(cognome,nome,circolo,punteggio1,anno1);
        if(i==0){
            lista.insert(*pointers[i]);
        }
        else if(i==count-1){
            lista.insertTail(*pointers[i]);
        }
        else{
            lista.insertHead(*pointers[i]);
        }

        
      
    }
    cout<<lista;






    
}
