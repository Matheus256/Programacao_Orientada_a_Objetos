#include <iostream>

#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

using std::cout, std::endl;

int main(){
  Gato gatoUm{"Bolinha"};
  //cout << gatoUm;
  
  gatoUm.setRaca("Persa");
  cout << gatoUm;
  
  Cachorro cachorroUm{"Chacal", "Vira Lata"};
  cout << cachorroUm << endl;
  
  cout << cachorroUm.caminha() << endl;
  cout << gatoUm.caminha() << endl << endl;
  
  cout << "Os animais se encontram e emitem os sons: " << gatoUm.mia() << " seguido de " << cachorroUm.late() << endl;
  
  
  return 0;
}
