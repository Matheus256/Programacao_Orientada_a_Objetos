#include <iostream>
#include <string>
#include <format>

#include "HugeInteger.h"

using std::cout, std::endl, std::format;

int main(){
  HugeInteger num1{"1234567891234"}, num3{"9111111111127"};
  
  cout << "Vamos somar esses numeros gigantes:\n";
  cout << num1 << " + " << num3 << " = ";

  HugeInteger num = (num1 + num3).toString();
  
  cout << num;
  cout << endl << endl;

  cout << num1 << " + " << num3 << " = " << endl;
  
  num += num1;
  cout << num << endl << endl;
  
  cout << num1 << " == " << num3 << " (" << (num1 == num3 ? "Verdadeiro" : "Falso") << ")" << endl;
  cout << num1 << " == " << num1 << " (" << (num1 == num1 ? "Verdadeiro" : "Falso") << ")" << endl;
  cout << num1 << " > " << num3 << " (" << (num1 > num3 ? "Verdadeiro" : "Falso") << ")" << endl;
  cout << num1 << " < " << num3 << " (" << (num1 < num3 ? "Verdadeiro" : "Falso") << ")" << endl;
  cout << num1 << " != " << num3 << " (" << (num1 != num3 ? "Verdadeiro" : "Falso") << ")" << endl << endl;
  
  cout << "Comparações entre ";
  cout << num << " e " << num3 << ", respectivamente:\n";
  cout << format(" <  : {}\n", (num < num3) ? "Verdadeiro": "Falso");
  cout << format(" >  : {}\n", (num > num3) ? "Verdadeiro": "Falso");
  cout << format(" <=  : {}\n", (num <= num3) ? "Verdadeiro": "Falso");
  cout << format(" >=  : {}\n", (num >= num3) ? "Verdadeiro": "Falso");
  cout << format(" ==  : {}\n", (num == num3) ? "Verdadeiro": "Falso");
  cout << format(" !=  : {}\n\n", (num != num3) ? "Verdadeiro": "Falso");
  
  HugeInteger num4{"11111111"}, num5{"11111111"};
  
  cout << "Comparações entre ";
  cout << num4 << " e " << num5 << ", respectivamente:\n";
  cout << format(" <  : {}\n", (num4 < num5) ? "Verdadeiro": "Falso");
  cout << format(" >  : {}\n", (num4 > num5) ? "Verdadeiro": "Falso");
  cout << format(" <=  : {}\n", (num4 <= num5) ? "Verdadeiro": "Falso");
  cout << format(" >=  : {}\n", (num4 >= num5) ? "Verdadeiro": "Falso");
  cout << format(" ==  : {}\n", (num4 == num5) ? "Verdadeiro": "Falso");
  cout << format(" !=  : {}\n\n", (num4 != num5) ? "Verdadeiro": "Falso");
  
  HugeInteger num6{"12a34"}; //Tentando passar um não número
  
  return 0;
}
