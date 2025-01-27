#pragma once

#include <iostream>
#include <string>

#include "Livro.h"

class LivroMonstruosoDosMonstros: public Livro{
public:
  LivroMonstruosoDosMonstros(std::string titulo, int ano, int paginas, std::string conteudo = "Em branco"): Livro(titulo, ano, paginas, conteudo){};
  
  void ler() const override{std::cout << "Mastiga, mastiga, mastiga, mastiga..." << std::endl;}
  
};
