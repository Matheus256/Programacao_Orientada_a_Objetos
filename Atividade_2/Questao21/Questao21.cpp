#include "Cupom.h"

#include <iostream>

using std::cout, std::endl;

int main(){
  Cupom teste;
  
  //Produto p1{"123", "Controle Xbox", 2, 100.00};
  
  
  teste.addItem("123", "Controle Xbox", 2, 100.00);
  teste.addItem("124", "Xbox One", 5, 1500.00);
  teste.addItem("125", "TV 4K FULL HD 45\"", 2, 2000.00);
  
  teste.imprirmirNota();
  cout << endl;
  
  std::string buscar{"124"};
  cout << "Resultado da busca pelo Id " << buscar << ":" << std::endl;
  cout << teste.getItem(buscar) << endl << endl;
  
  buscar = "128";
  cout << "Resultado da busca pelo Id " << buscar << ":" << std::endl;
  cout << " " << teste.getItem(buscar) << endl << endl;
  
  return 0;
}
