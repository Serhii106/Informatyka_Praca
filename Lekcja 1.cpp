#include <iostream> 
using namespace std;

int main(){
	// deklaracja zmiennych 
	short liczba = 2;
	float zmiennoprzecinkowa = 3.21;
	string tekst = "tekst";
	char znak = 'A';
	bool logiczny = false;
	/*
      cout << "Hello world";
      cout << endl; // koniec lini
      cout << "Liczba: "  << liczba; // wyswietlenie zmiennej
      cout << endl;
      */
      /*
      string wyraz;
      cout << "Podaj jakis wyraz: ";
      cin >> wyraz; 
      cout << "Podales Wyraz: " << wyraz;
      */
      
      string imie;
      cout << "Podaj swoje imie: ";
      cin >> imie;
      cout << "Imie: " <<  imie;
      cout << endl;
      
       short wiek;
      cout << "Podaj wiek ";
      cin >> wiek;
      cout << "Podales wiek "<< wiek;
      cout << endl;
      
      cout << " Witaj " << imie << " Masz " << wiek << " lat! " << endl;
      
    return 0;
}