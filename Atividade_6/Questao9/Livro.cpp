#include "Livro.h"

Livro::Livro(std::string titulo, int ano, int paginas, std::string conteudo){
  setTitulo(titulo);
  setAno(ano);
  setPaginas(paginas);
  setConteudo(conteudo);
}

void Livro::ler() const{
  std::cout << std::endl << "Titulo: " << getTitulo() << ",\n";
  std::cout << "Ano de publicação: " << getAno() << ",\n";
  std::cout << "Total de páginas: " << getPaginas() << ",\n";
  std::cout << "Conteúdo: " << getConteudo() << "\n";
}

