#include <iostream>

using std::cout, std::endl;

#include "Humano.h"
#include "Bruxo.h"
#include "Trouxa.h"
#include "ExpressoHogwarts.h"

int main(){
  ExpressoHogwarts meuExpresso{10};
  Bruxo harry{"Harry","Grifinoria","expecto patronum"}, rony{"Rony","Grifinoria","wingardium leviosa"};
  Trouxa irineuTres{"Irineu Três", "Médico"}, irineuQuatro{"Irineu Quatro", "Desenvolvedor"};
  
  meuExpresso << Bruxo{"Matheus Nascimento", "Corvinal", "Lumus"} << Bruxo{"Isabella Tito", "Grifinória", "Lumus"};
  cout << meuExpresso << endl;
  
  meuExpresso << Trouxa{"Irineu Um", "Motorista"} << Trouxa{"Irineu Dois", "Entregador"};
  cout << meuExpresso << endl;
  
  meuExpresso << harry << irineuTres << rony << irineuQuatro << Bruxo{"Hermione","Grifinoria","flipendo"};
  cout << meuExpresso << endl;
  
  meuExpresso[0]->quemSou();
  cout << "Tudo bem, pode ficar no expresso" << endl << endl;
  
  meuExpresso[2]->quemSou();
  cout << "Cai fora do expresso! Trouxa!" << endl << endl;
  
  return 0;
}
