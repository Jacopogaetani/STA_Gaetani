#include <iostream>
using namespace std;

int main(){
    /*Crea un programma che chiede in input un numero positivo N. Se il numero è negativo o pari a 0, viene richiesto l'input all'utente.
Una volta inserito il numero N, genera i primi 10 valori della tabellina di N.

Es.
input  N=3
output: 3 6 9 12 15 18 21 24 27 30*/
    int tabellina, num, count;
    count = 0;
   do{
    cout<<"Inserisci un numero:";
    cin>>num;
   }while(num<0);

    while (count < 11){
        cout<<num*count<<endl;
        count =count + 1;
    }
}