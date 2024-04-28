#include <iostream>

int main() {
    int n, k;
    
    std::cout << "Podaj liczbe: ";
    std::cin >> n;
    
    k = 2;
    while (n > 1) {
        while (n % k == 0) {
            std::cout << k << " ";
            n /= k;
        }
        k++;
    }
    
    return 0;
}

