#pragma once

#include <string>

class Pessoa{
public:
    Pessoa(std::string nome): nome{nome}{}

    void setNome(std::string nome){this->nome = nome;}
    std::string getNome() const{return nome;}

    virtual void display() const = 0;

protected:
    std::string nome;
};
