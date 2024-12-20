#pragma once

#include <iostream>
#include <string>
#include <format>

class Livro{
public:
  Livro(std::string = "Sem titulo", std::string = "Sem autor"); 
  
  std::string getTitulo() const{return titulo;}
  std::string getAutor() const{return autor;}
  
  void display() const;
private:
  std::string titulo;
  std::string autor;
};
