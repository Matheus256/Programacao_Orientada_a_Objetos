#include "ExpressoHogwarts.h"

ExpressoHogwarts &ExpressoHogwarts::operator<<(const Bruxo &bruxo){
  if(this->Passageiros.size() >= this->capacidade_maxima){
    std::cout << "Limite de passageiros atingido" << std::endl;
    return *this;
  }
    
  this->Passageiros.push_back(bruxo);
  return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator>>(const Bruxo &bruxo){
  *this >> bruxo.getNome();
  return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator>>(const std::string &nome){
  for(int i = 0; i < this->Passageiros.size(); i++){
    if(this->Passageiros[i].getNome() == nome){
      this->Passageiros.erase(this->Passageiros.begin() + i);
      return *this;
    }
  }
  
  return *this;
}

std::ostream &operator<<(std::ostream &out, const ExpressoHogwarts &expresso){
  if(expresso.Passageiros.size() <= 0){
    out << "O expresso está vazio" << std::endl;
    return out;
  }
  
  out << "Lista de Passageiros:" << std::endl;
  for(const auto &passageiro: expresso.Passageiros){
    out << "  " << passageiro.getNome() << std::endl;
  }
  
  return out;
}
