#include <iostream>
using namespace std;
 
int main()
{
   int wysokosc, szerokosc;
   
   //Wprowadż wysokość
   cout << "Podaj wysokosc: ";
   cin >> wysokosc;
   
   //Wprowadż szerokość 
   cout << "Podaj szerokosc: ";
   cin >> szerokosc;
   
   //Rysowanie prostokąta
   for (int i = 0; i < wysokosc; i++)
   {
   	for (int j = 0; j < szerokosc; j++) {
	   	
	   
	   if (i == 0 || i == wysokosc-1){
	   	cout  << "*";
	   }
	   else {
	   	cout  << " ";
	   }
	   if (j == 0 || j == szerokosc-1){
	   	cout  << "*";
	   }
	   else {
	   	cout  << " ";
	   }
}
	   
	   cout << endl;
      }
      return 0;
   }
   