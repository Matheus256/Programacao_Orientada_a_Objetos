#include <iostream>
#include "Data.h"

using std::cout, std::endl;

int main(){
  Data data1{02,06,2022};
  Data data2{21,02, 1998};
  
  cout << "Data muito especial: " << data1.toString() << endl;
  
  cout << "Meu aniversário: " << data2.toString() << endl;
  
  data2.setDia(19);
  
  cout << "Data do meu aniversário concertada: " << data2.toString() 
        << endl;
  
  return 0;
}
