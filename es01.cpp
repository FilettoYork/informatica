#include <iostream>

using namespace std;

int temp;

int main () {

    cout << "Inserisci la temperatura attuale:" << endl;
    cin >> temp;

    if (temp < 0) {
        cout << "Gelo" << endl;
    } else if (temp <= 14) {
         cout << "Freddo" << endl;
    } else if (temp <= 24) {
         cout << "Mite" << endl;
    } else if (temp <= 34) {
         cout << "Caldo" << endl;
    } else if (temp <= 35) {
         cout << "Caldo torpido" << endl;
    }

    return 0;
}