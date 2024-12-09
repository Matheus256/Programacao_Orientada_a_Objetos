#include "Retangulo.h"

Retangulo::Retangulo(int altura, int largura){
  setAltura(altura);
  setLargura(largura);
}
  
void Retangulo::setAltura(int altura){
  this->altura = (altura < 0 || altura > 20) ? 1 : altura; 
}

int Retangulo::getAltura() const{
  return this->altura;
}

void Retangulo::setLargura(int largura){
  this->largura = (largura < 0 || largura > 20) ? 1 : largura;
}

int Retangulo::getLargura() const{
  return this->largura;
}
  
int Retangulo::calcula_perimetro() const{
  return 2*altura + 2*largura;
}

int Retangulo::calcula_area() const{
  return altura*largura;
}

void Retangulo::desenho() const{
  std::cout << "+";
  for(int i = 0; i < largura; i++)
    std::cout << "-";
  std::cout << "+" << std::endl;
  
  for(int i = 0; i < altura; i++){
    std::cout << "|";
    for(int j = 0; j < largura; j++)
      std::cout << " ";
    std::cout << "|" << std::endl;
  }
  
  std::cout << "+";
  for(int i = 0; i < largura; i++)
    std::cout << "-";
  std::cout << "+" << std::endl;
  
}

