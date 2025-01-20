#pragma once

#include <iostream>
#include <string>

class Humano{
public:
  Humano(std::string, std::string = "Sem sexo", int = 0);
  
  void setNome(std::string nome){this->nome = nome;}
  std::string getNome() const{return this->nome;}
  
  void setSexo(std::string sexo){this->sexo = sexo;}
  std::string getSexo() const{return this->sexo;}
  
  void setIdade(int idade){this->idade = idade;}
  int getIdade() const{return this->idade;}
  
  void apresentarSe() const;
  
private:
  std::string nome;
  std::string sexo;
  int idade;
};
