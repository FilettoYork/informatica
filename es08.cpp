#include <iostream>

using namespace std;

int mese;

int main() {
    label1:
    cout << "Inserisci un numero corrispondente a un mese dell'anno" << endl;
    cin >> mese;

    switch (mese) {
        case 12:
        case 1:
        case 2:
            cout << "Inverno";
            break;

        case 3:
        case 4:
        case 5:
            cout << "Primavera";
            break;

        case 6:
        case 7:
        case 8:
            cout << "Estate";
            break;

        case 9:
        case 10:
        case 11:
            cout << "Autunno";
            break;

        default:
            cout << "Errore: mese non valido, riprova premendo invio." << endl;
            cin.ignore ();
            cin.get ();
            goto label1;
            break;
    }

    return 0;
}
