#pragma once

#include <string>
#include <format>

#include "Pessoa.h"

class PessoaJuridica: public Pessoa{
public:
  PessoaJuridica(std::string nome, std::string end = "Sem endereco", std::string mail = "Sem email", std::string CNPJ = "000", std::string inscricao = "0/0", std::string razao = "Sem nome"): Pessoa(nome, end, mail), CNPJ{CNPJ}, inscricao_estadual{inscricao}, razao_social{razao}{}

  void setCNPJ(std::string CNPJ){this->CNPJ = CNPJ;}
  std::string getCNPJ() const{return this->CNPJ;}
  
  void setInscricaoEstadual(std::string inscricao){this->inscricao_estadual = inscricao;}
  std::string getInscricaoSocial() const{return this->inscricao_estadual;}
  
  void setRazaoSocial(std::string razao){this->razao_social = razao;}
  std::string getRazaoSocial() const{return this->razao_social;}
  
  std::string obterDados() const override{
    return format("  Nome: {},\n  Endereço: {},\n  Email: {},\n  CNPJ: {},\n  Inscrição Estadual: {},\n  Razao Social: {}\n", nome, endereco, email, CNPJ, inscricao_estadual, razao_social);
  }

private:
  std::string CNPJ;
  std::string inscricao_estadual;
  std::string razao_social;
};
