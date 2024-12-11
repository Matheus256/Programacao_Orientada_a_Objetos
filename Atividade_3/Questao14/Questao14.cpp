#include <iostream>

#include "Pessoa.h"

using std::cout, std::endl;

int main(){
  Pessoa matheus{"Matheus Nascimento", "11122211123"}, especial;
  
  matheus.exibir_na_tela();
  cout << endl;
  
  especial.exibir_na_tela();
  cout << endl;
  
  especial.setNome("Isabella Tito");
  especial.setCPF("12345678911");
  
  especial.exibir_na_tela();
  cout << endl;
  
  Pessoa teste{"Irineu", "12345678910"};
  teste.exibir_na_tela();
  cout << endl;
  
  return 0;
}

