#include <iostream>

using namespace std;

int n1;
int n2;

int main() {
    cout << "Inserisci n1:" << endl;
    cin >> n1;

    cout << "Inserisci n2:" << endl;
    cin >> n2;

    cout << (
        n1 == n2 ? "I numeri sono uguali" :
        (n1 > n2 ? "n1 è il maggiore" : "n2 è il maggiore")
    ) << endl;

    return 0;
}