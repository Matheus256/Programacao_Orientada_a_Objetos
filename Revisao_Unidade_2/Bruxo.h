#pragma once

#include <iostream>
#include <string>

class Bruxo{
public:
  Bruxo(std::string = "Sem nome", std::string = "Sem Casa");
  
  void setNome(std::string nome){this->nome = nome;}
  std::string getNome() const{return nome;}
  
  void setCasa(std::string casa);
  std::string getCasa() const{return casa;}
  
  void display() const;
  
private:
  std::string nome;
  std::string casa;
};
