#pragma once

#include <iostream>
#include <string>

#include "Livro.h"

class LivroMonstruosoDosMonstros: public Livro{
public:
  LivroMonstruosoDosMonstros(std::string titulo, int paginas, int ano): Livro(titulo, paginas, ano){}
  
  LivroMonstruosoDosMonstros(std::string titulo, int paginas, int ano, std::string conteudo): Livro(titulo, paginas, ano, conteudo){}

  void ler() const{
    std::cout << std::endl << "Mastiga, mastiga, mastiga, mastiga..." << std::endl;
  }
};
