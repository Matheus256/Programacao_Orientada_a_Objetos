#include <iostream>
#include <format>

#include "Cupom.h"

using std::cout, std::format;

Cupom::Cupom() : m_Produtos{} {
  //Não precisa fazer mais nada
}

void Cupom::addItem(std::string id, std::string descricao, int quantidade, float preco){
  if(m_Produtos.size() >= 20){
    std::cerr << "O cupom já atingiu o total de itens\n";
    return;
  }
  
  //Validação para a quantidade e o preço
  quantidade = ((quantidade < 0) ? 0 : quantidade);
  preco = ((preco < 0) ? 0 : preco);
  
  Produto novo{id, descricao, quantidade, preco};
  m_Produtos.push_back(novo);
}

std::string Cupom::getItem(std::string id) const{
  for(const auto &item : m_Produtos){
    if(item.id == id)
      return format(" Descrição: {}, quantidade: {}, preço: {}", item.descricao, item.quantidade, item.preco);
  }
  
  return "Item não encontrado";
}

double Cupom::calculaCupom() const{
  double total = 0;
  for(const auto &item : m_Produtos)
    total = total + item.quantidade*item.preco;
    
  return total;
}

void Cupom::imprirmirNota() const{
  cout << " ID | " << "DESCRIÇÃO | " << "QUANTIDADE | " << "PREÇO | " << " TOTAL" << std::endl;
  cout << format("-----------------------------------------------\n");
  for(auto &item : m_Produtos){
    //cout << format("Id: {}, descrição: {}, quantidade: {}, preco: {} - Total: {}\n", item.id, item.descricao, item.quantidade, item.preco, item.quantidade*item.preco);
    cout << format("{} | {} | {} | {}\n", item.id, item.descricao, item.quantidade, item.preco, item.quantidade*item.preco);
  }
  cout << format("-----------------------------------------------\n");
  cout << "Total da nota: " << calculaCupom() << std::endl;

}
