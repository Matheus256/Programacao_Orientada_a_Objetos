#pragma once

#include <iostream>

class IntegerSet{
  
  friend std::ostream &operator<<(std::ostream &, const IntegerSet &);

public:
  IntegerSet();
  
  IntegerSet(int *arr, int tamanho);
  
  IntegerSet &operator<<(int);
  IntegerSet &operator>>(int);
  
  IntegerSet operator|(const IntegerSet &);
  IntegerSet operator&(const IntegerSet &);
  
private:
  int array[100];
};
