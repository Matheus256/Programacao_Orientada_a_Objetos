#include "Pokemon.h"

Pokemon::Pokemon(std::string nome, std::string tipo, std::string som){
  this->nome = nome;
  this->tipo = tipo;
  this->som = som;
}
  
void Pokemon::emitirSom() const{
  std::cout << som << std::endl;
}
