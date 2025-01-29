#pragma once

#include <iostream>
#include <string>

#include "Humano.h"

class Bruxo: public Humano{
public:
  Bruxo(std::string nome, std::string casa = "Sem casa", std::string feitico = "Sem feitiço"): Humano(nome), casa{casa}, feitico{feitico}{}
  
  void setCasa(std::string casa){this->casa = casa;}
  std::string getCasa() const{return this->casa;}
  
  void setFeitico(std::string feitico){this->feitico = feitico;}
  std::string getFeitico() const{return this->feitico;}
  
  void quemSou() const override{
    std::cout << "Olá, me chamo " << nome << " e sou um bruxo" << std::endl;
  }
  
  void lancarFeitico() const{
    std::cout << "Lançando o feitiço " << feitico << std::endl;
  }

private:
  std::string casa;
  std::string feitico;
};
