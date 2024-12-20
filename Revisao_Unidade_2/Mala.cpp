#include "Mala.h"

void Mala::addLivro(Livro &livro){
  if(livros.size() > 12) 
    std::cout << "Mala cheia\n";
  else
    livros.push_back(livro);
}

//void addLivro(std::string, std::string);
  
void Mala::display() const{
  for(auto &livro : livros){
    livro.display();
    std::cout << std::endl;
  }
}

