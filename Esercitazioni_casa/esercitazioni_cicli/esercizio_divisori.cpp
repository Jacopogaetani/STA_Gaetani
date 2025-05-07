/*Dato in input un numero N stampare a video tutti i suoi divisori.

Es.
input N=6 -> output 2 3 6
input N=10 -> output 2 5 10
input N=20 -> output 2 4 5 10 20*/

#include <iostream>
using namespace std;

int main(){
    int count = 1;
    int num;

    cout<<"Inserisci un numero: ";
    cin>>num;
    cout<<"I divisori di "<<num<<" sono:"<<endl;
    while (count < num){
        
        if (num%count == 0){
            cout<<num/count<<endl;
        }
        count = count + 1;
    }
    return 0;
}
