#include "ExpressoHogwarts.h"

std::ostream &operator<<(std::ostream &out, const ExpressoHogwarts &expresso){
  if(expresso.Passageiros.size() <= 0){
    out << "O expresso está vazio" << std::endl;
    return out;
  }
  
  out << "Lista de passageiros:" << std::endl;
  for(const auto passageiro : expresso.Passageiros){
    out << "  " << passageiro->getNome() << std::endl; 
  }
  
  return out;
}

ExpressoHogwarts &ExpressoHogwarts::operator<<(const Bruxo &bruxo){
  if(this->Passageiros.size() >= this->capacidade_maxima){
    std::cout << "Limite de passageiros atingido" << std::endl;
    return *this;
  }
  
  this->Passageiros.push_back(new Bruxo(bruxo));
  return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator<<(const Trouxa &trouxa){
  if(this->Passageiros.size() >= this->capacidade_maxima){
    std::cout << "Limite de passageiros atingido" << std::endl;
    return *this;
  }
  
  this->Passageiros.push_back(new Trouxa(trouxa));
  return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator>>(const Humano &humano){
  *this >> humano.getNome();
  return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator>>(const std::string &nome){
  for(int i = 0; i < this->Passageiros.size(); i++){
    if(this->Passageiros[i]->getNome() == nome){
      delete this->Passageiros[i];
      this->Passageiros.erase(this->Passageiros.begin() + i);
      return *this;
    }
  }
  
  return *this;
}

Humano *ExpressoHogwarts::operator[](int indice) const{
  if(indice < 0 || indice >= this->Passageiros.size()){
     throw std::out_of_range("Indice fora de faixa.");
  }
  
  return this->Passageiros[indice];
}

ExpressoHogwarts::~ExpressoHogwarts(){
  for(int i = 0; i < this->Passageiros.size(); i++)
    delete this->Passageiros[i];
}
