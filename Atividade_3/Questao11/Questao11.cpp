#include <iostream>

#include "Retangulo.h"

using std::cout, std::endl;

int main(){
  Retangulo ret1{3, 5}, teste;
  
  cout << "Perimetro do retangulo 1: " << ret1.calcula_perimetro() << endl;
  cout << "Area do retangulo 1: " << ret1.calcula_area() << endl << endl;
  
  cout << "Altura e largura do retângulo teste: " << teste.getAltura() << ", " << teste.getLargura() << endl;
  
  ret1.desenho();
  cout << endl;
  
  teste.setAltura(2);
  teste.setLargura(12);
  
  teste.desenho();
  cout << endl;
  
  Retangulo ret2{21, 14};
  ret2.desenho();
  
  
  return 0;
}
