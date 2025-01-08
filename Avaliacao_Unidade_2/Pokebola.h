#pragma once

#include "Pokemon.h"

class Pokebola{
public:
  Pokebola(): pokemon{nullptr} {}
  
  void setarPokemon(Pokemon *pokemon){this->pokemon = pokemon;}
  Pokemon *getPokemon() const{return this->pokemon;}
  
private:
  Pokemon *pokemon;
};
