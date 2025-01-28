#pragma once

#include <iostream>

#include "FormaBidimensional.h"

class Triangulo: public FormaBidimensional{
public:
  Triangulo(double base, double altura): FormaBidimensional(3), base{base}, altura{altura}{}
  
  void desenhar() override{
    std::cout << "   .    " << std::endl;
    std::cout << "  / \\  " << std::endl;
    std::cout << " /   \\ " << std::endl;
    std::cout << "/_____\\" << std::endl;
  }
  
  void calcularArea() override{
    std::cout << "Area = " << base*altura/2 << std::endl;
  }
  
  void calcularPerimetro() override{
    std::cout << "Perimetro = " << base << std::endl;
  }
  
private:
  double base;
  double altura;
};
