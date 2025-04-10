/*Creare un programma che:
1)Richieda all'utente tramite cin i seguenti dati:

    Consumo mensile in kWh (kilowattora)
    Fascia oraria principale di utilizzo (1: Diurna, 2: Serale, 3: Notturna)
    Numero di persone nel nucleo familiare
    Se possiede o meno pannelli solari (1: Sì, 0: No)

2)Calcoli il costo totale della bolletta applicando queste regole:
Tariffa singolo KWh( bonus se si usa lo switch)

    Fascia 1 (Diurna): 0.25€/kWh
    Fascia 2 (Serale): 0.22€/kWh
    Fascia 3 (Notturna): 0.18€/kWh

Modificatori di prezzo finale:

    Se il nucleo familiare ha più di 3 persone E il consumo non supera i 300 kWh, applicare uno sconto del 12%
    Se l'utente possiede pannelli solari E il consumo è inferiore a 150 kWh, ridurre il costo totale del 20%
    Se il consumo supera i 350 kWh E NON possiede pannelli solari, applicare una maggiorazione del 15%


Mostrare all'utente tramite cout:

    Il costo totale della bolletta
    Il costo per kWh effettivo (calcolato come totale/consumo)
    Indicazione se ha ottenuto o meno bonus/penali*/

#include <iostream>
using namespace std;

int main(){
    float consumo_mensile_kwh, costototale, consumo_a_kwh;
    int fascia_oraria, familiari;
    bool pannelli;

    cout<<"Inserisci il consumo mensile in kWh: ";
    cin>>consumo_mensile_kwh;
    cout<<"In che fascia oraria viene usata principalmente l'energia? [1]Diurna [2]Serale [3]Notturna ";
    cin>>fascia_oraria;
    cout<<"Inserisci il numero di componenti del nucleo familiare: ";
    cin>>familiari;
    cout<<"La famiglia possiede pannelli solari?"<<endl;
    cin>>pannelli;

    if (pannelli = 1){
        pannelli = true;
    }
    else{
        pannelli = false;
    }

    
    switch (fascia_oraria)
    {
    case 1:
        cout<<"Fascia oraria princpiale: DIURNA"<<endl;
        costototale = consumo_mensile_kwh * 0.25;
        cout<<"Il costo totale risulta di: "<<costototale<<" euro"<<endl; 
        break;
    case 2:
        cout<<"Fascia oraria princpiale: SERALE "<<endl;
        costototale = consumo_mensile_kwh * 0.22;
        cout<<"Il costo totale risulta di: "<<costototale<<" euro"<<endl;
        break;
    case 3:
        cout<<"Fascia oraria princpiale: NOTTURNA"<<endl;
        costototale = consumo_mensile_kwh * 0.18;
        cout<<"Il costo totale risulta di: "<<costototale<<" euro"<<endl;
        break;
    default:
        cout<<"ERRORE: Valore non valido!"<<endl;
        break;
    }

    consumo_a_kwh = costototale/consumo_mensile_kwh;
    cout<<"Il costo a kwh ammonta a: "<<consumo_a_kwh<<" euro"<<endl;
    
    if (familiari > 3 && consumo_mensile_kwh<300){
        costototale = costototale - (costototale * 0.12);
        cout<<"Hai diritto ad un bonus sconto, il nuovo totale ammonta a: "<<costototale<<" euro"<<endl;
    }

    if (pannelli = true && consumo_mensile_kwh <150){
        costototale = costototale - (costototale * 0.20);
        cout<<"Hai diritto ad un bonus sconto, il nuovo totale ammonta a: "<<costototale<<" euro"<<endl;
    }

    if (pannelli == false && consumo_mensile_kwh>350){
        costototale = costototale + (costototale*0.15);
        cout<<"Purtroppo, dovrai pagare un prezzo maggiorato, il nuovo totale ammonta a: "<<costototale<<" euro"<<endl;
    }
    return 0;
}