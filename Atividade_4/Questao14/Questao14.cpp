#include <iostream>

#include "IntegerSet.h"

using namespace std;

int main(){
  int arr[6]{91, 2, 7, 7, 12, 14};
  IntegerSet conjunto1;
  IntegerSet conjunto2{arr, 6};
  
  conjunto1.print();
  conjunto1.insertElement(2);
  conjunto1.insertElement(4);
  conjunto1.insertElement(8);
  conjunto1.insertElement(82);
  conjunto1.print();
  
  conjunto1.deleteElement(4);
  conjunto1.print();
  conjunto2.print();
  
  IntegerSet conjunto3;
  conjunto3 = unionOfSets(conjunto1, conjunto2);
  conjunto3.print();
  
  IntegerSet conjunto4;
  conjunto4 = intersectionOfSets(conjunto1, conjunto2);
  conjunto4.print();
  
  return 0;
}
