#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Bruxo.h"

class ExpressoHogwarts{

  friend std::ostream &operator<<(std::ostream &, const ExpressoHogwarts &);
  //friend ExpressoHogwarts &operator<<(ExpressoHogwarts &, const Bruxo &);
  
public:
  ExpressoHogwarts(int capacidade): capacidade_maxima{capacidade}, Passageiros{}{}
  
  ExpressoHogwarts &operator<<(const Bruxo &);
  ExpressoHogwarts &operator>>(const Bruxo &);
  ExpressoHogwarts &operator>>(const std::string &);
  
private:
  int capacidade_maxima;
  std::vector<Bruxo> Passageiros;
};
