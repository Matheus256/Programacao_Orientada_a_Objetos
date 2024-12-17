#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <format>

#include "Varinha.h"
#include "CapaBruxo.h"

using std::cout, std::endl, std::string;

void para_maiusculo(auto &);

class Bruxo{
public:
  Bruxo(string nome, string casa, string feitico);
  
  void setNome(string nome);
  string getNome() const;
  
  void setCasa(string casa);
  string getCasa() const;
  
  void setFeitico(string feitico);
  string getFeitico() const;
  
  void lancarFeitico() const;
  void display() const;
  
  void colocarCapa(CapaBruxo *capa){this->capa = capa;}
  void retirarCapa(){capa = nullptr;}
  
  void pegarVarinha(Varinha *varinha){this->varinha = varinha;}
  void soltarVarinha(){varinha = nullptr;}
  
private:
  string m_nome;
  string m_casa;
  string m_feitico;
  Varinha *varinha;
  CapaBruxo *capa;
};
