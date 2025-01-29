#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

class Agenda{
  
  friend std::ostream &operator<<(std::ostream &, const Agenda &);
  friend Agenda &operator<<(Agenda &, const PessoaFisica &); 
  friend Agenda &operator<<(Agenda &, const PessoaJuridica &); 
  friend Agenda &operator>>(Agenda &, const std::string &);

public:
  Agenda(): Contatos{}{}
  
  Pessoa *pesquisarContato(const std::string &) const;

private:
  std::vector<Pessoa *> Contatos;
};
