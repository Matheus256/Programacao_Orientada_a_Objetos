#include "Pessoa.h"
#include <array>

Pessoa::Pessoa(std::string nome, std::string CPF){
  setNome(nome);
  setCPF(CPF);
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
  
  std::cout << std::format("{}: {} ({})", nome, resposta, (CPFvalido ? "Válido" : "Inválido") );
}

void Pessoa::setCPF(std::string CPF){
  this->CPF = CPF;
  CPFvalido = verificaCPF(CPF);
}

bool Pessoa::verificaCPF(std::string CPF) const{
  std::array<int, 11> numeros{};
  for(int i = 0; i < 11; i++)
    numeros[i] = CPF[i] - '0';
  
  //Pra testar se todos os numeros são iguais
  int cont{0};
  for(int i = 0; i < 10; i++)
    if(numeros[i] == numeros[i+1])
      cont++;
  
  if(cont >= 10)
    return false;
  
  //Validação do primeiro dígito verificador
  cont = 0;
  for(int i = 0; i < 9; i++)
    cont = cont + numeros[i]*(10 - i);
    
  int resto = (cont*10) % 11;
  resto = (resto == 10) ? 0 : resto;
  
  if(resto != numeros[9])
    return false;
    
  //Validação do primeiro dígito verificador
  cont = 0;
  for(int i = 0; i < 10; i++)
    cont = cont + numeros[i]*(11 - i);
    
  resto = (cont*10) % 11;
  resto = (resto == 10) ? 0 : resto;
  
  if(resto != numeros[10])
    return false;
    
  return true;
}
