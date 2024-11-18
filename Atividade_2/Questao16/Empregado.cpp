#include "Empregado.h"

Empregado::Empregado(string nome, string sobrenome, double salario){
  setNome(nome);
  setSobrenome(sobrenome);
  setSalario(salario);
}

void Empregado::setNome(string nome){
  m_nome = nome;
}
  
string Empregado::getNome() const{
   return m_nome;
 }
  
void Empregado::setSobrenome(string sobrenome){
  m_sobrenome = sobrenome;
}
  
string Empregado::getSobrenome() const{
  return m_sobrenome;
}
  
void Empregado::setSalario(double salario){
  m_salario = (salario > 0 ? salario : 0.0);
}
  
double Empregado::getSalario() const{
  return m_salario;
}
