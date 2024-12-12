#include <iostream>
#include <string>
#include <format>

#include "HugeInteger.h"

using std::cout, std::endl, std::format;

int main(){
  HugeInteger num1{"1234567891234"}, num3{"9111111111127"};
  
  cout << "Vamos somar esses numeros gigantes:\n";
  num1.output();
  cout << " + ";
  num3.output();
  cout << " = ";

  num1.add(num3);
  
  num1.output();
  cout << endl << endl;
  
  cout << "Comparações entre ";
  num1.output();
  cout << " e ";
  num3.output();
  cout << ", respectivamente:\n";
  cout << format(" <  : {}\n", num1.isLessThan(num3) ? "Verdadeiro": "Falso");
  cout << format(" >  : {}\n", num1.isGreaterThan(num3) ? "Verdadeiro": "Falso");
  cout << format(" <=  : {}\n", num1.isLessThanOrIqual(num3) ? "Verdadeiro": "Falso");
  cout << format(" >=  : {}\n", num1.isGreaterThanOrIqual(num3) ? "Verdadeiro": "Falso");
  cout << format(" =  : {}\n", num1.isEqualTo(num3) ? "Verdadeiro": "Falso");
  cout << format(" !=  : {}\n\n", num1.isNotEqualTo(num3) ? "Verdadeiro": "Falso");
  
  HugeInteger num4{"11111111"}, num5{"11111111"};
  
  cout << "Comparações entre ";
  num4.output();
  cout << " e ";
  num5.output();
  cout << ", respectivamente:\n";
  cout << format(" <  : {}\n", num4.isLessThan(num5) ? "Verdadeiro": "Falso");
  cout << format(" >  : {}\n", num4.isGreaterThan(num5) ? "Verdadeiro": "Falso");
  cout << format(" <=  : {}\n", num4.isLessThanOrIqual(num5) ? "Verdadeiro": "Falso");
  cout << format(" >=  : {}\n", num4.isGreaterThanOrIqual(num5) ? "Verdadeiro": "Falso");
  cout << format(" =  : {}\n", num4.isEqualTo(num5) ? "Verdadeiro": "Falso");
  cout << format(" !=  : {}\n\n", num4.isNotEqualTo(num5) ? "Verdadeiro": "Falso");
  
  HugeInteger num6{"12a34"}; //Tentando passar um não número
  
  return 0;
}
