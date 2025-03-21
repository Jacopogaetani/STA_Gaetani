/*Scrivere un programma che consenta la elaborazione di una ipotetica scheda di pedaggio autostradale.
Il programma deve quindi prevedere la immissione di:

    a) chilometri percorsi
    b) codice tariffa:1. per il Nord, 2. per il Centro, 3. per il Sud

Successivamente viene effettuato il calcolo del pedaggio sulla base della tariffa scelta e cioè:

     0,15€ al km per il Nord
     0,12€ al km per il Centro
    0,10€ al km per il Sud

Al valore ottenuto dovrà essere aggiunto un supplemento di spese in ragione di 0,01€ al km per i primi 100 km e 0,005€ al km per il successivi km percorsi.*/

#include <iostream>
using namespace std;

int main(){
    float km, subtot, totale;
    int tariffa;

    cout<<"Inserisci i km percorsi: ";
    cin>>km;
    cout<<"Inserisci il codice tariffa: \n [1]Nord \n [2]Centro \n [3]Sud"<<endl;
    cin>>tariffa;
    
    if (tariffa == 1){
        subtot = km * 0.15;
    }
    else if (tariffa == 2){
        subtot = km * 0.12;
    }
    else if (tariffa == 3){
        subtot = km * 0.10;
    }
    else{
        cout<<"E' stato inserito un valore non valido"<<endl;
    }

    if (km>100){
        km = km - 100;
        totale = 100 * 0.01 + km * 0.005 + subtot;
        cout<<"Il totale e' "<<totale<<endl;
    }
    else{
        cout<<"Il totale e' "<<subtot<<endl;
    }
    return 0;
}