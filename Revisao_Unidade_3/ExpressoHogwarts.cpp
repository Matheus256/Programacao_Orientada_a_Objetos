#include "ExpressoHogwarts.h"

std::ostream &operator<<(std::ostream &out, const ExpressoHogwarts &expresso){
  if(expresso.Passageiros.size() <= 0){
    out << "O expresso está vazio" << std::endl;
    return out;
  }
  
  out << "Passageiros no expresso:" << std::endl;
  for(int i = 0; i < expresso.Passageiros.size(); i++)
    out << "  " << expresso.Passageiros[i]->getNome() << std::endl;
  
  return out;
}

ExpressoHogwarts &ExpressoHogwarts::operator<<(const Bruxo &bruxo){
    if(this->Passageiros.size() >= 100){
        std::cout << "Limite de 100 passageiros atingido.";
        return *this;
    }

    this->Passageiros.push_back(new Bruxo(bruxo));
    return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator<<(const Trouxa &trouxa){
    if(this->Passageiros.size() >= 100){
        std::cout << "Limite de 100 passageiros atingido.";
        return *this;
    }

    this->Passageiros.push_back(new Trouxa(trouxa));
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
 
ExpressoHogwarts &ExpressoHogwarts::operator>>(const Pessoa &pessoa){
  *this >> pessoa.getNome();
  return *this;
}

ExpressoHogwarts::~ExpressoHogwarts(){
  for(int i = 0; i < this->Passageiros.size(); i++)
    delete this->Passageiros[i];
}

