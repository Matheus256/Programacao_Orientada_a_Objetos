#include "Livro.h"

Livro::Livro(std::string titulo, std::string autor){
  this->titulo = titulo;
  this->autor = autor;
}
  
void Livro::display() const{
  std::cout << std::format("Titulo: {}, Autor: {}", titulo, autor);
}
