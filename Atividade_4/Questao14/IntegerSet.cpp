#include "IntegerSet.h"

IntegerSet::IntegerSet(){
  for(int i = 0; i < 100; i++)
    array[i] = 0;
}
  
IntegerSet::IntegerSet(int *arr, int tamanho){
  for(int i = 0; i < 100; i++)
    array[i] = 0;
    
  for(int i = 0; i < tamanho; i++)
    insertElement(arr[i]);
}

void IntegerSet::insertElement(int num){
  if(num >= 100 || num < 0){
    std::cout << "Indice inválido!" << std::endl;
    return;
  }
  
  array[num] = 1;
}

void IntegerSet::deleteElement(int num){
  if(num >= 100 || num < 0){
    std::cout << "Indice inválido!" << std::endl;
    return;
  }
  
  array[num] = 0;
}

void IntegerSet::print() const{
  std::cout << "{";
  for(int i = 0; i < 100; i++){
    if(array[i] == 1)
      std::cout << " " << i << " ";
  }
  std::cout << "}" << std::endl;
}

//Hora de implementar as funções friends

IntegerSet unionOfSets(const IntegerSet &set1, const IntegerSet &set2){
  IntegerSet resultSet;
  for(int i = 0; i < 100; i++){
    if(set1.array[i] == 1 || set2.array[i] == 1)
      resultSet.array[i] = 1;
  }
  
  return resultSet;
}

IntegerSet intersectionOfSets(const IntegerSet &set1, const IntegerSet &set2){
  IntegerSet resultSet;
  for(int i = 0; i < 100; i++){
    if(set1.array[i] == 1 && set2.array[i] == 1)
      resultSet.array[i] = 1;
  }
  
  return resultSet;
}
