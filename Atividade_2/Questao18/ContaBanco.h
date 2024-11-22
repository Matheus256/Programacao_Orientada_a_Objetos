#pragma once

#include <iostream>

using std::cout, std::endl;

class ContaBanco{
public:
  ContaBanco(double saldo);
  
  //void setSaldo(double saldo); //Não usado nesse exercício
  double getSaldo() const;
  
  void creditar(double credito);
  void debitar(double debito);
  
private:
  double m_saldo;
};
