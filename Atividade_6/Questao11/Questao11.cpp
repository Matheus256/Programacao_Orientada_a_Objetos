#include <iostream>

using std::cout, std::endl;

#include "Agenda.h"
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

int main(){
  Agenda minhaAgenda;
  PessoaFisica contato1{"Matheus Nascimento", "Rua 1", "matheus@gmail.com", "123", "19/02/1998"};
  PessoaFisica contato2{"Isabella Tito", "Rua 2", "bella@gmail.com", "321", "15/06/2000"};
  
  minhaAgenda << contato1;
  
  cout << minhaAgenda;
  cout << endl;
  
  minhaAgenda >> "Matheus Nascimento";
  cout << minhaAgenda;
  cout << endl;
  
  minhaAgenda << contato1 << contato2;
  cout << minhaAgenda;
  cout << endl;

  Pessoa *contatoPesquisado = minhaAgenda.pesquisarContato("Victor");
  if(contatoPesquisado)
    cout << "O contato " << contatoPesquisado->getNome() << " foi encontrado" << endl;
  else
    cout << "Contato não encontrado" << endl;
  cout << endl;
  
  contatoPesquisado = minhaAgenda.pesquisarContato("Isabella Tito");
  if(contatoPesquisado)
    cout << "O contato " << contatoPesquisado->getNome() << " foi encontrado" << endl;
  else
    cout << "Contato não encontrado" << endl;
  cout << endl;
  
  PessoaJuridica empresa1{"Casa do Xadrez", "Rua 3", "casadoxadrez.com.br"};
  minhaAgenda << empresa1;
  cout << minhaAgenda;
  cout << endl;
  
  return 0;
}
