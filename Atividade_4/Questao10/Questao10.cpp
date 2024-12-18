#include <iostream>
#include "ArrayList.h"

using std::cout, std::endl;

int main(){
  ArrayList al{10};

  al.add(1).add(2).add(10).add(20).add(8);

  al.print();
  
  int valor = 2;
  
  somaArray(al, valor);
  cout << "Array anterior após ter todos os seus valores somados a " << valor << ":\n";
  al.print();
  
  mulArray(al, valor);
  cout << "Array anterior após ter todos os seus valores multiplicados por " << valor << ":\n";
  al.print();
  
  subArray(al, valor);
  cout << "Array anterior após subtrair de todos os seus valores " << valor << ":\n";
  al.print();
  
  divArray(al, valor);
  cout << "Array anterior após dividir todos os seus valores por " << valor << ":\n";
  al.print();
  
  al.remove(122);
  al.print();
  
  al.remove(21).add(2);
  al.print();
  
  al.removeEl(2);
  al.print();
  
  al.remove(3);
  al.print();
  
  cout << al.busca(4);
  
  return 0;
}
