#include "Empresa.h"

std::ostream &operator<<(std::ostream &out, const Empresa &empresa){
  out << "------------DADOS DA EMPRESA------------" << std::endl;
  out << "CNPJ: " << empresa.getCNPJ() << std::endl; 
  out << "Razão social: " << empresa.getRazaoSocial() << std::endl;
  out << "Nome fantasia: " << empresa.getNome() << std::endl << std::endl;  

  out << "    Cliente        CPF    " << std::endl;
  for(const auto &cliente : empresa.vecClientes)
    out << std::format("{:^14} {:^14} \n", cliente.getNome(), cliente.getCPF());
  out << std::endl;
  
  out << " Funcionario  Matrícula   Salário " << std::endl;
  for(const auto &funcionario : empresa.vecFuncionarios)
    out << std::format("{:^14} {:^8} {:^12.2f}\n", funcionario.getNome(), funcionario.getMatricula(), funcionario.getSalario());
  out << "--------------------------------------" << std::endl;
  
  return out;
}

void Empresa::adicionarCliente(const Cliente &cliente){
  vecClientes.push_back(cliente);
}

void Empresa::removerCliente(std::string CPF){
  for(int i = 0; i < vecClientes.size(); i++){
    if(vecClientes[i].getCPF() == CPF){
      vecClientes.erase(i + vecClientes.begin());
      return;
    }  
  }
}


void Empresa::adicionarFuncionario(const Funcionario &funcionario){
  if(vecFuncionarios.size() > 1){
    std::cout << "Limite de funcionarios atingido" << std::endl;
    return;
  }
  
  vecFuncionarios.push_back(funcionario);
}

void Empresa::removerFuncionario(std::string CPF){
  for(int i = 0; i < vecFuncionarios.size(); i++){
    if(vecFuncionarios[i].getCPF() == CPF){
      vecFuncionarios.erase(i + vecFuncionarios.begin());
      return;
    }
  }
}

void Empresa::imprimirClientes() const{
  std::cout << "--------DADOS DOS CLIENTES--------" << std::endl;
  for(const auto &cliente : vecClientes)
    std::cout << cliente;
  std::cout << "----------------------------------" << std::endl;
}

void Empresa::imprimirFuncionarios() const{
  std::cout << "--------DADOS DOS FUNCIONARIOS--------" << std::endl;
  for(const auto &cliente : vecFuncionarios)
    std::cout << cliente;
  std::cout << "--------------------------------------" << std::endl;
}

double Empresa::calcularFolhaDePagamento() const{
  double total_pagamentos{0};
  for(const auto &funcionario : vecFuncionarios)
    total_pagamentos += funcionario.calculaSalarioBruto();
  return total_pagamentos;
}
