#pragma once

#include <iostream>
#include <string>

class Livro{
public:
  Livro(std::string , int , int , std::string = "Em branco");
  
  void setTitulo(std::string &titulo){this->titulo = titulo;}
  std::string getTitulo() const{return this->titulo;}
  
  void setAno(int &ano){this->ano = ano;}
  int getAno() const{return this->ano;}
  
  void setPaginas(int &paginas){this->quant_paginas = paginas;}
  int getPaginas() const{return this->quant_paginas;}
  
  void setConteudo(std::string &conteudo){this->conteudo = conteudo;}
  std::string getConteudo() const{return this->conteudo;}
  
  virtual void ler() const;
  
private:
  std::string titulo;
  int ano;
  int quant_paginas;
  std::string conteudo;
};
