#include <iostream>

using std::cout, std::endl;

#include "Livro.h"
#include "LivroMonstruosoDosMonstros.h"
#include "LivroInvisivelDaInvisibilidade.h"

int main(){
  Livro livroComum{"Vaca Victoria", 1, 2005};
  livroComum.ler();
  
  livroComum.setConteudo("Era uma vez uma vaca chamada Victoria que caiu em um buraco e a história acabou");
  livroComum.ler();
  
  LivroMonstruosoDosMonstros livroMonstro{"Monstrão", 21, 2024};
  livroMonstro.ler();
  
  livroMonstro.setConteudo("Você não sabe e nem eu sei");
  livroMonstro.ler();
  
  LivroInvisivelDaInvisibilidade livroInvisivel{"Não da pra ler", 12, 2025, "O essencial é invisivél aos olhos"};
  livroInvisivel.ler();
  
  cout << "Parece que não dá pra ler um livro invisível" << endl;
  return 0;
}
