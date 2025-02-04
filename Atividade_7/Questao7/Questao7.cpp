#include <iostream>

using std::cout, std::endl;

#include "Bruxo.h"
#include "ExpressoHogwarts.h"

int main() {
  ExpressoHogwarts expresso(100);

  Bruxo harry{"Harry","Grifinoria","expecto patronum"};

  cout << "Embarcando..." << endl;
  cout << endl;
 
  expresso << harry;
  expresso << Bruxo{"Rony","Grifinoria","wingardium leviosa"};
  expresso << Bruxo{"Hermione","Grifinoria","flipendo"};

  expresso << Bruxo{"Malfoy","Sonserina","cruciatus"};

  cout << expresso;
  cout << endl;

  cout << "Partindo..." << endl;
  cout << "Viajando..." << endl;
 
  cout << "Chegando..." << endl;
  cout << "Desembarcando..." << endl;
  cout << endl;

  expresso >> "Malfoy";
  expresso >> harry;
  expresso >> Bruxo("Rony","Grifinoria","wingardium leviosa");
  expresso >> Bruxo("Hermione","Grifinoria","flipendo");

  cout << expresso;
 
  return 0;
}
