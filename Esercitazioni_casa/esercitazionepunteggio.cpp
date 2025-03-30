/*Dichiari e inizializzi le seguenti variabili:

    Un numero intero eta
    Un numero decimale altezza
    Un valore booleano studente_universitario
    Una stringa nome

Calcoli un punteggio di "profilo_personale" secondo questi criteri:

    +5 punti se studente universitario
    +3 punti se l'altezza supera 1.70
    +4 punti se l'età è tra 18 e 25 anni

Utilizzare uno switch per classificare i punteggi e memorizzare il valore in una variabile descrittore:

    3: "bassissimo"
    4: "basso"
    5: "medio-basso"
    7: "medio"
    8: "medio-alto"
    9: "alto"
    12: "altissimo"

Prevedere un valore di default "N.D." 
Al termine dell'elaborazione stampare un messaggio " <<nome>> ha ottenuto un punteggio <<descrittore>>" dove nome e e descrittore sono variabili create nei punti precedenti.
*/

#include <iostream>
using namespace std;

int main(){
    int eta, punteggio;
    float altezza;
    bool studente;
    string nome, descrittore;

    cout<<"Inserisci il tuo nome: ";
    cin>>nome;
    cout<<"Inserisci la tua eta': ";
    cin>>eta;
    cout<<"Inserisci la tua altezza, separando i metri dai centimetri con un punto: ";
    cin>>altezza;
    cout<<"Sei uno studente universitario? [1]Si [2]No";
    cin>>studente;

    punteggio = 0;

    if (altezza > 1.70){
        cout<<"+ 3 punti altezza!"<<endl;;
        punteggio += 3;
    }
    else{
        cout<<"Non hai l'altezza' richiesta per ottenere punteggio nella categoria altezza'"<<endl;
    }

    if (eta>18 && eta<25){
        cout<<"+ 4 punti eta'!"<<endl;
       punteggio+=4;
    }
    else{
        cout<<"Non hai l'eta' richiesta per ottenere punteggio nella categoria eta'"<<endl;
    }

    if (studente == 1){
        cout<<"+5 punti universita'";
        punteggio += 5;
    }
    else{
        cout<<"Non frequenti l'universita', non puoi ottenere punteggio nella categoria universita'"<<endl;
    }

    switch (punteggio){
        case 3:
        descrittore = "bassissimo";
        break;
        case 4:
        descrittore = "basso";
        break;
        case 5:
        descrittore = "medio-basso";
        break;
        case 7:
        descrittore = "medio";
        break;
        case 8:
        descrittore = "medio-alto";
        break;
        case 9:
        descrittore = "alto";
        break;
        case 12:
        descrittore = "altissimo";
        break;
        default:
        cout<<"Non definito"<<endl;
        return 0;
    }

    cout<<nome<<" ha ottenuto un punteggio "<<descrittore<<"con "<<punteggio<<" punti"<<endl;
    return 0;
}