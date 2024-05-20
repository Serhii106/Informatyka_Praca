#include <iostream>
using namespace std;

// Funkcja pomocnicza do sprawdzania, czy liczba jest pierwsza
bool czyPierwsza(int liczba) {
    for (int d = 2; d * d <= liczba; d++) {
        if (liczba % d == 0) return false;
    }
    return liczba > 1;
}

int main() {
    int n;
    cout << "Ile liczb pierwszych chcesz wyswietlic: ";
    cin >> n;

    int lp = 0; // Licznik wygenerowanych liczb pierwszych
    int p = 2;  // Zaczynamy od 2

    cout << "Liczby pierwsze: ";
    while (lp < n) {
        if (czyPierwsza(p)) {
            if (lp > 0) cout << ", ";
            cout << p;
            lp++;
        }
        p++;
    }
    cout << endl;

    return 0;
}
