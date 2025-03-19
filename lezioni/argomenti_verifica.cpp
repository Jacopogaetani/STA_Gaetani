//Algoritmo = processo risolutivo di un problema descritto da un insieme finito di azioni che formano una successione ordinata

//Una variabile è un contenitore il quale contenuto può variare, a differenza della costante

//le direttive iniziali indicano al compilatore le librerie che verranno usate nello script
#include <iostream>

using namespace std;

//Funziome main = funzione principale di ogni programma in c++, deve eserre sempre presente perché l'esecuzione inizia con essa

int main() //Le parentesi tonde indicano il segno di riconoscimento di una funzione
{ //Le parentesi graffe racchiudono il blocco di codice



    //Sezione dichiarativa = Tutte le variabili vengono indicate all'inizio come buona norma per ottenere un codice pulito
    int a,b, somma; //TUTTE LE ISTRUZIONI DEVONO TERMINARE CON UN PUNTO E VIRGOLA (;)
    //le variabili si dichiarano inserendo il tipo di dato e successivamente il nome scelto dal programmatore, è buona norma chiamare queste variabili con nomi comprensibili a coloro che esamineranno il codice


    //Sezione eseutiva = Dove vengono scritte le istruzioni che deveono essere eseguite

    //Con l'istruzione cout (console-out) viene stampata a schermo la richiesta per l'utente di inserire il primo numero
    cout<<"Inserire il primo numero: ";

    //Con l'istruzione cin (console-in) viene preso in input il numero digitato in esecuzione dall'utente
    cin>> a;

    cout<<"Inserisci il secondo numero :";
    cin>> b;

    //Assegnamo alla variabile somma il valore dell'addizione dei due dati inseriti dall'utente
    somma = a + b;

    /* Operatori aritmetici in c++:
        + indica l'addizione e può sommare più operandi o concatenare due stringhe
        - indica la sottrazione
        * indica la moltiplicazione
        / indica la divisione
        % fornisce il resto di una divisione
        = assegna alla variabile posta alla sua sinistra un valore

        Tipi di dato:
            INT rappresenta l'insieme dei numeri interi
            FLOAT rappresenta numeri deicmali rappresentabili a 32 bit (singola precisone)
            DOUBLE rappresenta numeri decimali rappresentabili a 64 bit (doppia precisione)
            CHAR rappresenta valori alfa numerici
            BOOL rappresenta dolo due tipi di valore : true (vero) e false (false)
            STRING rappresenta una sequenza di caratteri alfanumerici
    */

    cout<<"La somma tra "<< a << " e " << b <<" e' "<<somma<<endl;


    return 0;




}

