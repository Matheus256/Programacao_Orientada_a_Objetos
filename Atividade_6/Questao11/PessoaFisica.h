#pragma once

#include <string>

#include "Pessoa.h"

class PessoaFisica: public Pessoa{
public:
  PessoaFisica(std::string nome, std::string end = "Sem endereco", std::string mail = "Sem email", std::string CPF = "00", std::string nasc = "0/0/0", std::string estado = "Solteiro(a)"): Pessoa(nome, end, mail), CPF{CPF}, data_nascimento{nasc}, estado_civil{estado}{}
  
  void setCPF(std::string CPF){this->CPF = CPF;}
  std::string getCPF() const{return this->CPF;}
  
  void setDataNascimento(std::string data){this->data_nascimento = data;}
  std::string getDataNascimento() const{return this->data_nascimento;}
  
  void setEstadoCivil(std::string estado){this->estado_civil = estado;}
  std::string getEstadoCivil() const{return this->estado_civil;}
  
  std::string obterDados() const override{
    return format("  Nome: {},\n  Endereço: {},\n  Email: {},\n  CPF: {},\n  Nascimento: {},\n  Estado Civil: {}\n", nome, endereco, email, CPF, data_nascimento, estado_civil);
  }
  
private:
  std::string CPF;
  std::string data_nascimento;
  std::string estado_civil;
};
