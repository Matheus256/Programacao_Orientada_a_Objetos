#pragma once

#include <string>
#include <vector>

struct sProduto{
  std::string id;
  std::string descricao;
  int quantidade;
  float preco;
};

typedef struct sProduto Produto;

class Cupom{
  public:
  Cupom();
  
  void addItem(std::string id, std::string descricao, int quantidade, float preco);
  std::string getItem(std::string id) const;
  
  double calculaCupom() const;
  void imprirmirNota() const;
  
  private:
  std::vector<Produto> m_Produtos;
};
