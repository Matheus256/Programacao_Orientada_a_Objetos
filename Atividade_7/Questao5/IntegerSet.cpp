#include "IntegerSet.h"

std::ostream &operator<<(std::ostream &out, const IntegerSet &set){
  out << "{";
  for(int i = 0; i < 100; i++){
    if(set.array[i] == 1)
      out << " " << i << " ";
  }
  out << "}" << std::endl;
  
  return out;
}

IntegerSet::IntegerSet(){
  for(int i = 0; i < 100; i++)
    array[i] = 0;
}
  
IntegerSet::IntegerSet(int *arr, int tamanho){
  for(int i = 0; i < 100; i++)
    array[i] = 0;
    
  for(int i = 0; i < tamanho; i++)
    *this << arr[i];
}

IntegerSet &IntegerSet::operator<<(int num){
  if(num >= 100 || num < 0){
    std::cout << "Indice fora dos limites!" << std::endl;
    return *this;
  }
  
  this->array[num] = 1;
  return *this;
}

IntegerSet &IntegerSet::operator>>(int num){
  if(num >= 100 || num < 0){
    std::cout << "Indice fora dos limites!" << std::endl;
    return *this;
  }
  
  this->array[num] = 0;
  return *this;
}

IntegerSet IntegerSet::operator|(const IntegerSet &set){
  IntegerSet resultSet;
  for(int i = 0; i < 100; i++){
    resultSet.array[i] = this->array[i] || set.array[i];
  }
  
  return resultSet;
}

IntegerSet IntegerSet::operator&(const IntegerSet &set){
  IntegerSet resultSet;
  for(int i = 0; i < 100; i++){
    resultSet.array[i] = this->array[i] && set.array[i];
  }
  
  return resultSet;
}
