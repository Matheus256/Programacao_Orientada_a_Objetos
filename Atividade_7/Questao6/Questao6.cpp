#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "Array.h"

int main() {
  Array a1{7};  //array de 7 elementos
  Array a2;     //array de 10 elementos

  cout << "Entre com 7 elementos: ";
  
  cin >> a1;    //lendo array 

  cout << "Printando a1: ";
  cout << a1;   //escrevendo array

  if (a1 == a2)
    cout << "a1 e a2 são iguais";

  Array a3{a1};

  a3[5] = 100; //invoca int &operator[](int)

  cout << "a3[5] == " << a3[5] << endl;  //int operator[](int) const

  a2 = a3;

  cout << "a2[5] == " << a2[5] << endl;

  //a2[100] = 50;
  
  Array a4 = a2 + a3;
  cout << "a2 + a3 == " << a4;

  a1 += a3;
  cout << "(a1 += a3) => a1 = " << a1;
  
  return 0;
}
