#include "Animal.h"

std::ostream &operator<<(std::ostream &out, const Animal& animal){
  out << "Nome " << animal.nome << " e da raça " << animal.raca << std::endl;
  
  return out;
}

Animal::Animal(std::string nome): nome{nome}{
  raca = "Sem raça";
}

Animal::Animal(std::string nome, std::string raca){
  setNome(nome);
  setRaca(raca);
}

std::string Animal::caminha() const{
  return std::format("O animal {} está caminhado", nome);
}

void Animal::setRaca(std::string raca){
  this->raca = raca;
}

void Animal::setNome(std::string nome){
  this->nome = nome;
}
