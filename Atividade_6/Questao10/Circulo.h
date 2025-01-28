#pragma once

#include <iostream>

#include "FormaBidimensional.h"

class Circulo: public FormaBidimensional{
public:
  Circulo(double r): FormaBidimensional(99999), raio{r}{}
  
  void desenhar() override{
    std::cout << "  _ " << std::endl;
    std::cout << "/   \\" << std::endl;
    std::cout << "\\   /" << std::endl;
    std::cout << "  - " << std::endl;
  }
  
  void calcularArea() override{
    std::cout << "Area = " << 3.14*raio*raio << std::endl;
  }
  
  void calcularPerimetro() override{
    std::cout << "Perimetro = " << 2*3.14*raio << std::endl;
  }
  
private:
  double raio;
};
