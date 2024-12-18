#pragma once

#include <iostream>
#include <stdexcept>

class ArrayList{
  
  friend void somaArray(ArrayList &, int);
  friend void subArray(ArrayList &, int);
  friend void mulArray(ArrayList &, int);
  friend void divArray(ArrayList &, int);

public:
  ArrayList(int = 1);
  ~ArrayList();
  
  ArrayList &add(int);
  
  //Métodos da Questao 11
  int busca(int);
  ArrayList &remove(int);
  ArrayList &removeEl(int);
  
  void print() const;
private:
  int *arr;
  int tam;
  int pos;
};
