/*Creare un programma in C++ che risolva il seguente problema.
Tre persone eseguono un lavoro. Ognuna di esse è impiegata per un certo
numero, anche differente, di ore. Conoscendo il compenso complessivo per
il lavoro dividerlo in modo proporzionale (in base al n. di ore) fra i tre lavoratori.
Prima di scrivere il programma, individuare gli input e gli output da restituire*/

#include <iostream>
using namespace std;

int main(){
    //int lavoratori = 3;
    int tot,  oreprimo,  oresecondo,  oreterzo, pagamentorario, oretot;
    cout<<"Inserisci il compenso complessivo della giornata:";
    cin>>tot;
    cout<<"Inserisci le ore di lavoro totali:" ;
    cin>>oretot;
    pagamentorario = tot/oretot;
    cout<<"Il pagamento per un'ora e' di "<<pagamentorario<<" euro"<<endl;

    cout<<"--Inserisci le ore lavorate da ognuno dei tre lavoratori--"<<endl;
    cout<<"Lavoratore 1: ";
    cin>>oreprimo;
    cout<<"Lavoratore 2: ";
    cin>>oresecondo;
    cout<<"Lavoratore 3: ";
    cin>>oreterzo;

    cout<<"Il primo lavoratore ha guadagnato: "<<oreprimo*pagamentorario<<" euro"<<endl;
    cout<<"il secondo lavoratore ha guadagnato: "<<oresecondo*pagamentorario<<" euro"<<endl;
    cout<<"il terzo lavoratore ha guadagnato: "<<oreterzo*pagamentorario<<" euro"<<endl;

    return 0;
}
