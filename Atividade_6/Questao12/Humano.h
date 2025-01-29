#pragma once

#include <iostream>
#include <string>

class Humano{
public:
  Humano(std::string nome): nome{nome}{};
  
  void setNome(std::string nome){this->nome = nome;}
  std::string getNome() const{return this->nome;}
  
  virtual void quemSou() const{
    std::cout << "Olá, me chamo " << nome << " e sou um simples humano" << std::endl;
  }
  
protected:
  std::string nome;
};
