#pragma once

#include <iostream>
#include <string>

using std::string;

class Pessoa{
public:
  Pessoa(string = "Sem nome", string = "00000000000", string = "Inválido");
  
  void setNome(string);
  string getNome() const;
  
  void setCPF(string);
  string getCPF() const;
  
  void setCPFvalido(string);
  string getCPFvalido() const;
  
  void exibir_na_tela() const;
  
private:
  string nome;
  string CPF;
  string CPFvalido;
};
