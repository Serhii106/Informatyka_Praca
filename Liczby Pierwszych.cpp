#include <iostream>
using namespace std;

int main() {
    int n, p = 2;
    cout << "Ile liczb pierwszych chcesz wyswietlic: ";
    cin >> n;

    while (n > 0) {
        bool pierwsza = true;
        for (int d = 2; d * d <= p; d++) {
            if (p % d == 0) {
                pierwsza = false;
                break;
            }
        }
        if (pierwsza) {
            cout << p << " ";
            n--;
        }
        p++;
    }
    cout << endl;

    return 0;
}
