#pragma once

#include <iostream>
#include <string>
#include <array>
#include <cctype>

class HugeInteger{

  friend std::ostream &operator<<(std::ostream &, const HugeInteger &);

public:
  HugeInteger(std::string = "0");
  
  HugeInteger &operator=(const std::string &);
  
  HugeInteger operator+(const HugeInteger &) const;
  HugeInteger &operator+=(const HugeInteger &);
  
  bool operator==(const HugeInteger &) const;
  bool operator!=(const HugeInteger &) const;
  
  bool operator>(const HugeInteger &) const;
  bool operator<=(const HugeInteger &) const;
  
  bool operator<(const HugeInteger &) const;
  bool operator>=(const HugeInteger &) const;
  
  std::string toString() const;
  
private:
  std::array<char, 40> num;
  int numTam;
};
