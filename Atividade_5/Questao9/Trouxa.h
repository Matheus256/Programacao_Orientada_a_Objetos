#pragma once

#include <iostream>
#include <string>

#include "Humano.h"

class Trouxa: public Humano{
public:
  Trouxa(std::string, std::string = "Sem sexo", int = 0, std::string = "desempregado");
  
  void setProfissao(std::string profissao){this->profissao = profissao;}
  std::string getProfissao() const{return this->profissao;}
  
  void apresentarSe() const;
  
  void trabalhar() const;
  
private:
  std::string profissao;
};
