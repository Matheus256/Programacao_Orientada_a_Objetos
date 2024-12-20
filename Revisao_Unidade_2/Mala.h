#pragma 

//Bibliotecas padrão primeiro
#include <string>
#include <vector>
#include <iostream>

#include "Livro.h"

class Mala{
public:
  void addLivro(Livro &);
  //void addLivro(std::string, std::string);
  
  void display() const;
private:
  std::vector<Livro> livros;
};
