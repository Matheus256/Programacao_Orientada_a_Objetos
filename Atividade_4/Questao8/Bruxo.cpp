#include "Bruxo.h"

void para_maiusculo(auto &str){
  for(auto &c : str)
    c = toupper(c);
}

Bruxo::Bruxo(string nome, string casa, string feitico){
  setNome(nome);
  setCasa(casa);
  setFeitico(feitico);
  varinha = nullptr;
  capa = nullptr;
}

void Bruxo::setNome(string nome){
  m_nome = nome;
}

string Bruxo::getNome() const{
  return m_nome;
}

void Bruxo::setCasa(string casa){
  para_maiusculo(casa);
  
  if(casa == "GRIFINÓRIA" || casa == "GRIFINORIA")
    m_casa = "Grifinória";
  else if (casa == "SONSERINA")
    m_casa = "Sonserina";
  else if(casa == "LUFA-LUFA")
    m_casa = "Lufa-lufa";
  else if(casa == "CORVINAL")
    m_casa = "Corvinal";
  else
    m_casa = "";
}

string Bruxo::getCasa() const{
  return m_casa;
}

void Bruxo::setFeitico(string feitico){
  m_feitico = feitico;
}

string Bruxo::getFeitico() const{
  return m_feitico;
}

void Bruxo::lancarFeitico() const{
  string aux{getFeitico()};
  para_maiusculo(aux);
  
  cout << "Lançando Feitiço " << aux << endl;
}

void Bruxo::display() const{
  std::cout << std::format("Meu nome é {}, pertenço a casa {} e meu feitço preferido é {}\n", m_nome, m_casa, m_feitico);
  if(capa){
    std::cout << "Estou usando uma capa com as características:\n";
    capa->display();
  } else
    std::cout << "No momento não estou usando capa";
    
  std::cout << std::endl;
  
  if(varinha){
    std::cout << "Estou segurando uma varinha com as caracteristicas:\n";
    varinha->display();
  } else
    std::cout << "No momento estou sem varinha";
  
  std::cout << std::endl;
}
