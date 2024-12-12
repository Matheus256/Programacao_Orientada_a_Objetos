#include "HugeInteger.h"

HugeInteger::HugeInteger(std::string numero){
  input(numero);
}

void HugeInteger::input(std::string numero){
  for(int i = 0; i < 40; i++)
    num[i] = '0';
    
  numTam = numero.size();
  if(numTam > 40){
    std::cout << "Tamanho limite excedido!\n";
    numTam = 0;
    //num[0] = '0';
  } else {
    for(int i = numTam - 1; i > -1; i--){
      if(!(isdigit(numero[i]))){
        std::cout << "Não é um número!\n";
        numTam = 0;
        break;
      }
      num[numTam - i - 1] = numero[i];
       
    }
  }
}

void HugeInteger::output() const{
  for(int i = numTam - 1; i > -1; i--)
    std::cout << num[i];
}

void HugeInteger::add(const HugeInteger &num2){
  int excedente{0}, soma{0};
  
  for(int i = 0; i < num2.numTam; i++){
    soma = (num[i] - '0') + (num2.num[i] - '0') + excedente;
    excedente = soma/10;
    num[i] = (soma % 10) + '0';
  }
  
  if(excedente >= 1){
    soma = (num[num2.numTam] - '0') + excedente;
    num[num2.numTam] = (num[num2.numTam] - '0') + soma + '0';
    numTam++;
  }
}

bool HugeInteger::isEqualTo(const HugeInteger &num2) const{
  if(numTam != num2.numTam)
    return false;
    
  for(int i = 0; i < numTam; i++)
    if(num[i] != num2.num[i])
      return false;
      
  return true;
}

bool HugeInteger::isNotEqualTo(const HugeInteger &num2) const{
  return !(isEqualTo(num2));
}

bool HugeInteger::isGreaterThan(const HugeInteger &num2) const{
  if(numTam > num2.numTam)
    return true;
    
  if(numTam < num2.numTam)
    return false;
  
  for(int i = numTam - 1; i > - 1; i--)
    if(num[i] < num2.num[i])
      return false;
  
  if(isEqualTo(num2))
    return false;
  
  return true;
}

bool HugeInteger::isLessThanOrIqual(const HugeInteger &num2) const{
  return !(isGreaterThan(num2));
}

bool HugeInteger::isLessThan(const HugeInteger &num2) const{
  if(numTam < num2.numTam)
    return true;
    
  if(numTam > num2.numTam)
    return false;
    
  for(int i = numTam - 1; i > -1; i--)
    if(num[i] > num2.num[i])
      return false;
      
  if(isEqualTo(num2))
    return false;
    
  return true;
}

bool HugeInteger::isGreaterThanOrIqual(const HugeInteger &num2) const{
  return !(isLessThan(num2));
}

