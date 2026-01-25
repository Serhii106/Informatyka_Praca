#include <iostream>

using namespace std;

// Funkcja realizująca schemat Hornera
double horner(int n, double a[], double x) {
    double result = a[0];
    for (int i = 1; i <= n; i++) {
        result = result * x + a[i];
    }
    return result;
}

int main() {
    int n;
    double x;

    cout << "Podaj stopien wielomianu: ";
    cin >> n;

    double a[100]; // wspolczynniki

    cout << "Podaj wspolczynniki (od najwyzszej potegi):" << endl;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }

    cout << "Podaj x: ";
    cin >> x;

    double wynik = horner(n, a, x);

    cout << "Wynik: " << wynik << endl;

    return 0;
}
