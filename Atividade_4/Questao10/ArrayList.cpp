#include "ArrayList.h"

void somaArray(ArrayList &arrayList, int add){
  for(int i = 0; i < arrayList.pos; i++)
    arrayList.arr[i] += add;
}

void subArray(ArrayList &arrayList, int sub){
  for(int i = 0; i < arrayList.pos; i++)
    arrayList.arr[i] -= sub;
}

void mulArray(ArrayList &arrayList, int mult){
  for(int i = 0; i < arrayList.pos; i++)
    arrayList.arr[i] *= 2;
}

void divArray(ArrayList &arrayList, int div){
  for(int i = 0; i < arrayList.pos; i++)
    arrayList.arr[i] /= div; 
}

ArrayList::ArrayList(int tam): pos{0}{
  if(tam > 0){
    this->tam = tam;
    arr = new int[tam];
  } else {
    arr = nullptr;
    this->tam = 0;
  }
}

ArrayList::~ArrayList(){
  if(arr)
    delete[] arr; 
}

ArrayList &ArrayList::add(int valor){
  if(pos >= tam)
    throw std::length_error("Limite de elementos do ArrayList atingido");
    
  arr[pos++] = valor;
  
  return *this;
}
  
void ArrayList::print() const{
  std::cout << "[";
  for(int i = 0; i < pos; i++)
    std::cout << " " << arr[i] << " ";
  std::cout << "]\n"; 
}

ArrayList &ArrayList::remove(int elemento){
  for(int i = 0; i < pos; i++){
    if(arr[i] == elemento){
      for(int j = i; j < pos -1; j++)
        arr[j] = arr[j + 1];
      pos--;
      return *this;
    }
  }
    
  return *this;
}

ArrayList &ArrayList::removeEl(int elemento){
  for(int i = 0; i < pos; i++){
    if(arr[i] == elemento){
      for(int j = i; j < pos - 1; j++)
        arr[j] = arr[j + 1];
      pos--;
    }
  }
  
  return *this;
}

int ArrayList::busca(int indice){
  if(indice < 0 || indice >= pos)
    throw std::out_of_range("Indice fora dos limites do ArrayList");
    
  return arr[indice];
}
