/* Esercizio 2
Creare un programma per calcolare il costo di un viaggio che:

1) Richieda all'utente tramite cin i seguenti dati:
   * Distanza da percorrere in chilometri
   * Tipo di veicolo (1: Auto, 2: Moto, 3: Camper)
   * Numero di passeggeri (incluso il conducente)
   * Stagione del viaggio (1: Bassa stagione, 2: Media stagione, 3: Alta stagione)

2) Calcoli il costo totale del viaggio applicando queste regole:
   Costo base per chilometro:
   * Auto: 0.30€/km
   * Moto: 0.20€/km
   * Camper: 0.45€/km

   Modificatori di prezzo finale:
   * Se il numero di passeggeri è maggiore o uguale a 3 E si viaggia in auto, applicare uno sconto del 15%
   * Se il viaggio è in alta stagione E la distanza è maggiore di 300 km, applicare una maggiorazione del 20%
   * Se il viaggio è in bassa stagione E si percorrono meno di 100 km, applicare uno sconto del 10%
   * Se il viaggio è in camper E in media stagione, applicare uno sconto del 5%

3) Mostrare all'utente tramite cout:
   * Il costo totale del viaggio
   * Il costo per chilometro effettivo (calcolato come totale/distanza)
   * Indicazione se ha ottenuto o meno bonus/penali*/

   
#include <iostream>
using namespace std;

int main(){
    float km, prezzo_iniziale, prezzo_finale;
    int veicolo, passeggeri, stagione;

    cout<<"Inserisci la distanza da percorrere in km, se necessario separare la parte intera dalla parte decimale con un punto: ";
    cin>>km;
    cout<<"Inserisci il tipo di veicolo usato, digitando il suo numero corrispondente [1]Auto [2]Moto [3]Camper: ";
    cin>>veicolo;
    cout<<"Inserisci il numero di passeggeri: ";
    cin>>passeggeri;
    cout<<"Inserisci la stagione del viaggio, digitando il suo numero corrispondente [1]Bassa stagione [2]Media stagione [3]Alta stagione: ";
    cin>>stagione;

    switch (veicolo)
    {
    case 1:
        prezzo_iniziale = (0.30 * km);
        cout<<"Il prezzo iniziale e' di "<<prezzo_iniziale<<" euro"<<endl;
        break;    
    case 2: 
        prezzo_iniziale = (0.20 * km);
        cout<<"Il prezzo iniziale e' di "<<prezzo_iniziale<<" euro"<<endl;
        break;
    case 3:
        prezzo_iniziale = (0.45 * km);
        cout<<"Il prezzo iniziale e' di "<<prezzo_iniziale<<" euro"<<endl;
        break;
    default:
        cout<<"ERRORE! VALORE NON VALIDO!"<<endl;
        break;
    }

    if (passeggeri >= 3 && veicolo == 1){
        prezzo_finale = prezzo_iniziale - (prezzo_iniziale*0.15);
        cout<<"Il prezzo finale e' di "<<prezzo_finale<<" euro"<<endl;
    }

    else if (stagione == 3 && km>300){
        prezzo_finale = prezzo_iniziale + (prezzo_iniziale*0.15);
        cout<<"Il prezzo finale e' di "<<prezzo_finale<<" euro"<<endl;
    }

    else if (stagione == 1 && km<100){
        prezzo_finale = prezzo_iniziale - (prezzo_iniziale*0.10);
        cout<<"Il prezzo finale e' di "<<prezzo_finale<<" euro"<<endl;
    }

    else if (veicolo == 3 && stagione == 2){
        prezzo_finale = prezzo_iniziale - (prezzo_iniziale*0.05);
        cout<<"Il prezzo finale e' di "<<prezzo_finale<<" euro"<<endl;
    }
    else{
        prezzo_finale = prezzo_iniziale;

    }

    cout<<"Il prezzo per km effettivo e' di "<<prezzo_finale/km<<" euro"<<endl;
    
    if (prezzo_finale > prezzo_iniziale){
        cout<<"Per colpa di alcune penali, hai ricevuto un malus nel prezzo finale"<<endl;
    }
    else if (prezzo_finale < prezzo_iniziale){
        cout<<"Per merito di alcune agevolazioni, hai ricevuto un bonus nel prezzo finale"<<endl;
    }
    else{
        cout<<"Non hai ricevuto nessun bonus/malus, il prezzo finale rimane "<<prezzo_finale<<endl;
    }

return 0;
}