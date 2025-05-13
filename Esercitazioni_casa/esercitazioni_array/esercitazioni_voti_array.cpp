/*Crea un programma che chiede in input 5 voti all'utente e li inserisca in un narray. 
Successivamente calcoli e mostri in output la media dei voti inseriti.

N.B. per dichiarare e inizializzare una array vuoto usare la seguente sintassi:

tipo nomeVar[dimensione];


Suggerimento: al momento memorizzare la dimensione di un array in una variabile ed usare quella nei cicli.*/

#include <iostream>
using namespace std;

int main(){
    float voti[5];
    float somma = 0;

    for (int i = 1; i <= 5; i++){
        cout<<"Inserisci il "<<i<<" voto: ";
        cin>>voti[i];
        somma += voti[i];
    }

    cout<<"La media dei voti e': "<<somma/5<<endl;
    return 0;
}