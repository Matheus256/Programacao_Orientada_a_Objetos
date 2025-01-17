#include <iostream>

using std::cout, std::endl;

#include "Cliente.h"

int main(){
  Cliente cliente{"Matheus", "12345678912"};
  cout << cliente << endl;
  
  cliente.setEndereco("Rua Dois, Bairro Três Um, 231");
  cliente.setTelefone("83932649235");
  cout << cliente << endl;
  
  cliente.setNome("Matheus Nascimento");
  cout << cliente;
  
  return 0;
}
