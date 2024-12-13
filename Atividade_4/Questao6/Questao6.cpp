#include <iostream>

#include "Varinha.h"

using namespace std;

int main(){
  Varinha va1{"Carvalho", "Pena de fênix", 25.5}, va2;
  
  va1.display();
  cout << endl;
  
  va2.display();
  cout << endl;
  
  va2.setComprimento(21.2);
  va2.setNucleo("Pelo de unicórnio");
  
  va2.display();
  cout << endl;
  
  return 0;
}
