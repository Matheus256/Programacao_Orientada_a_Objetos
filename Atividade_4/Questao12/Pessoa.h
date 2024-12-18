#pragma once

#include <iostream>

class Pessoa{
public:
  
  Pessoa(){}

  Pessoa(std::string nom, int idad, double altur): nome{nom}, idade{idad}, altura{altur}{}
  
  void setNome(std::string nome){this->nome = nome;} 
  std::string getNome() const{return nome;}
  
  void setIdade(int idade){this->idade = idade;}
  int getIdade() const{return idade;}
  
  void setAltura(double altura){this->altura = altura;}
  double getAltura() const{return altura;}
  
private:
  std::string nome;
  int idade;
  double altura;
};
