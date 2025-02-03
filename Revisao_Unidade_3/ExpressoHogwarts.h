#pragma once

#include <iostream>
#include <vector>

#include "Pessoa.h"
#include "Bruxo.h"
#include "Trouxa.h"

class ExpressoHogwarts{

  friend std::ostream &operator<<(std::ostream &, const ExpressoHogwarts &);

public:
    ExpressoHogwarts(): Passageiros{}{}
    ~ExpressoHogwarts();

    ExpressoHogwarts &operator<<(const Bruxo &);
    ExpressoHogwarts &operator<<(const Trouxa &);

    ExpressoHogwarts &operator>>(const std::string &);
    ExpressoHogwarts &operator>>(const Pessoa &);


private:
    std::vector<Pessoa *> Passageiros;
};
