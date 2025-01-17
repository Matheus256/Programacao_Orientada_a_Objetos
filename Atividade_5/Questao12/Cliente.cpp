#include "Cliente.h"

std::ostream &operator<<(std::ostream &out, const Cliente &cliente){
  std::string CPFformato{""}, CPF{cliente.getCPF()};
  for(int i = 0; i < CPF.size(); i++){
    CPFformato += CPF[i];
    if( i == 2 || i == 5 )
      CPFformato += ".";
    else if (i == 8)
      CPFformato += "-";  
  }
  
  std::string tel{"("};
  for(int i = 0; i < cliente.telefone.size(); i++){
    tel += cliente.telefone[i];
    if(i == 1)
      tel += ")";
    if(i == 6)
      tel += "-";
  }
  
  out << std::format("Dados do Cliente:\n  Nome: {},\n  CPF: {},\n  Telefone: {},\n  Endereço: {}", cliente.nome, CPFformato, tel, cliente.endereco) << std::endl;
  
  return out;
}
