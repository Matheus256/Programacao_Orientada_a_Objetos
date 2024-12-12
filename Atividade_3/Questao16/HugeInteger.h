#pragma once

#include <iostream>
#include <string>
#include <array>
#include <cctype>

class HugeInteger{
public:
  HugeInteger(std::string);
  
  void input(std::string numero);
  void output() const;
  
  void add(const HugeInteger &);
  bool isEqualTo(const HugeInteger &) const;
  bool isNotEqualTo(const HugeInteger &) const;
  
  bool isGreaterThan(const HugeInteger &) const;
  bool isLessThanOrIqual(const HugeInteger &) const;
  
  bool isLessThan(const HugeInteger &) const;
  bool isGreaterThanOrIqual(const HugeInteger &) const;
  
private:
  std::array<char, 40> num;
  int numTam;
};
