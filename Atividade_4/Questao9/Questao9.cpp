#include <iostream>
#include <format>

#include "ChapeuSeletor.h"

using namespace std;

int main(){
  ChapeuSeletor chapeuSeletor;
  
  chapeuSeletor.recepcionar();
  cout << endl;
  
  for(int i = 0; i < 21; i++){
    cout << format("A casa escolhida foi \"{}\"\n", chapeuSeletor.sortearCasa());
  }
  
  
  
  return 0;
}
