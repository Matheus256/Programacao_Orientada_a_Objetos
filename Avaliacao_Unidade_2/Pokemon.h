#pragma once

#include <iostream>
#include <string>

class Pokemon{
public:
  Pokemon(std::string, std::string, std::string);
  
  std::string getNome(){return this->nome;}
  void emitirSom() const;
private:
  std::string nome;
  std::string tipo;
  std::string som;
};
