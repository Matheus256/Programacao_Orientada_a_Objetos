#pragma once

#include <iostream>
#include <string>
#include <format>

#include "PessoaFisica.h"

class Cliente: public PessoaFisica{

  friend std::ostream &operator<<(std::ostream &, const Cliente &); 

public:
  Cliente(std::string nome = "Sem nome", std::string CPF = "00000000000", std::string telefone = "0000000000", std::string endereco = "Sem endereço"): PessoaFisica(nome, CPF), telefone{telefone}, endereco{endereco}{}
  
  void setTelefone(std::string telefone){this->telefone = telefone;}
  std::string getTelefone() const{return this->telefone;}
  
  void setEndereco(std::string endereco){this->endereco = endereco;}
  std::string getEndereco() const{return this->endereco;}
  
private:
  std::string telefone;
  std::string endereco;
};
