#pragma once

#include <string>

class Imovel{
public:
  Imovel(std::string endereco, double preco = 0): endereco{endereco}, preco{preco}{}
  
  void setEndereco(std::string endereco){this->endereco = endereco;}
  std::string getEndereco() const{return this->endereco;}
  
  void setPreco(double preco){this->preco = preco;}
  double getPreco() const{return this->preco;}
  
private:
  std::string endereco;
  double preco;
};
