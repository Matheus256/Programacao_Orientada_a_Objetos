#include <iostream>

using std::cout, std::endl;

#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
 
int main() {
  FormaBidimensional *formas[] = {new Quadrado(5), new Circulo(3), new Triangulo(3,3)};

  for (int i = 0; i < 3; i++) {
    formas[i]->desenhar();
    formas[i]->calcularArea();
    formas[i]->calcularPerimetro();
    delete formas[i];
    cout << endl;
  }

  return 0;
}
