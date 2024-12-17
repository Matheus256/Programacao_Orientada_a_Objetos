#include "CapaBruxo.h"

CapaBruxo::CapaBruxo(std::string casa, double tam): tamanho{tam}, casa{""}, cor{""}{
  setCasa(casa);
}

void CapaBruxo::setCasa(std::string casa){
  //Colocando tudo em minusculo para validar
  for(auto &c : casa)
    c = tolower(c);
  
  if(casa == "grifinoria"){
    this->casa = "Grifinória";
    this->cor = "Vermelho";
  } else if(casa == "sonserina"){
    this->casa = "Sonserina";
    this->cor = "Verde";
  } else if(casa == "corvinal"){
    this->casa = "Corvinal";
    this->cor = "Azul";
  } else if(casa == "lufa-lufa"){
    this->casa = "Lufa-Lufa";
    this->cor = "Amarelo";
  } else{
    this->casa = "Sem casa";
    this->cor = "Sem cor";
  }
}

void CapaBruxo::display() const{
  std::cout << format("Tamanho: {}, Casa: {}, Cor: {}", tamanho, casa, cor);
}
