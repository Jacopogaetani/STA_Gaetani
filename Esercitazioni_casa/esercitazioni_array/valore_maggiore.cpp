/*Dato un vettore di N elementi stampare l'elemento maggiore e il suo indice.*/

#include <iostream>
using namespace std;

int main(){
    int n, max = 0, indice_massimo = 0;
    
    cout<<"Inserisci un numero, diventerà la lunghezza dell'array: ";
    cin>>n;

    int array [n];

    for (int i = 1; i <= n; i++){
        cout<<"Inserisci il "<<i<<" elemento dell'array";
        cin>>array[n];
        if (array[n] > max){
            max = array[n];
            indice_massimo = n - 1;
        }
    }

    cout<<"L'elemento maggiore della lista dell'array è: "<<max<<" che si trova all'indice n. "<< indice_massimo<<endl;



    return 0;
}