#include "Bruxo.h"
#include <format>

using std::cout, std::string, std::format;

Bruxo::Bruxo(std::string nome, std::string casa){
  this->nome = nome;
  setCasa(casa);
}

void Bruxo::setCasa(std::string casa){
  if(casa == "Grifinoria" || casa == "Lufa-Lufa" || casa == "Corvinal" || casa == "Sonserina")
    this->casa = casa;
  else
    this->casa = "Casa Inválida";
}
  
void Bruxo::display() const{
  cout << format("Nome do Bruxo: {}, Casa do Bruxo {}", nome, casa);
}
