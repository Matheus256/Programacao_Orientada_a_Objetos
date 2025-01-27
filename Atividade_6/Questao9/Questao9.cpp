#include <iostream>

using std::cout, std::endl;

#include "Livro.h"
#include "LivroMonstruosoDosMonstros.h"
#include "LivroInvisivelDaInvisibilidade.h"

int main(){
  Livro livro{"Livro1", 2025, 128, "Siga para o próximo livro."};
  LivroMonstruosoDosMonstros livroMonstro{"Monstro1", 2024, 200};
  LivroInvisivelDaInvisibilidade livroInvisivel{"Não vê", 2024, 114};
  
  Livro *pLivro{nullptr};
  
  pLivro = &livro;
  pLivro->ler();
  cout << endl;
  
  pLivro = &livroMonstro;
  pLivro->ler();
  cout << endl;
  
  pLivro = &livroInvisivel;
  pLivro->ler();
  cout << endl;
  
  return 0;
}
