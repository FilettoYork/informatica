#include <iostream>
#include <clocale>

using namespace std;

int giorno;

int main () {
    label1:
    cout << "Inserisci il numero corrispondente al giorno della settimana:" << endl;
    cin >> giorno;

    switch (giorno) {
        case 1:
        cout << "Lunedì, giorno feriale." << endl;
        break;

        case 2:
        cout << "Martedì, giorno feriale." << endl;
        break;

        case 3:
        cout << "Mercoledì, giorno feriale." << endl;
        break;
        
        case 4:
        cout << "Giovedì, giorno feriale." << endl;
        break;

        case 5:
        cout << "Venerdì, giorno feriale." << endl;
        break;

        case 6:
        cout << "Sabato, giorno feriale." << endl;
        break;

        case 7:
        cout << "Domenica, giorno festivo." << endl;
        break;

        default:
        cout << "Errore, riprova premendo il tasto invio." << endl;
        cin.ignore ();
        cin.get ();
        goto label1;
        break;
    }

    return 0;
}
