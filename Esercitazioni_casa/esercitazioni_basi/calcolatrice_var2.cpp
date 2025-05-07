/*Crea un'applicazione che è in grado di svolgere operazioni aritmetiche.
L'utente inserisce 2 valori: n1 ed n2, poi scegli l'operazione da svolgere:

   VAR1: invece di numeri modificare il programma in modo da usare i seguenti valori per selezionare l'operazione:

    '+' per selezionare addizione
    '-' per selezionare sottrazione
    '*' per selezionare moltiplicazione
    '/' per selezionare divisione*/

    #include <iostream>
    using namespace std;
    int main(){
        float n1, n2, risultato;
        char operazione;
        cout<<"Inserisci il primo numero: ";
        cin>>n1;
        cout<<"Inserisci il secondo numero: ";
        cin>>n2;
        cout<<"Che operazione vuoi svolgere? \n [+]Addizione \n [-]Sottrazione \n [*]Moltiplicazione \n [/]Divisione"<<endl;
        cin>>operazione;
    
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
            cout<<"input non valido, riprova"<<endl;
            break;
        }
    
    
    
    
        return 0;
    }
