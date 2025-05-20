/*Leggere in input un numero K e poi una sequenza di numeri reali. Terminare la lettura quando si incontra un valore uguale a 999.
Al termine della lettura restituire quanti numeri erano vicini a K per un valore inferiore a 2(in positivo o negativo)*/

#include <iostream>
using namespace std;

int main(){
    int k, n, numeri_vicini = 0;

    cout<<"Inserisci un numero: ";
    cin>>k;

    do{
        cout<<"Inserisci un altro numero: ";
        cin>>n;
        int differenza = n - k;

        if (differenza < 2 && differenza > -2){
            numeri_vicini += 1;            
        }

    }while(n != 999);

    cout<<"N. di interi vicini a "<<k <<" per un valore inferiore a 2 in negativo o positivo:" << numeri_vicini<<endl;

    return 0;
}