#include <iostream>

using namespace std;

int pin;
int otp;

int main () {
    cout << "Inserisci il PIN numerico:" << endl;
    cin >> pin;

    switch (pin) { //ho fatto switch così da non dover fare il confronto con l'if e fare nuove variabili evitabili.
        case 1664:
        cout << "Accesso effettuato, procedi con l'autenticazione e inserisci il codice OTP inviato via SMS:" << endl;
        cin >> otp;

        switch (otp) {
            case 1008:
            cout << "Autenticazione riuscita, benvenuto!" << endl;
            break;

            default:
            cout << "Codice OTP non valido. Accesso negato." << endl;
            break;
        }
        break;

        default:
        cout << "Accesso negato, PIN errato." << endl;
        break;
    } 
    return 0;
}
