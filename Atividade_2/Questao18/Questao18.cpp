#include <format>
#include "ContaBanco.h"

using std::format;

int main(){
  ContaBanco conta1{2000.0}, conta2{235.2}, conta3{-10};
  
  conta1.debitar(735);
  conta2.creditar(35);
  
  cout << format("Saldo da primeira conta é R${}\n", conta1.getSaldo());
  cout << format("Saldo da segunda conta é R${}\n", conta2.getSaldo());
  cout << format("Saldo da terceira conta é R${}\n", conta3.getSaldo());
  cout << endl;
  
  conta2.debitar(3000.5);
  conta1.creditar(10000);
  conta3.creditar(1000);
  cout << endl;
  
  cout << format("Saldo da primeira conta é R${}\n", conta1.getSaldo());
  cout << format("Saldo da segunda conta é R${}\n", conta2.getSaldo());
  cout << format("Saldo da terceira conta é R${}\n", conta3.getSaldo());
  cout << endl;
  
  return 0;
}
