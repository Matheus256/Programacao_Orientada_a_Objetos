#include "Humano.h"

Humano::Humano(std::string nome, std::string sexo, int idade){
  setNome(nome);
  setSexo(sexo);
  setIdade(idade);
}

void Humano::apresentarSe() const{
  std::cout << "Olá, me chamo " << nome << " e tenho " << idade << " ano(s) de idade" << std::endl;
}
