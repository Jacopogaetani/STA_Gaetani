/*Date in input le vendite di copie di un quotidiano in una settimana, 
calcolare la media giornaliera di copie vendute etrovare il giorno in cui si è registrata la vendita massima*/

#include <iostream>
using namespace std;

int main(){
    string giorno, giorno_migliore;
    int vendite_giornaliere = 0, totale = 0, max = 0;
    float media;

    for (int i = 0; i<7; i++){
        //Determinazione giornata
        switch (i){
            case 0:
            giorno = "Lunedi'";
            break; 
            case 1:
            giorno = "Martedi' ";
            break;
            case 2:
            giorno = "Mercoledi'";
            break;
            case 3:
            giorno = "Giovedi' ";
            break;
            case 4:
            giorno = "Venerdi' ";
            break;
            case 5:
            giorno = "Sabato ";
            break;
            case 6:
            giorno = "Domenica ";
            break;
        }


        cout<<"Inserisci la vendita di giornali di "<<giorno;
        cin>>vendite_giornaliere;

        totale+=vendite_giornaliere;

        if (vendite_giornaliere > max){
            max = vendite_giornaliere;
            giorno_migliore = giorno;
        }
    

    }

    cout<<"Il giorno nel quale si sono verificate piu' vendite e' "<<giorno_migliore<<" con "<<max<<" vendite"<<endl;

    media = (float)totale / 7; //Casting della variabile per ottenere un numero di tipo float 

    cout<<"In media, la media giornaliera di vendite e' di "<<media<<" copie"<<endl;

    return 0;
}
