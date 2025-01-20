#pragma once

#include <iostream>
#include <string>

#include "Humano.h"

class Bruxo: public Humano{
public:
  Bruxo(std::string, std::string = "Sem sexo", int = 0, std::string = "Sem casa", std::string = "Sem feitiço");
  
  void setCasa(std::string casa){this->casa = casa;}
  std::string getCasa() const{return this->casa;}
  
  void setFeitico(std::string feitico){this->feitico = feitico;}
  std::string getFeitico() const{return this->feitico;}
  
  void apresentarSe() const;
  
  void lancarFeitico() const;

private:
  std::string casa;
  std::string feitico;
};
