#pragma once

#include <iostream>
#include <string>

#include "Livro.h"

class LivroInvisivelDaInvisibilidade: public Livro{
public:
  LivroInvisivelDaInvisibilidade(std::string titulo, int paginas, int ano): Livro(titulo, paginas, ano){}
  
  LivroInvisivelDaInvisibilidade(std::string titulo, int paginas, int ano, std::string conteudo): Livro(titulo, paginas, ano, conteudo){}

  void ler() const{std::cout << std::endl;}
};
