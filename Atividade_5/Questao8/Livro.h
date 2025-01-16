#pragma once

#include <iostream>
#include <string>

class Livro{
public:
  Livro(std::string, int, int, std::string = "");
  
  std::string getTitulo() const {return titulo;}
  void setTitulo(std::string titulo) {this->titulo = titulo;}
  
  int getPaginas() const {return paginas;}
  void setPaginas(int paginas) {this->paginas = paginas;}
  
  int getAno() const {return ano;}
  void setAno(int ano) {this->ano = ano;}
  
  std::string getConteudo() const {return conteudo;}
  void setConteudo(std::string conteudo) {this->conteudo = conteudo;}
  
  void ler() const;

private:
  std::string titulo;
  int paginas;
  int ano;
  std::string conteudo;
};
