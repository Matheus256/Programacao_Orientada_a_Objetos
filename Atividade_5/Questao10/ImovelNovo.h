#pragma once

#include <string>

#include "Imovel.h"

class ImovelNovo: public Imovel{
public:
  ImovelNovo(std::string endereco, double preco = 0, double adicional = 0): Imovel(endereco, preco), adicional{adicional}{};
  
  void setAdicional(double adicional){this->adicional = adicional;}
  double getAdicional() const{return this->adicional;}
  
  double getPreco(){return (Imovel::getPreco())*(1 + adicional);}
  
private:
  double adicional;
};
