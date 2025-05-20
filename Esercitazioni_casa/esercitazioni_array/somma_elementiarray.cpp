//dati due array A e B di 5 elementi, creare un array C dove l'i-esimo elemento è la somma dell'i-esimo elemento di A e B

#include <iostream>
using namespace std;

int main(){
    int arr_a[] = {1,2,3,4,5};
    int arr_b[] = {6,7,8,9,10};

    for (int i = 0; i<5;i++){
        cout<<"Somma di "<< arr_a[i]<<" e "<< arr_b[i]<<" = "<<arr_a[i] + arr_b[i]<<endl;
    }
    int somma = 0;


    return 0;
}

