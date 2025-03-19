/*Un'azienda sta cercando un nuovo impiegato. I candidati devono soddisfare determinati requisiti per essere considerati idonei. Scrivi un programma che chieda all'utente di inserire:

    L'età del candidato (un intero).
    Se il candidato ha una laurea (1 se sì, 0 se no).
    Gli anni di esperienza del candidato (un intero).

Il programma deve quindi determinare se il candidato è idoneo in base ai seguenti criteri:

    Il candidato deve avere un'età compresa tra 25 e 35 anni inclusi.
    Il candidato deve avere una laurea o almeno 3 anni di esperienza.

Il programma deve stampare "Candidato idoneo" o "Candidato non idoneo" a seconda dei casi.*/

#include <iostream>
using namespace std;

int main(){
    int eta, esperienza;
    bool laurea;
    cout<<"Inserisci l'eta' del candidato: ";
    cin>>eta;
    cout<<"Inserisci gli anni di esperienza del candidato: "<<endl;
    cin>>esperienza;
    cout<<"Digita 1 se il candidato ha una laurea, 0 se non ne ha una"<<endl;
    cin>>laurea;
    if ((eta >=25 && eta<=35) && (laurea == true || esperienza>3)){
        cout<<"Candidato idoneo"<<endl;
    }
    else{
        cout<<"Candidato non idoneo"<<endl;
    }
}
