#pragma once

#include <iostream>

class Complex{

  friend std::ostream &operator<<(std::ostream &, const Complex &);

public:
  Complex(double real = 0, double imaginaria = 0): parteReal{real}, parteImaginaria{imaginaria}{}
  
  void setParteReal(double valor){this->parteReal = valor;}
  double getParteReal() const{return parteReal;}
  
  void setParteImaginaria(double valor){this->parteImaginaria = valor;}
  double getParteImaginaria() const{return parteImaginaria;}
  
  Complex &operator=(const Complex &); //Sobrecarga extra para fazer atribuições com o operador =
  
  Complex operator+(const Complex &);
  Complex &operator+=(const Complex &);
  
  Complex operator-(const Complex &);
  Complex &operator-=(const Complex &);
  
private:
  double parteReal;
  double parteImaginaria;
};
