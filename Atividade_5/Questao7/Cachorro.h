#pragma once

#include <iostream>

#include "Animal.h"

class Cachorro: public Animal{
    
public:
  //Cachorro(){}
  Cachorro(std::string nome): Animal(nome){}
  Cachorro(std::string nome, std::string raca): Animal(nome, raca){}
  
  std::string late() const {return "AuAu";}
};

