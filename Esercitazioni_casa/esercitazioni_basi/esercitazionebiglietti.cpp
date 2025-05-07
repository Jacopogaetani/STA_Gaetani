/*Esercizio 2
Sviluppare un programma che calcoli l'importo finale di un biglietto per un evento, applicando le seguenti regole di sconto:

Prezzi base:

    Biglietto Standard: 50 €
    Biglietto Ridotto: 35 €

Criteri di sconto:

    Sconto del 20% per studenti universitari
    Sconto del 15% per under 25
    Sconto del 10% per gruppi superiori a 5 persone
    Ulteriore sconto del 5% se si acquistano più di 10 biglietti


Implementare un algoritmo che:

    Richieda in input:
    Tipo di biglietto (standard/ridotto)
    Età dell'acquirente
    Numero di biglietti acquistati

Calcoli gli sconti applicabili e stampi l'importo iniziale e finale(dopo aver applicato gli sconti) del biglietto o dei biglietti
*/

#include <iostream>

using namespace std;

int main(){
    int biglietti, eta, tipobiglietto, costobigliettoscontato, studente, persone;
    float costobiglietto;
    cout<<"Inserisci la tua eta':";
    cin>>eta;
    cout<<"Inserisci 1 se sei uno studente universitario, 2 se non lo sei: ";
    cin>>studente;
    cout<<"Inserisci il numero di persone che parteciperano: ";
    cin>>persone;
    cout<<"Inserisci il numero di biglietti che verranno acquistati: ";
    cin>>biglietti;
    cout<<"Inserisci la tipologia di biglietti da acquistare. [1]Interi [2]Ridotti ";
    cin>>tipobiglietto;


    if (tipobiglietto == 1){
        costobiglietto = biglietti * 50;
    }
    else if (tipobiglietto == 2){
        costobiglietto = biglietti * 35;
    }

    cout<<"Il costo iniziale sara' di "<<costobiglietto<<" euro."<<endl;

    if (studente == 1){
        costobiglietto = costobiglietto - (0.20 * costobiglietto);
        cout<<"Il subtotale del costo, considerando i tuoi studi universitari e' di "<<costobiglietto<<" euro"<<endl;
    }

    if (eta < 25){
        costobiglietto = costobiglietto - (0.15 * costobiglietto);
        cout<<"Il subtotale del costo, considerando la tua eta' under 25 e' di "<<costobiglietto<<" euro"<<endl;

    }
    if (persone > 5){
        costobiglietto = costobiglietto - (0.10 * costobiglietto);
        cout<<"Il subtotale del costo, considerando il numero di persone nella comitiva sara' di "<<costobiglietto<<" euro"<<endl;
        if (biglietti > 10){
            costobiglietto = costobiglietto - (0.05 * costobiglietto);
            cout<<"Il subtotale del costo, considerando il numero di biglietti acquistati sara' di "<<costobiglietto<<" euro"<<endl;
        }
    }

    cout<<"Il costo finale del biglietto e' di "<<costobiglietto<<" euro"<<endl;



    return 0;
}
