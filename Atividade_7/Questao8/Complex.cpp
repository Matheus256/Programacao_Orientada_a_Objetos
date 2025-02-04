#include "Complex.h"

std::ostream &operator<<(std::ostream &out, const Complex &complex){
  out << complex.parteReal << " + " << complex.parteImaginaria << "i";
  
  return out;
}

Complex &Complex::operator=(const Complex &complex){
  this->parteReal = complex.parteReal;
  this->parteImaginaria = complex.parteImaginaria;
  
  return *this;
}

Complex Complex::operator+(const Complex &complex){
  Complex complexSoma;
  complexSoma.parteReal = this->parteReal + complex.parteReal;
  complexSoma.parteImaginaria = this->parteImaginaria + complex.parteImaginaria;
  
  return complexSoma;
}

Complex &Complex::operator+=(const Complex &complex){
  *this = *this + complex;
  
  return *this;
}

Complex Complex::operator-(const Complex &complex){
  Complex complexDiferenca;
  complexDiferenca.parteReal = this->parteReal - complex.parteReal;
  complexDiferenca.parteImaginaria = this->parteImaginaria - complex.parteImaginaria;

  return complexDiferenca;
}

Complex &Complex::operator-=(const Complex &complex){
  *this = *this - complex;
  
  return *this;
}
