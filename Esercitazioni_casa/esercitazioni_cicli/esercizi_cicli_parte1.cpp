/*Data una sequenza di numeri in input; al primo zero incontrato, determinare quanti numeri sono stati letti e la loro
somma.(Usare while o do-while)
*/

#include <iostream>
using namespace std;

int main(){
    int numero_input, i = 0, somma = 0;
    do{
        cout<<"Inserisci un numero, digita 0 per smettere di inserire numeri ";
        cin>>numero_input;
        if (numero_input != 0){
            i++;
        }
        somma += numero_input;
    }while(numero_input!=0);

    cout<<"Sono stati letti: "<< i<< " numeri" <<endl;
    cout<<"La somma dei numeri presi in input e'"<< somma<<endl;

    return 0;
}
