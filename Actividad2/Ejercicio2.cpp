#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Ingrese el tamaño de la lista: ";
  cin >> n;

  int arr[n];
  cout << "Ingrese los " << n << " números enteros separados por espacios: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n-1; i++) {
    int min_idx = i;
    for (int j = i+1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }

  cout << "La lista ordenada es: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}