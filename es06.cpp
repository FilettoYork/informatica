#include <iostream>
#include <clocale>

using namespace std;

setlocale (LC_ALL, "italian");

int n;

int main() {
    cout << "Inserisci un numero:" << endl;
    cin >> n;

    cout << "Il numero " << n << " è "
         << (n % 2 == 0 ? "pari" : "dispari")
         << " e "
         << (n == 0 ? "nullo" : (n > 0 ? "positivo" : "negativo"))
         << endl;

    return 0;
}
