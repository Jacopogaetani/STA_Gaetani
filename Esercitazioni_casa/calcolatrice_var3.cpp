/*Crea un'applicazione che è in grado di svolgere operazioni aritmetiche.
L'utente inserisce 2 valori: n1 ed n2, poi scegli l'operazione da svolgere:
VAR2: modificare l'input in modo che l'utente digiti in una sol riga l'intera operazione, separando l'operazione dai numeri con uno spazio es. 5 + 10 ->15
usare la capacità di cin per valorizzare più variabili con una sola riga: cin>>v1>>v2>>v3;*/

#include <iostream>
using namespace std;
int main(){
    float n1, n2, risultato;
    char operazione;
    cout<<"Inserisci l'equazione da svolgere(due termini): ";
    cin>>n1>>operazione>>n2;

    switch(operazione){
        case '+':
        risultato = n1 + n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        case '-':
        risultato = n1 - n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        case '*':
        risultato = n1 * n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        case '/':
        risultato = n1 / n2;
        cout<<"Il risultato e' "<<risultato<<endl;
        break;
        default:
        cout<<"Input non valido, riprova"<<endl;
        break;
    }


    return 0;
}