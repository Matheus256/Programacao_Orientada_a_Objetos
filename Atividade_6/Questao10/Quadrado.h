#pragma once

#include <iostream>

#include "FormaBidimensional.h"

class Quadrado: public FormaBidimensional{
public:
  Quadrado(double lado): FormaBidimensional(4), lado{lado}{}
  
  void desenhar() override{
    std::cout << "+---+" << std::endl;
    std::cout << "|   |" << std::endl;
    std::cout << "+---+" << std::endl;
  }
  
  void calcularArea() override{
    std::cout << "Area = " << lado*lado << std::endl;
  }
  
  void calcularPerimetro() override{
    std::cout << "Perimetro = " << 4*lado << std::endl;
  }
  
private:
  double lado;
};
