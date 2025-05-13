/*L'array è un tipo di dato COMPLESSO, ovvero è un dato composto da dati PRIMITIVI (non ulteriormente scomponibili)
Per questo è utile per aiutarci a gestire tanti dati  DI UNO STESSO TIPO    */

#include <iostream>
using namespace std;

int main(){

    /*Dichiarazione e inzializzazione di un array nel caso si conosca esclusivamente il numero di elementi:
        tipodato nome [] (Le quadre sono il simbolo dell'array)*/
    int array[0]; //0 è l'indice
    //Vado a dichiarare e inizializzare un array chiamato "array" contenente 0 elementi interi

    /*Dichiarazione e inzializzazione di un array nel caso si conoscano gli elementi contenuti:
        tipodato nome [dato, dato1, dato2...]
    */
   string giorni[] = {"lun", "mar", "mer"};
   //Vado a dichiarare e inizializzare un array di stringhe contenenti i giorni della settimana

   /*Accesso ai singoli dati*/

   int n = 4;
   int numeri_pari[n] = {2,4,6,8,10}; //Supponiamo di avere un array contenente i primi 5 numeri pari

   /*Immaginiamo l'array come un mobile con vari scomparti
        Gli elementi si iniziano a contare da 0
      INDICE VALORE
      0       2  
      1       4
      2       6
      3       8
      4       10
      
      Se si volesse avere il valore di un singolo dato in un array, si va a specificare il suo indice
      tipodato nome[0] andrà a visualizzare il valore del primo (ovvero con indice 0) valore dell'array*/

    cout<<numeri_pari[0];

    //Tutto ciò si può integrare con i cicli, andiamo a stampare in ordine crescente i valori dell'array

    cout<<"Conto in ordine crescente"<<endl;

    for (int i = 0; i <= n; i++){
        cout<<"Iterazione n."<<i<<" "<<numeri_pari[i]<<endl;
    }

    cout<<"Countdown"<<endl;

    for (int c = n; c>=0; c--){
        cout<<"Iterazione n."<<c<<" "<<numeri_pari[c]<<endl;
    }



    



    return 0;
}