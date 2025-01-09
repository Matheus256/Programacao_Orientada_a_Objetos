#pragma once

#include <iostream>
#include <format>

#include "Pessoa.h"

class Agenda{
public:
  Agenda(int tPessoas = 1);
  ~Agenda();
  void armazenaPessoa(const std::string &nome, int idade, float altura);
  void armazenaPessoa(const Pessoa &p);

  void removePessoa(const std::string &nome);

  int buscaPessoa(const std::string &nome) const; // informa em que posição da agenda está a pessoa
  void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
  void imprimePessoa(int i) const; // imprime os dados da pessoa que está na posição 'i' da agenda
private:
  Pessoa *pessoas;
  int tPessoas;
  int qtdePessoas;
};

