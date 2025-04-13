/*Vengano stampati a video i numeri da 1 a 5*/

#include <iostream>
using namespace std;

int main(){
    //Con le nostre conoscenze, l'esercizio verrebbe risolto così:
    cout<<"Iterazione non funzionale: \n 1 \n 2 \n 3 \n 4 \n 5"<<endl;
    /*Il programma funziona, ma ci sono vari problemi:
        -Non risolve un problema generico (caratteristica degli algoritmi)
        -Se si volessero stampare dei numeri maggiori occorrerebbe tantissimo tempo.
    Per questo esistono dei metodi per risolvere più velocemente esercizi del genere: I CICLI
    
    CICLO: Blocco di codice che contiene istruzioni ripetute fino a che una determinata condizione non viene soddisfatta.
    
    Andiamo ad analizzare la nostra condizione: devono essere stampati tutti i numeri minori e uguali di 5, pertanto si dichiara una variabile (i di iterazione) uguale a 0
    ed ogni volta che il ciclo si ripete va ad aggiungere 1 alla variabile i, fino a che non sarà uguale a 5*/

    int i = 0;
    while (i <= 5){ //Controllo del programma: i è minore o uguale a 5? Se la condizione non è soddisfatta si andranno ad eseguire le istruzioni del ciclo, altrimenti il programma continuerà da dopo le parentesi.
        cout<<"Iterazione con ciclo while n. "<< i<<endl;
        i++; //Il programma aggiunge 1 al contatore i.

    }
    i = 0; //Azzeramento della variabile (era uguale a 5)
    //Esistono diversi modi di costruire un ciclo

    do{
        cout<<"Iterazione con ciclo do while n. "<< i<<endl;
        i++;
    }while(i <= 5);

    //Con il do while prima viene eseguita un'istruzione, successivamente viene analizzata la condizione, lo si usa quando si vuole che almeno una cosa venga stampata a schermo

    for (i = 0; i<=5; i++){
        cout<<"Iterazione con ciclo for n. "<<i<<endl;

    }



    return 0;
}