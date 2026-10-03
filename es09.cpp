#include <iostream>

using namespace std;

double n1;
double n2;
char op;


int main() {
    cout << "Inserisci il primo numero:" << endl;
    cin >> n1;

    cout << "Inserisci l'operatore (+, -, *, /):" << endl;
    cin >> op;

    cout << "Inserisci il secondo numero:" << endl;
    cin >> n2;

    switch (op) {
        case '+':
            cout << "Risultato: " << n1 + n2 << endl;
            break;

        case '-':
            cout << "Risultato: " << n1 - n2 << endl;
            break;

        case '*':
            cout << "Risultato: " << n1 * n2 << endl;
            break;

        case '/':
            if (n2 == 0)
                cout << "Errore: divisione per zero, premi invio per riprovare." << endl;
                cin.ignore ();
                cin.get ();
                goto label1;
            else
                cout << "Risultato: " << n1 / n2 << endl;
            break;

        default:
            cout << "Operatore non valido, premi invio per riprovare." << endl;
            cin.ignore ();
            cin.get ();
            goto label1;
            break;
    }

    return 0;
}
