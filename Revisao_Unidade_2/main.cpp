#include <iostream>
#include "Bruxo.h"
#include "Livro.h"
#include "Mala.h"

using std::cout, std::endl;

int main(){
  Bruxo b1{"Matheus", "Corvinal"};
  b1.display();
  cout << endl;
  
  Livro l1{"Fundamentos de POO", "Victor"}, l2{"Introdução a bagunça", "Irineu"};
  //l1.display();
  cout << endl;
  
  cout << "Estado da mala sem colocar nenhum livro\n";
  Mala mala;
  mala.display();
  cout << endl;
  
  cout << "Estado da mala após pega-lá e colcar um livro\n";
  mala.addLivro(l1);
  mala.display();
  cout << endl;
  
  cout << "Estado da mala após adicionar mais um livro na mala\n";
  mala.addLivro(l2);
  mala.display();
  cout << endl;
  
  return 0;
}
