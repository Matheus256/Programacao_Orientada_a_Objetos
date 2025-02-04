#include <iostream>

using std::cout, std::endl;

#include "Complex.h"

int main(){
  Complex z1{2, 4}, z2{1,-1};
  cout << z1 << " + " << z2 << " = " << z1 + z2 << endl << endl;
  
  z1 += z1;
  cout << "Após z1 += z1, temos z1 = " << z1 << endl << endl;
  
  z2 -= z1;
  cout << "Após z2 -= z1, temos z2 = " << z2 << endl << endl;

  cout << z2 << " + " << z1 << " = " << z2 + z1 << endl << endl;

  return 0;
}
