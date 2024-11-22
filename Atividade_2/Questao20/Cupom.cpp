#include "Cupom.h"

Cupom::Cupom(string id, string descricao, int quantidade, float preco){
  setId(id);
  setDescricao(descricao);
  setQuantidade(quantidade);
  setPreco(preco);
}
  
void Cupom::setId(string id){
  m_id = id;
}

string Cupom::getId() const{
  return m_id;
}

void Cupom::setDescricao(string descricao){
  m_descricao = descricao;
}

string Cupom::getDescricao() const{
  return m_descricao;
}

void Cupom::setQuantidade(int quantidade){
  m_quantidade = ( quantidade < 0 ? 0 : quantidade);
}

int Cupom::getQuantidade() const{
  return m_quantidade;
}
  
void Cupom::setPreco(float preco){
  m_preco = ( (preco < 0) ? 0 : preco);
}

float Cupom::getPreco() const{
  return m_preco;
}

double Cupom::calculaCupom() const{
  return getPreco() * getQuantidade();
}

