#include <iostream>

#include "IntegerSet.h"

using std::cout, std::endl;

int main(){
  int arr[6]{91, 2, 7, 7, 12, 14};
  IntegerSet conjunto1;
  IntegerSet conjunto2{arr, 6};
  
  cout << "Conjunto 1 = " << conjunto1 << endl;
  conjunto1 << 2;
  conjunto1 << 4;
  conjunto1 << 8;
  conjunto1 << 82;
  cout << "Conjunto 1 = " << conjunto1 << endl;
  
  conjunto1 >> 4;
  cout << "Conjunto 1 = " << conjunto1 << endl;
  cout << "Conjunto 2 = " << conjunto2 << endl;
  
  IntegerSet conjunto3;
  conjunto3 = conjunto1 | conjunto2;
  cout << "Conjunto 1 União Conjunto 2 = " << conjunto3 << endl;
  
  IntegerSet conjunto4;
  conjunto4 = conjunto1 & conjunto2;
  cout << "Conjunto 1 Intersecção Conjunto 2 = " << conjunto4 << endl;
  
  return 0;
}
