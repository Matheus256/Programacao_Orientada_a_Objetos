#include "Varinha.h"

Varinha::Varinha(std::string madeira, std::string nucleo, double comp){
  setMadeira(madeira);
  setNucleo(nucleo);
  setComprimento(comp);
}

void Varinha::display() const{
  std::cout << std::format("Tipo da madeira: {}, Tipo do nucleo: {}, Comprimento: {}", tipo_madeira, nucleo, comprimento);
}
