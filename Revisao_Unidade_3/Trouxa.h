#pragma once

#include <iostream>
#include <string>

#include "Pessoa.h"

class Trouxa: public Pessoa{
public:
    Trouxa(std::string nome, std::string CPF = "000.000.000-00", std::string emprego = "Desempregado"): Pessoa(nome), CPF{CPF}, emprego{emprego}{}

    void setCPF(std::string CPF){this->CPF = CPF;}
    std::string getCPF() const{return CPF;}

    void setEmprego(std::string emprego){this->emprego = emprego;}
    std::string getEmprego() const{return emprego;}

    void display() const override{
        std::cout << "Meu nome é " << nome << ", meu CPF é " << CPF << " e sou um " << emprego << std::endl;
    }

private:
    std::string CPF;
    std::string emprego;
};