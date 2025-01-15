#include <iostream>

using std::cout, std::endl;

#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

int main(){
  Imovel imovelPadrao{"Rua Um, Bairro Quatro 230"};
  cout << "A casa localizada na " << imovelPadrao.getEndereco() << ", custa R$ " << imovelPadrao.getPreco() << endl;
  cout << endl;
  
  imovelPadrao.setPreco(120000.0);
  cout << "A casa localizada na " << imovelPadrao.getEndereco() << ", custa R$ " << imovelPadrao.getPreco() << endl;
  cout << endl;
  
  ImovelNovo imovelNovo{"Rua Dois, Bairro Três 300", 200000.0, 0.05};
  cout << "A casa localizada na " << imovelNovo.getEndereco() << ", custa R$ " << imovelNovo.getPreco() << endl;
  cout << endl;
  
  ImovelVelho imovelVelho{"Rua três, Bairro Um 320", 100000};
  cout << "A casa localizada na " << imovelVelho.getEndereco() << ", custa R$ " << imovelVelho.getPreco() << endl;
  cout << endl;
  
  imovelVelho.setDesconto(0.15);
  cout << "A casa localizada na " << imovelVelho.getEndereco() << ", custa R$ " << imovelVelho.getPreco() << endl;
  cout << endl;
  
  return 0;
}

