#include "Agenda.h"

Agenda::Agenda(){
  qtdePessoas = 0;
}

void Agenda::armazenaPessoa(const std::string &nome, int idade, double altura){
  if(qtdePessoas >= 10){
    std::cout << "Agenda está cheia" << std::endl;
    return;
  } 
  
  pessoas[qtdePessoas].setNome(nome);
  pessoas[qtdePessoas].setIdade(idade);
  pessoas[qtdePessoas].setAltura(altura);
  
  qtdePessoas++;
}

void Agenda::armazenaPessoa(const Pessoa &p){
  armazenaPessoa(p.getNome(), p.getIdade(), p.getAltura());
}

void Agenda::imprimePovo() const{
  std::cout << "   NOME   IDADE  ALTURA" << std::endl;
  for(int i = 0; i < qtdePessoas; i++){
    std::cout << std::format("{:^10} {:^5} {:^6.2f}\n", pessoas[i].getNome(), pessoas[i].getIdade(), pessoas[i].getAltura());
  }
}

int Agenda::buscaPessoa(const std::string &nome) const{
  for(int i = 0; i < qtdePessoas; i++){
    if(pessoas[i].getNome() == nome)
      return i;
  }
  
  return -1; //Caso em que a nome não está na lista
}

void Agenda::imprimePessoa(int i) const{
  if(i < 0 || i >= qtdePessoas){
    std::cout << "Posição inválida!" << std::endl;
    return;
  }
  
  std::cout << std::format("NOME: {}, IDADE: {}, ALTURA: {}\n", pessoas[i].getNome(), pessoas[i].getIdade(), pessoas[i].getAltura());
}

void Agenda::removePessoa(const std::string &nome){
  int indice = buscaPessoa(nome);
  if(indice < 0)
    return;
    
  for(int i = indice; i < qtdePessoas - 1; i++){
    pessoas[i] = pessoas[i + 1];
  }
  
  qtdePessoas--;
}