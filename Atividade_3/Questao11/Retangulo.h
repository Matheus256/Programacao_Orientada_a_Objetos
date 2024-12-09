#pragma once
#include <iostream>

class Retangulo{
public:
  Retangulo(int = 1, int = 1);
  
  void setAltura(int);
  int getAltura() const;
  
  void setLargura(int);
  int getLargura() const;
  
  int calcula_perimetro() const;
  int calcula_area() const;

  void desenho() const;
private:
  int altura;
  int largura;
};
