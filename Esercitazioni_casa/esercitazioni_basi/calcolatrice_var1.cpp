/*Crea un'applicazione che è in grado di svolgere operazioni aritmetiche.
L'utente inserisce 2 valori: n1 ed n2, poi scegli l'operazione da svolgere:

    1 per selezionare addizione
    2 per selezionare sottrazione
    3 per selezionare moltiplicazione
    4 per selezionare divisione*/

#include <iostream>
using namespace std;
int main(){
    float n1, n2, risultato;
    int operazione;
    cout<<"Inserisci il primo numero: ";
    cin>>n1;
    cout<<"Inserisci il secondo numero: ";
    cin>>n2;
    cout<<"Che operazione vuoi svolgere? \n [1]Addizione \n [2]Sottrazione \n [3]Moltiplicazione \n [4]Divisione"<<endl;
    cin>>operazione;

    switch(operazione){
        case 1:
        risultato = n1 + n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        case 2:
        risultato = n1 - n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        case 3:
        risultato = n1 * n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        case 4:
        risultato = n1 / n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        default:
        cout<<"Risultato non valido, riprova"<<endl;
        break;
    }




    return 0;
}
