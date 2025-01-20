#include "Trouxa.h"

Trouxa::Trouxa(std::string nome, std::string sexo, int idade, std::string profissao): Humano(nome, sexo, idade){
  setProfissao(profissao);
}

void Trouxa::apresentarSe() const{
  Humano::apresentarSe();
  std::cout << "Sou apenas um humano comum que atual é " << profissao << std::endl;
}
  
void Trouxa::trabalhar() const{
  std::cout << "Trabalha, trabalha, trabalha..." << std::endl;
}
