#include <iostream>
#include <string>

#include "Carro.h"

using std::cout, std::endl, std::string;

int main(){
  Carro possante{"Chevrolet", "Celta", 2010};
  
  //possante.setMarca("Chevrolet");
  //possante.setModelo("Celta");
  
  cout << "Marca do possante: " << possante.getMarca() << endl;
  cout << "Modelo do possante: " << possante.getModelo() << endl;
  cout << "Ano do possante: " << possante.getAno() << endl;
  
  cout << endl << "Todas as informações de uma vez:" << endl;
  cout << possante.toString() << endl;
  
  return 0;
}
