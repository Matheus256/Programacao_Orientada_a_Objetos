#pragma once

#include <iostream>
#include <string>
#include <format>

class Animal{

  friend std::ostream &operator<<(std::ostream &, const Animal&);
  
public:
  Animal(){}
  Animal(std::string);
  Animal(std::string, std::string);
  
  std::string getNome() const {return nome;}
  void setNome(std::string);
  
  std::string getRaca() const {return raca;}
  void setRaca(std::string);
  
  std::string caminha() const;
  
private:
  std::string nome;
  std::string raca;
};
