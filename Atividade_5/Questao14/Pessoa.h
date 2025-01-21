#pragma once

#include <iostream>
#include <string>

class Pessoa{
  
  friend std::ostream &operator<<(std::ostream &out, const Pessoa &pessoa){
    out << "Nome: " << pessoa.nome << std::endl;
    return out;
  }
  
public:
  Pessoa(std::string nome = "Sem nome"): nome{nome}{}
  
  void setNome(std::string nome){this->nome = nome;}
  std::string getNome() const{return this->nome;}
  
protected:
  std::string nome;
};
