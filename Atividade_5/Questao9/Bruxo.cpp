#include "Bruxo.h"

Bruxo::Bruxo(std::string nome, std::string sexo, int idade, std::string casa, std::string feitico): Humano(nome, sexo, idade){
  setCasa(casa);
  setFeitico(feitico);
}

void Bruxo::apresentarSe() const{
  Humano::apresentarSe();
  std::cout << "Além disso, sou um Bruxo que pertence a casa " << casa << std::endl;
}
  
void Bruxo::lancarFeitico() const{
  std::cout << "Lançando o feitiço " << feitico << std::endl;
}
