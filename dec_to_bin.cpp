#include <iostream>
#include <string>

using namespace std;


string decimalToBinary(int number) {
    if (number == 0)
        return "0";

    string binary = "";
    while (number > 0) {
        binary = to_string(number % 2) + binary;
        number /= 2;
    }
    return binary;
}

int main() {
    int decimalNumber;

    cout << "Podaj liczbe dziesietna: ";
    cin >> decimalNumber;

    string binaryNumber = decimalToBinary(decimalNumber);

    cout << "Liczba w systemie binarnym: " << binaryNumber << endl;

    return 0;
}
