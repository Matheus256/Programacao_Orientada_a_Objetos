#pragma once

#include <iostream>
#include <string>

#include "Humano.h"

class Trouxa: public Humano{
public:
  Trouxa(std::string nome, std::string cargo = "desempregado"): Humano(nome), profissao{cargo}{}
  
  void setProfissao(std::string profissao){this->profissao = profissao;}
  std::string getProfissao() const{return this->profissao;}
  
  void quemSou() const override{
    std::cout << "Olá, me chamo " << nome << " e sou " << profissao << std::endl; 
  }
  
  void trabalhar() const{
    std::cout << "Trabalha, trabalha, trabalha ..." << std::endl;
  }
  
private:
  std::string profissao;
};
