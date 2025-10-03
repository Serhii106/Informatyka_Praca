#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int target) {
   int left = 0, right = n - 1;
   while (left <= right) {
       int mid = (left + right) / 2;
       if (arr[mid] == target) return mid;
       else if (arr[mid] < target) left = mid + 1;
       else right = mid - 1;
   }
   return -1;
}
int main() {
   int arr[] = {10, 3, 5, 8, 2, 7};
   int n = sizeof(arr)/sizeof(arr[0]);
   sort(arr, arr + n); 
   int x;
   cout << "Podaj liczbe: ";
   cin >> x;
   int idx = binarySearch(arr, n, x);
   if (idx != -1) cout << "Znaleziono " << idx << endl;
   else cout << "Nie ma\n";
}