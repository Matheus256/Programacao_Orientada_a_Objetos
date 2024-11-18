#pragma once

#include <iostream>
#include <string>
#include <cctype>

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
  
private:
  string m_nome;
  string m_casa;
  string m_feitico;
};
