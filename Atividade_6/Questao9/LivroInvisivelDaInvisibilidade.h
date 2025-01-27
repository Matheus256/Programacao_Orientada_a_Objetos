#pragma once

#include <iostream>
#include <string>

#include "Livro.h"

class LivroInvisivelDaInvisibilidade: public Livro{
public:
  LivroInvisivelDaInvisibilidade(std::string titulo, int ano, int paginas, std::string conteudo = "Em branco"): Livro(titulo, ano, paginas, conteudo){};

  void ler() const override{std::cout << "..." << std::endl;}

};
