#include <iostream>

using std::cout, std::endl;

#include "Humano.h"
#include "Bruxo.h"
#include "Trouxa.h"

int main(){
  Humano humanoComum{"Matheus", "Masculino", 26};
  humanoComum.apresentarSe();
  cout << endl;
  
  Bruxo humanoBruxo{"Harry Potter", "Masculino", 30, "Grifinória", "Accio"};
  
  humanoBruxo.apresentarSe();
  cout << endl;
  
  humanoBruxo.lancarFeitico();
  cout << endl;
  
  Trouxa humanoTrouxa{"Irineu", "Indefinido", 37};
  humanoTrouxa.apresentarSe();
  cout << endl;
  humanoTrouxa.setProfissao("Taxista");
  humanoTrouxa.setSexo("Masculino");
  humanoTrouxa.apresentarSe();
  cout << endl;
  
  humanoTrouxa.trabalhar();
  
  return 0;
}
