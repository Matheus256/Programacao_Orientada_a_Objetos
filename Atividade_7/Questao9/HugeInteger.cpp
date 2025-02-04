#include "HugeInteger.h"

std::string HugeInteger::toString() const{
  std::string strNum{""};
  for(int i = this->numTam - 1; i > -1; i--)
    strNum += this->num[i];
  
  return strNum;
}

std::ostream &operator<<(std::ostream &out, const HugeInteger &integer){
  out << integer.toString();
  
  return out;
}

HugeInteger::HugeInteger(std::string numero){
  *this = numero;
}

HugeInteger &HugeInteger::operator=(const std::string &numero){
  for(int i = 0; i < 40; i++)
    num[i] = '0';
    
  numTam = numero.size();
  if(numTam > 40){
    std::cout << "Tamanho limite excedido!\n";
    numTam = 1;
  } else {
    for(int i = numTam - 1; i > -1; i--){
      if(!(isdigit(numero[i]))){
        std::cout << "Não é um número!\n";
        numTam = 1;
        break;
      }
      num[numTam - i - 1] = numero[i];
       
    }
  }
  
  return *this;
}

HugeInteger HugeInteger::operator+(const HugeInteger &num2) const{
  int excedente{0}, soma{0};
  
  HugeInteger somaInteger{this->toString()};
  
  for(int i = 0; i < num2.numTam; i++){
    soma = (this->num[i] - '0') + (num2.num[i] - '0') + excedente;
    excedente = soma/10;
    somaInteger.num[i] = (soma % 10) + '0';
  }
  
  if(excedente >= 1){
    soma = (somaInteger.num[num2.numTam] - '0') + excedente;
    somaInteger.num[num2.numTam] = (somaInteger.num[num2.numTam] - '0') + soma + '0';
    somaInteger.numTam++;
  }
  
  return somaInteger;
}

HugeInteger &HugeInteger::operator+=(const HugeInteger &numero){
  *this = (*this + numero).toString();
  return *this;
}

bool HugeInteger::operator==(const HugeInteger &num2) const{
  if(this->numTam != num2.numTam)
    return false;
    
  for(int i = 0; i < this->numTam; i++)
    if(this->num[i] != num2.num[i])
      return false;
      
  return true;
}

bool HugeInteger::operator!=(const HugeInteger &num2) const{
  return !(*this == num2);
}

bool HugeInteger::operator>(const HugeInteger &num2) const{
  if(this->numTam > num2.numTam)
    return true;
    
  if(this->numTam < num2.numTam)
    return false;
  
  for(int i = this->numTam - 1; i > - 1; i--){
    if(this->num[i] < num2.num[i])
      return false;
    else if(this->num[i] > num2.num[i])
      return true;
  }
  
  if(*this == num2)
    return false;
  
  return true;
}

bool HugeInteger::operator<=(const HugeInteger &num2) const{
  return !(*this > num2);
}

bool HugeInteger::operator<(const HugeInteger &num2) const{
  return (num2 > *this);
}


bool HugeInteger::operator>=(const HugeInteger &num2) const{
  return !(*this < num2);
}

