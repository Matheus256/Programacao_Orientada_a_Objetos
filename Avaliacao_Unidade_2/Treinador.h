#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Pokebola.h"
#include "Pokemon.h"

class Treinador{
public:
  Treinador(std::string);
  
  void capturar(Pokemon *pokemon);
  void vai(std::string);
private:
  std::string nome;
  std::vector<Pokebola> pokebolas;
};
