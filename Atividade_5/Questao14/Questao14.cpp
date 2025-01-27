#include <iostream>

using std::cout, std::endl;

#include "Empresa.h"
#include "Cliente.h"
#include "Funcionario.h"

int main(){
  Empresa empresaXadrez{"Casa do Xadrez", "111222333444", "Matheus Nascimento"};
  Cliente clienteUm{"Harry Potter", "12345678910", "21911111111", "Hogwarts"}, clienteDois{"Bobby Fisher", "12345678914", "21922222222"};
  
  Funcionario funcionarioUM{"Irineu", "12345678911", "123", 1400, 160, 42}, funcionarioDois{"Mario", "12345678912", "124", 1400, 160, 52};
  
  empresaXadrez.adicionarCliente(clienteUm);
  empresaXadrez.adicionarCliente(clienteDois);
  //empresaXadrez.imprimirClientes();
  //cout << endl;
  
  empresaXadrez.adicionarFuncionario(funcionarioUM);
  empresaXadrez.adicionarFuncionario(funcionarioDois);
  empresaXadrez.imprimirFuncionarios();
  cout << endl;
  
  cout << "Gasto total da empresa " << empresaXadrez.getNome() << " com os funcionários é de R$" << empresaXadrez.calcularFolhaDePagamento() << endl;
  cout << endl;
  
  cout << empresaXadrez << endl;
  cout << endl;
  
  empresaXadrez.removerCliente("12345678918");
  //empresaXadrez.imprimirClientes();
  //cout << endl;
  
  empresaXadrez.removerFuncionario("12345678911");
  empresaXadrez.imprimirFuncionarios();
  cout << endl;

    cout << "Gasto total da empresa " << empresaXadrez.getNome() << " com os funcionários é de R$" << empresaXadrez.calcularFolhaDePagamento() << endl;
  cout << endl;

  return 0;
}
