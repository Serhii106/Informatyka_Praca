#include <iostream>
using namespace std;
 
int main()
{
   int wysokosc, szerokosc;
   
   //Wprowadż wysokość
   cout << "Podaj wysokosc: ";
   cin >> wysokosc;
   
   //Wprowadż szerokość 
   cout << "Podaj szerokosz: ";
   cin >> szerokosc;
   
   //Rysowanie prostokąta
   for (int i = 0; i < wysokosc; i++)
   {
   	for (int j = 0; j < szerokosc;
	   j++) {
	   	cout << "* ";
	   }
	   cout << endl;
      }
      return 0;
   }