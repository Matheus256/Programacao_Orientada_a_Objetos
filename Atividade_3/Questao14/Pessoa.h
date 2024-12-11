#pragma once

#include <iostream>
#include <string>
#include <format>

class Pessoa{
public:
  Pessoa(std::string = "Sem nome", std::string = "00000000000");
  
  void setNome(std::string nome){this->nome = nome;}
  std::string getNome() const{return nome;}
  
  void setCPF(std::string CPF);
  std::string getCPF() const{return CPF;}
  
  void exibir_na_tela() const;
  
private:
  //Método utilitário para validar o CPF
  bool verificaCPF(std::string) const;

  std::string nome;
  std::string CPF;
  bool CPFvalido;
};
