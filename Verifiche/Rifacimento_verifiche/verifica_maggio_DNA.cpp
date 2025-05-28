/* E' data in ingresso una sequenza di DNA composta da N nucleotidi. I nucleotidi sono rappresentati dai caratteri 'a', 't', 'c', 'g'
e devono essere memorizzati in un array. Il programma deve
a) stabilire che non ci siano errori(ovvero caratteri diversi da 'a', 't', 'c', 'g' minuscoli o maiuscoli)
b) contare il numero di a, il numero di t, il numero di c e di g
c) generarare una sequenza complementare della stessa dimensione di quella data in input,
ricordando che nella sequenza complementare ad 'a' corrisponde 't', a 'g' corrisponde 'c', a 't' corrisponde 'a' ed a 'c' corrisponde 'g'.
nel caso di errori si mantiene lo stesso carattere

Esempio di sequenza:
N=11
sequenza: atatxtatggc
errori: 1
numero a: 3
numero t: 4
numero c: 1
numero g: 2
sequenza complementare: tataxataccg*/

#include <iostream>
using namespace std;

int main() {
    int n, errori = 0, c = 0, numero_a = 0, numero_t = 0, numero_c = 0, numero_g = 0;


    cout<<"Inserisci il numero di nucleotidi: ";
    cin>>n;

    char nucleotidi[n];

    //Assegnazione nucleotidi e controlo errori
    for (int i = 0; i < n; i++) {
        cout<<"Nucleotide n. "<<i + 1<<" : ";
        cin>>nucleotidi[i];
        if (!(nucleotidi[i] == 'a' || nucleotidi[i] == 'A' || nucleotidi[i] == 't' || nucleotidi[i] == 'T' ||
            nucleotidi[i] == 'G' || nucleotidi[i] == 'g' || nucleotidi[i] == 'C' || nucleotidi[i] == 'c')) {
            errori+=1;
        }
    }

    cout<<"Ricombinazione genetica: "<<endl;

    //Ricombinazione e conteggio
    for (int c = 0; c < n; c++) {
        if (nucleotidi[c] == 'a' || nucleotidi[c] == 'A') {
            cout<<"t";
            numero_a++;
        }
        if (nucleotidi[c] == 't' || nucleotidi[c] == 't') {
            cout<<"a";
            numero_t++;
        }
        if (nucleotidi[c] == 'G' || nucleotidi[c] == 'g') {
            cout<<"c";
            numero_g++;
        }
        if (nucleotidi[c] == 'C' || nucleotidi[c] == 'c') {
            cout<<"g";
            numero_c++;
        }

        if (!(nucleotidi[c] == 'a' || nucleotidi[c] == 'A' || nucleotidi[c] == 't' || nucleotidi[c] == 'T' ||
            nucleotidi[c] == 'G' || nucleotidi[c] == 'g' || nucleotidi[c] == 'C' || nucleotidi[c] == 'c')) {
            cout<<nucleotidi[c];
        }

    }

    cout<<"\n";


    cout<<"Errori: "<<errori<<endl;

    cout<<"Numero di a: "<<numero_a<<endl;
    cout<<"Numero di t: "<<numero_t<<endl;
    cout<<"Numero di c: "<<numero_c<<endl;
    cout<<"Numero di g: "<<numero_g<<endl;

    return 0;
}

