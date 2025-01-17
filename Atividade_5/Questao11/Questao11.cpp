#include <iostream>
#include <format>

using std::cout, std::endl, std::format;

#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

int main(){
  Pessoa pessoa{"Matheus"};
  cout << pessoa << endl;
  
  PessoaFisica pessoaFisica{"Matheus Nasciemnto", "12345678912"};
  cout << pessoaFisica << endl;
  
  PessoaJuridica pessoaJuridica{"Loja do Xadrez"};
    cout << format("Nome: {},\nCNPJ: {},\nRazão Social: {}", pessoaJuridica.getNome(), pessoaJuridica.getCNPJ(), pessoaJuridica.getRazaoSocial()) << endl << endl; 


  pessoaJuridica.setCNPJ("12121212121212");
  pessoaJuridica.setRazaoSocial("Matheus Nascimento");
  pessoaJuridica.setNome("Casa do Xadrez");
  
  cout << format("Nome: {},\nCPF: {}", pessoaFisica.getNome(),   pessoaFisica.getCPF()) << endl << endl;
  
  cout << format("Nome: {},\nCNPJ: {},\nRazão Social: {}", pessoaJuridica.getNome(), pessoaJuridica.getCNPJ(), pessoaJuridica.getRazaoSocial()) << endl << endl; 
  
  return 0;
}
