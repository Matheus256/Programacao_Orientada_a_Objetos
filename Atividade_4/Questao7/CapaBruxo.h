#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <format>

class CapaBruxo{
public:
  CapaBruxo(std::string = "Sem casa", double = 0);
  
  void setTamanho(double tamanho){this->tamanho = tamanho;}
  double getTamanho() const{return this->tamanho;}
  
  void setCasa(std::string);
  std::string getCasa() const{return this->casa;}
  
  std::string getCor() const{return this->cor;}
  
  void display() const;

private:
  double tamanho;
  std::string casa;
  std::string cor;
};
