#pragma once

#include <iostream>
#include <string>
#include <format>

class Varinha{
public:
  Varinha(std::string = "Sem tipo", std::string = "Sem nucleo", double = 0);
  
  void setMadeira(std::string madeira){this->tipo_madeira = madeira;}
  std::string getMadeira() const{return this->tipo_madeira;}
  
  void setNucleo(std::string nucleo){this->nucleo = nucleo;}
  std::string getNucleo() const{return this->nucleo;}
  
  void setComprimento(double comprimento){this->comprimento = comprimento;}
  double getComprimento() const{return this->comprimento;}
  
  void display() const;
private:
  std::string tipo_madeira;
  std::string nucleo;
  double comprimento; 
};
