#pragma once

#include <string>

using std::string;

class Cupom{
public:
  Cupom(string id, string descricao, int quantidade, float preco);
  
  void setId(string id);
  string getId() const;
  
  void setDescricao(string descricao);
  string getDescricao() const;
  
  void setQuantidade(int quantidade);
  int getQuantidade() const;
  
  void setPreco(float preco);
  float getPreco() const;
  
  double calculaCupom() const;
private:
  string m_id;
  string m_descricao;
  int m_quantidade;
  float m_preco;
};
