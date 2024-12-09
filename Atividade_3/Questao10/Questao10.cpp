#include <iostream>
#include "Pessoa.h"
#include <format>

using std::cout, std::endl;

int main(){
  Pessoa matheus{"Matheus Nascimento", "12345678911", "Válido"}, teste{};
  
  matheus.exibir_na_tela();
  cout << endl;
  teste.exibir_na_tela();
  cout << endl << endl;
  
  teste.setNome("Isabella Tito");
  teste.setCPF("11111111111");
  teste.setCPFvalido("Válido");
  teste.exibir_na_tela();
  cout << endl << endl;
  
  cout << format("O CPF de {} é {}\n", matheus.getNome(), matheus.getCPF());
  
  return 0;
}
