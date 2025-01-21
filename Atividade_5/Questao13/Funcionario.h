#pragma once

#include <iostream>
#include <string>
#include <format>

#include "PessoaFisica.h"

class Funcionario: public PessoaFisica{

  friend std::ostream &operator<<(std::ostream &, const Funcionario &);

public:
  Funcionario(std::string, std::string = "00000000000", std::string = "0000", double = 0, int = 0, float = 0);
  
  void setMatricula(std::string matricula){this->matricula = matricula;}
  std::string getMatricula() const{return this->matricula;}
  
  void setSalario(double salario){this->salario = salario;}
  double getSalario() const{return this->salario;}
  
  void setCargaHoraria(int carga_horaria){this->carga_horaria_mensal = carga_horaria;}
  int getCargaHoraria() const{return this->carga_horaria_mensal;}
  
  void setHorasTrabalhadas(float);
  float getHorasTrabalhadas() const{return this->horas_trabalhadas;}
  
  double calculaSalarioBruto() const;
  
private:
  std::string matricula;
  double salario;
  int carga_horaria_mensal;
  float horas_trabalhadas;
};
