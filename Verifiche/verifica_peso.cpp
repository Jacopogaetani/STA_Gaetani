/*Scrivi un programma che chiede all'utente di inserire il proprio peso in chilogrammi e l'altezza in metri. 
Il programma deve quindi calcolare l'indice di massa corporea (BMI) utilizzando la formula: BMI = peso / (altezza * altezza).
 Successivamente, il programma deve classificare il BMI in base alle seguenti categorie:

    Sottopeso: BMI < 18.5
    Normopeso: 18.5 <= BMI < 25
    Sovrappeso: 25 <= BMI < 30
    Obesità: BMI >= 30

Il programma deve stampare a video il BMI calcolato e la relativa classificazione.
*/

#include <iostream>

using namespace std;

int main(){
    float peso, altezza, bmi;
    cout<<"Inserisci il tuo peso corporeo, separando con un punto i kg dai g: ";
    cin>>peso;
    cout<<"Inserisci la tua altezza, separando con un punto i metri dai centimetri: ";
    cin>>altezza;

    bmi = peso / (altezza * altezza);

    cout<<"Il tuo bmi: Indice di massa corporea e' di "<<bmi<<endl;

    if (bmi < 18.5){
        cout<<"Risulti sottopeso"<<endl;
    }
    else if (bmi <= 18.5 && bmi < 25){
        cout<<"Risulti normopeso"<<endl;

    }
    else if (bmi <= 25 && bmi < 30){
        cout<<"Risulti sovrappeso"<<endl;
    }
    else if (bmi >= 30){
        cout<<"Sei in uno stato di obesita', rivolgiti ad un dottore il prima possibile"<<endl;

    }
    else{
        cout<<"Valore non valido, errore"<<endl;
    }

    return 0;
}
