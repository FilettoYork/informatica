#include <iostream>

using namespace std;

int lato1, lato2, lato3;

int main (){
    label1:

    cout << "Inserisci il valore del lato 1: " << endl;
    cin >> lato1;

    if (lato1 < 0) {
        cout << "Errore, il valore inserito e' negativo. Riprovare premendo invio." << endl;
        cin.ignore();
        cin.get();
        goto label1;
    }

    label2: //l'ho fatto ad ogni cin così che non si debba rifare sempre tutto da capo.

    cout << "Inserisci il valore del lato 2: " << endl;
    cin >> lato2;

    if (lato2 < 0) {
        cout << "Errore, il valore inserito e' negativo. Riprovare premendo invio." << endl;
        cin.ignore();
        cin.get();
        goto label2;
    }

    label3:

    cout << "Inserisci il valore del lato 3: " << endl;
    cin >> lato3;

    if (lato3 < 0) {
        cout << "Errore, il valore inserito e' negativo. Riprovare premendo invio." << endl;
        cin.ignore();
        cin.get();
        goto label3;
    }

    if (lato1 < lato2 + lato3 && lato2 < lato1 + lato3 && lato3 < lato1 + lato2) {
        if (lato1 == lato2 && lato2 == lato3) {
            cout << "Il triangolo e' equilatero." << endl;
        } else if (((lato1 == lato2) && lato3 != lato2) || ((lato2 == lato3) && lato1 != lato2) || ((lato1 == lato3) && lato1 != lato3)) {
            cout << "Il triangolo e' isoscele." << endl;
        } else cout << "Il triangolo e' scaleno." << endl;
    } else {
        cout << "Errore, questo non e' un triangolo. Riprovare premendo invio." << endl;
        cin.ignore();
        cin.get();
        goto label1;
    }
    return 0;
}