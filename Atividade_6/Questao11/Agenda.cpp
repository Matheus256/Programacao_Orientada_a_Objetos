#include "Agenda.h"

Agenda &operator<<(Agenda &agenda, const PessoaFisica &pessoa){
  agenda.Contatos.push_back(new PessoaFisica(pessoa));
  return agenda;
}

Agenda &operator<<(Agenda &agenda, const PessoaJuridica &pessoa){
  agenda.Contatos.push_back(new PessoaJuridica(pessoa));
  return agenda;
}

Agenda &operator>>(Agenda &agenda, const std::string &nome_pessoa){
  for(int i = 0; i < agenda.Contatos.size(); i++){
    if(agenda.Contatos[i]->getNome() == nome_pessoa)
      //Pessoa *temp = agenda.Contatos[i];
      agenda.Contatos.erase(agenda.Contatos.begin() + i);
      //delete temp;
      return agenda;
  }
  
  return agenda;
}

std::ostream &operator<<(std::ostream &out, const Agenda &agenda){
  if(!agenda.Contatos.size()){
    out << "Agenda Vazia" << std::endl;
    return out;
  }
  
  int i = 1;
  for(const auto contato : agenda.Contatos){
    out << "Contato " << i << std::endl;
    out << contato->obterDados();
    i++;
  }
  
  return out;
}

Pessoa *Agenda::pesquisarContato(const std::string &nome) const{
  for(auto contato: Contatos){
    if(contato->getNome() == nome)
      return contato;
  }
  
  return nullptr;
}
