#include <iostream>

#include "Treinador.h"
#include "Pokemon.h"

using std::cout, std::endl;

int main(){
  Treinador ash{"Ash"}, misty{"Misty"}, brock{"Brok"};
  
  Pokemon pikachu{"Pikachu", "Eletrico", "piiiika"};
  Pokemon caterpie{"Caterpie", "Inseto", "meeooohh"};
  
  ash.capturar(&pikachu);
  ash.capturar(&caterpie);
  
  Pokemon horsea{"Horsea", "Aquatico", "hor plupt"};
  Pokemon staryu{"Staryu", "Aquatico", "staaaary"};
  
  misty.capturar(&horsea);
  misty.capturar(&staryu);
  
  Pokemon geodude{"Geodude", "Rocha", "geudud"};
  Pokemon onix{"Onix", "Rocha", "Ooonx"};
  
  brock.capturar(&geodude);
  brock.capturar(&onix);
  
  cout << "Vai, Pikachu!" << endl;
  ash.vai("Pikachu");
  cout << "Vai, Caterpie!" << endl;
  ash.vai("Caterpie");
  
  cout << "Vai, Horsea!" << endl;
  misty.vai("Horsea");
  cout << "Vai, Staryu!" << endl;
  misty.vai("Staryu");
  
  cout << "Vai, Geodude!" << endl;
  brock.vai("Geodude");
  cout << "Vai, Steelix!" << endl;
  brock.vai("Steelix");
  
  return 0;
}
