#include <iostream>

using namespace std;

int voto;

int main () {
label1:

cout << "Inserisci il voto:" << endl;
cin >> voto;

    if (voto < 0 || voto > 10) {
        cout << "Errore, l'età inserita è errata. Riprovare premendo invio." << endl;
        cin.ignore();
        cin.get();
        goto label1;  
    } else if (voto <= 3) {
         cout << "Giudizio: gravemente insufficiente." << endl;
    } else if (voto == 4) {
         cout << "Giudizio: insufficiente." << endl;
    } else if (voto == 5) {
         cout << "Giudizio: mediocre." << endl;
    } else if (voto == 6) {
         cout << "Giudizio: sufficiente." << endl;
    } else if (voto == 7) {
         cout << "Giudizio: discreto." << endl;
    } else if (voto == 8) {
         cout << "Giudizio: buono." << endl;
    } else if (voto == 9 || voto == 10) {
         cout << "Giudizio: ottimo." << endl;
    }

return 0;
}