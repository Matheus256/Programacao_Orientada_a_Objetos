#pragma once

#include <iostream>

class IntegerSet{
  
  friend IntegerSet unionOfSets(const IntegerSet &, const IntegerSet &);
  friend IntegerSet intersectionOfSets(const IntegerSet &, const IntegerSet &);

public:
  IntegerSet();
  
  IntegerSet(int *arr, int tamanho);
  
  void insertElement(int);
  void deleteElement(int);
  
  void print() const;
private:
  int array[100];
};
