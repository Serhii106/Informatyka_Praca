#include <iostream>
using namespace std;
double f(double x) { return x*x - 4; }
double bisection(double a, double b) {
   double c;
   while (b - a > 0.001) {
       c = (a + b) / 2;
       if (f(a) * f(c) < 0) b = c;
       else a = c;
   }
   return (a + b) / 2;
}
int main() {
   cout << bisection(0, 3);
}