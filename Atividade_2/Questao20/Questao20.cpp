#include <iostream>
#include <format>

#include "Cupom.h"

using std::cout, std::endl, std::format;

int main(){
  Cupom c1{"1234", "Teclado de pobre", 12, 50.0};
  Cupom c2{"1235", "TV Full HD 4K - 40 polegadas", 5, 3500.0};
  Cupom c3{"1236", "Controle USB - Compatível com PC e XBOX One", 21,-2};
  
  cout << format("Id: {},\n Descrição: {},\n Quantidade: {},\n Preço: {}\n", c1.getId(), c1.getDescricao(), c1.getQuantidade(), c1.getPreco()) << endl;
    
  cout << format("Id: {},\n Descrição: {},\n Quantidade: {},\n Preço: {}\n", c3.getId(), c3.getDescricao(), c3.getQuantidade(), c3.getPreco()) << endl;
  
  cout << format("Id: {},\n Descrição: {},\n Quantidade: {},\n Preço: {}\n", c2.getId(), c2.getDescricao(), c2.getQuantidade(), c2.getPreco()) << endl;
  
  cout << format("Custo total do item {}: R${}", c1.getId(), c1.calculaCupom()) << endl; 
  
  c3.setPreco(-20.0);
  
  cout << format("O novo preço do item {}: R${}", c3.getId(), c3.getPreco()) << endl;
  
  return 0;
}
