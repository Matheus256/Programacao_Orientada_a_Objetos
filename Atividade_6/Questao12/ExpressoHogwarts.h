#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>

#include "Humano.h"
#include "Bruxo.h"
#include "Trouxa.h"

class ExpressoHogwarts{

  friend std::ostream &operator<<(std::ostream &, const ExpressoHogwarts &);

public:
  ExpressoHogwarts(int capacidade): capacidade_maxima{capacidade}, Passageiros{}{}
  ~ExpressoHogwarts();
  
  ExpressoHogwarts &operator<<(const Bruxo &);
  ExpressoHogwarts &operator<<(const Trouxa &);
  
  ExpressoHogwarts &operator>>(const Pessoa &);
  ExpressoHogwarts &operator>>(const std::string &);
  
  Humano *operator[](int) const;
  
private:
  int capacidade_maxima;
  std::vector<Humano *> Passageiros;
};
