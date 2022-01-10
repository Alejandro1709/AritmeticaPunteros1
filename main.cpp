#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int b = 20;
  int *ptrA = &a;
  cout << "La direccion de a es: " << ptrA << endl;
  int *ptrB = &b;
  cout << "La direccion de b es: " << ptrB << endl;

  *ptrA = *ptrA + *ptrB;
  b = (a + *ptrA)/ *ptrB;

  cout << "El valor de a es: " << a << endl;
  cout << "El valor de b es: " << b << endl;
  cout << "El valor de ptrA es: " << ptrA << endl;
  cout << "El valor de ptrB es: " << ptrB << endl;
  return 0;
} 