#include "ContaBanco.h"

ContaBanco::ContaBanco(double saldo){
  //setSaldo(saldo);
  m_saldo = ((saldo < 0) ? 0 : saldo);
}
  
//void ContaBanco::setSaldo(double saldo){
//  m_saldo = ((saldo < 0) ? 0 : saldo);
//}

double ContaBanco::getSaldo() const{
  return m_saldo;
}
  
void ContaBanco::creditar(double credito){
  double novo_saldo = credito + getSaldo();
  
  if(novo_saldo < 0){
    std::cerr << "Erro! Saldo não pode ser negativo." << endl;
    return;
  }
  
  //setSaldo(aux);
  m_saldo = novo_saldo;
}

void ContaBanco::debitar(double debito){
  double novo_saldo = getSaldo() - debito;
  if(novo_saldo < 0){
    std::cerr << "Erro! Saldo insuficiente." << endl;
    return;
  }
  
  //setSaldo(novo_saldo);
  m_saldo = novo_saldo;
}
