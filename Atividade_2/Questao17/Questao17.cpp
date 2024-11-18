#include <iostream>
#include <format>

#include "Bruxo.h"

using std::cout, std::format;

int main(){
  Bruxo bru1{"Matheus", "grifinoria", "Expelliarmus"};
  Bruxo bru2{"Isabella Tito", "grifinoria", "Expecto Patronum"};
  
  bru1.display();
  cout << endl;
  bru2.display();
  cout << endl;
  
  bru1.setNome("Matheus Nascimento");
  
  Bruxo bru3{"Foginho", "lufa-Lufa", "Lumos"};
  
  bru3.lancarFeitico();
  bru1.lancarFeitico();
  bru2.lancarFeitico();
  cout << endl;
  
  bru3.display();
  
  return 0;
}
