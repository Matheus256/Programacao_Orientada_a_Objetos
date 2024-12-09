#include "Pessoa.h"

#include <format>

Pessoa::Pessoa(string nome, string CPF, string validade){
  setNome(nome);
  setCPF(CPF);
  setCPFvalido(validade);
};

void Pessoa::setNome(string nome){
  this->nome = nome;
}

string Pessoa::getNome() const{
  return this->nome;
}

void Pessoa::setCPF(string CPF){
  this->CPF = CPF;
}

string Pessoa::getCPF() const{
  return this->CPF;
}
 
void Pessoa::setCPFvalido(string status){
  this->CPFvalido = status;
}

string Pessoa::getCPFvalido() const{
  return this->CPFvalido;
}

void Pessoa::exibir_na_tela() const{
  std::string resposta{""};
  for(int i = 0; i < CPF.size(); i++){
    resposta = resposta + CPF[i];
    if( i == 2 || i == 5 )
      resposta = resposta + ".";
    else if (i == 8)
      resposta = resposta + "-";  
  }
  
  std::cout << std::format("{} : {} ({})", nome, resposta, CPFvalido);
}
