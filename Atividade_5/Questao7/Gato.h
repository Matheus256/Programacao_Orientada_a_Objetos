#pragma once

#include <iostream>

#include "Animal.h"

class Gato: public Animal{
    
public:
  Gato(std::string nome): Animal(nome){}
  Gato(std::string nome, std::string raca): Animal(nome, raca){}
  
  std::string mia() const {return "Miau";}
};
