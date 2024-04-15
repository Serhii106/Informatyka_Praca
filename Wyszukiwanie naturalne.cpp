#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> tablica = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    int szukana;
  //zmiena 
    cout << "Jaka liczbe poszukujesz: ";
    cin >> szukana;

    cout << "Poszukiwana liczba znajduje sie na pozycji: ";
    
    //Poczatkowo zmienna
    for (int i = 0; i < tablica.size(); ++i) {
        if (tablica[i] == szukana) {
            cout << i;
            if (i != tablica.size() - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    return 0;
}

