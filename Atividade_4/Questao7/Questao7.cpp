#include <iostream>

#include "CapaBruxo.h"

using namespace std;

int main(){
  CapaBruxo capa1{"GRIFINORIA", 160.25}, capa2{"grifi"}, capa3;
  
  capa1.display();
  cout << endl;
  
  capa2.display();
  cout << endl;
  
  capa3.display();
  cout << endl;
  
  return 0;
}
