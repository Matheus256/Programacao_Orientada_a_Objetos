#pragma once

#include <iostream>
#include <string>

#include "Pessoa.h"

class Bruxo: public Pessoa{
public:
    Bruxo(std::string nome, std::string casa = "Sem casa", std::string feitico = "Nenhum"): Pessoa(nome), casa{casa}, feitico{feitico}{}

    void setCasa(std::string casa){this->casa = casa;}
    std::string getCasa() const{return casa;}

    void setFeitico(std::string feitico){this->feitico = feitico;}
    std::string getFeitico() const{return feitico;}

    void display() const override{
        std::cout << "Meu nome é " << nome << ", participo da casa " << casa << " e gosto do feitiço " << feitico << std::endl;
    }


private:
    std::string casa;
    std::string feitico;
};