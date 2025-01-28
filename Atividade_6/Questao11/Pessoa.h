#pragma once

#include <string>
#include <format>

class Pessoa{
public:
  Pessoa(std::string nome, std::string end = "Sem endereco", std::string mail = "Sem email"): nome{nome}, endereco{end}, email{mail}{}
  
  void setNome(std::string nome){this->nome = nome;}
  std::string getNome() const{return this->nome;}
  
  void setEndereco(std::string endereco){this->endereco = endereco;}
  std::string getEndereco() const{return this->endereco;}
  
  void setEmail(std::string email){this->email = email;}
  std::string getEmail() const{return this->email;}
  
  virtual std::string obterDados() const{
    return format("  Nome: {},\n  Endereço: {},\n  Email: {}\n", nome, endereco, email);
  }
  
protected:
  std::string nome;
  std::string endereco;
  std::string email;
};
