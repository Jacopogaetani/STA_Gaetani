/* Una scuola deve effettuare un viaggio di istruzione. Sono noti il n. di studenti, il n. di giorni, il prezzo di ogni giorno complessivo dell'hotel e il costo complessivo del pullman.
Conoscendo il n. di posti per pullman determinare:

     Il n. di pullman necessari
     Il n. di posti che rimangono vuoti
     La quota individuale per il pullman

Sapendo che l’hotel offre una gratuità ogni 15 paganti, calcolare:

     Il n. di gratuità
     La quota individuale per l’hotel al giorno
    La quota individuale per l’hotel per l’intero periodo*/

#include <iostream>
using namespace std;

int main(){

    //Sezione dichiarativa
    int studenti, giorni, sedili, postipullman, npullman, postivuoti, postitotali, alloggigratis, hotelgiorno, hotelperiodo;
    float tothotel, totpullman, resto,postosingolo, costotot;

    //Presa in input dei dati necessari
    cout<<"Quanti studenti parteciperanno al viaggio di istruzione?"<<endl;
    cin>>studenti;
    cout<<"Per quanti giorni saranno in viaggio di istruzione?"<<endl;
    cin>>giorni;
    cout<<"Di quanto sara' il costo giornaliero dell'hotel?"<<endl;
    cin>>tothotel;
    cout<<"Di quanto sara' il costo totale del pullman?"<<endl;
    cin>>totpullman;
    cout<<"Quanti sono i posti disponibili sul pullman?"<<endl;
    cin>>postipullman;

    //Calcolo numero di pullman necessari
    npullman= studenti/postipullman;
    resto = studenti % postipullman;
    if (resto>0){
        //Condizione vera se il resto dellla divisione per il numero di pullman necessari è maggiore di 0.
        npullman = npullman + 1;
        cout<<"In questo caso saranno necessari "<<npullman<<"pullman"<<endl;  
    }
    else{
        cout<<"Saranno necessari "<<npullman<<" pullman"<<endl;
    }

    //Calcolo posti vuoti
    postivuoti = (postipullman * npullman)-studenti;
    cout<<"Sono rimasti "<<postivuoti<<" posti vuoti"<<endl;

    //Calcolo del costo del pullman a studente
    totpullman = npullman * 300;
    postosingolo = totpullman/studenti;
    cout<<"Il costo del pullman per studente sara' di "<<postosingolo<<" euro"<<endl;

    //Calcolo degli studenti che alloggeranno gratuitamente
    alloggigratis = studenti / 15;
    cout<<"Gli studenti ad alloggiare gratuitamente secondo l'offerta dell'hotel saranno "<<alloggigratis<<endl;

    //calcolo del costo dell'hotel per studente a giorno e per l'intero periodo
    hotelgiorno = tothotel / studenti;
    hotelperiodo = hotelgiorno*giorni;
    cout<<"Il costo per studente dell'hotel per l'intero periodo sara' di "<<hotelperiodo<<" euro, ovvero "<<hotelgiorno<<" euro al giorno"<<endl;

    costotot = postosingolo + hotelperiodo;
    cout<<"Un solo studente per la gita paghera' "<<costotot<<" euro"<<endl;
    return 0;
}