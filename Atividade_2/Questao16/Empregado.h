#pragma once

#include <string>
using std::string;

class Empregado{
public:
  Empregado(string nome, string sobrenome, double salario);
  
  void setNome(string nome);
  
  string getNome() const;
  
  void setSobrenome(string sobrenome);
  
  string getSobrenome() const;
  
  void setSalario(double salario);
  
  double getSalario() const;
  
private:
  string m_nome;
  string m_sobrenome;
  double m_salario;
};
