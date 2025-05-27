/*Dato un numero qualsiasi dire se è un numero primo o no. Un numero primo è un numero
divisibile soltanto per se stesso e per 1.
Esempi di numeri primi: 2,3, 5, 17, 31, 101,139
Esempi di numeri non primi: 4, 15, 51, 74, 255*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int divisori = 0;

    cout<<"Inserire un numero: ";
    cin>>n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            divisori++;
        }
    }

    if (divisori > 0) {
        cout<<"Numero non primo";
        return 0;
    }

    else {
        cout<<"Numero primo";
    }

    return 0;
}
