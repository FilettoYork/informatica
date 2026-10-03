#include <iostream>
#include <clocale>

using namespace std;

int eta;
float prezzo;

int cprezzo () { //funzione per evitare di dover riscrivere il cout.
    cout << "Il prezzo da pagare è euro " << prezzo << endl;
    return 0;
}

int main () {

setlocale (LC_ALL, "italian");

label1:
cout << "Inserisci l'età dello spettatore: " << endl;
cin >> eta;

if (eta<0) {
cout << "Errore, l'età inserita è errata. Riprovare premendo invio." << endl;
cin.ignore();
cin.get();
goto label1; //così che si possa riprovare senza avviare nuovamente.
} else if (eta <= 5) {
    prezzo = 0;
    cprezzo ();
} else if (eta <= 12) {
    prezzo = 5;
    cprezzo ();
} else if (eta <= 64) {
    prezzo = 9;
    cprezzo ();
} else if (eta >= 65) {
    prezzo = 6.5;
    cprezzo ();
}

return 0;
}