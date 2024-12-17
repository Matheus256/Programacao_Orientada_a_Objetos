#include <iostream>
#include <format>

#include "Bruxo.h"
#include "CapaBruxo.h"
#include "Varinha.h"

using namespace std;

int main(){
  Bruxo bruxo1{"Matheus", "Corvinal", "Lumus"};
  
  bruxo1.display();
  cout << endl;
  
  Varinha var1{"carvalho", "Pena de Fenix", 21.2};
  bruxo1.pegarVarinha(&var1);
  
  //Agora com uma vainha
  bruxo1.display();
  cout << endl;
  
  CapaBruxo capa1{"corvinal", 160.52};
  bruxo1.colocarCapa(&capa1);
  
  bruxo1.display();
  cout << endl;
  
  bruxo1.soltarVarinha();
  bruxo1.display();
  cout << endl;
  
  return 0;
}
