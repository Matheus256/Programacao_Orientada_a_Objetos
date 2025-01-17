#pragma once

#include <string>

#include "Pessoa.h"

class PessoaJuridica: public Pessoa{
public:
  PessoaJuridica(std::string nome = "Sem nome", std::string CNPJ = "0000000000000", std::string razao = "Sem nome"): Pessoa(nome), CNPJ{CNPJ}, razao_social{razao}{}
  
  void setCNPJ(std::string CNPJ){this->CNPJ = CNPJ;}
  std::string getCNPJ() const{return this->CNPJ;}
  
  void setRazaoSocial(std::string razao_social){this->razao_social = razao_social;}
  std::string getRazaoSocial() const{return this->razao_social;}
  
private:
  std::string CNPJ;
  std::string razao_social;
};
