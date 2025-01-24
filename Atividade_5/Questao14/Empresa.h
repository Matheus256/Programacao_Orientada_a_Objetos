#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <format>

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"

class Empresa: public PessoaJuridica{

  friend std::ostream &operator<<(std::ostream &, const Empresa &);

public:
  Empresa(std::string nome, std::string CNPJ = "0000000000000", std::string razao = "Sem nome"): PessoaJuridica(nome,CNPJ,razao), vecFuncionarios{}, vecClientes{} {}
  
  void adicionarCliente(const Cliente &);
  void removerCliente(std::string);
  
  void imprimirClientes() const;
  
  void adicionarFuncionario(const Funcionario &);
  void removerFuncionario(std::string);
  
  void imprimirFuncionarios() const;
  
  double calcularFolhaDePagamento() const;
  
private:
  std::vector<Funcionario> vecFuncionarios;
  std::vector<Cliente> vecClientes;
};
