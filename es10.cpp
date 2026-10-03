#include <iostream>

using namespace std;

int anno;

int main() {
    cout << "Inserisci l'anno:" << endl;
    cin >> anno;

    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        cout << "L'anno è bisestile" << endl;
    } else {
        cout << "L'anno non è bisestile" << endl;
    }
    
    return 0;
}
