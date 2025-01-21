#pragma once

#include <string>

#include "Pessoa.h"

class PessoaFisica: public Pessoa{
public:
  PessoaFisica(std::string nome = "Sem nome", std::string CPF = "00000000000"): Pessoa(nome), CPF{CPF}{}
  
  void setCPF(std::string CPF){this->CPF = CPF;}
  std::string getCPF() const{return this->CPF;}
  
private:
  std::string CPF;
};
