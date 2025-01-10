#pragma once

#include <string>

#include "Imovel.h"

class ImovelVelho: public Imovel{
public:
  ImovelVelho(std::string endereco, double preco = 0, double desconto = 0): Imovel(endereco, preco), desconto{desconto}{}
  
  void setDesconto(double desconto){this->desconto = desconto;}
  double getDesconto() const{return this->desconto;}
  
  double getPreco() const{return Imovel::getPreco()*(1 - desconto);}
  
private:
  double desconto;
};
