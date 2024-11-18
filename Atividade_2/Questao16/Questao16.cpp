#include <iostream>
#include <format>

#include "Empregado.h"

using std::cout, std::format, std::endl;

int main(){
  Empregado empregado1{"Matheus", "Nascimento", -100};
  Empregado empregado2{"Isabella", "tito", 20000.8};
  
  cout << format("O salario de {} {} é de {}\n", 
      empregado1.getNome(),
      empregado1.getSobrenome(),
      empregado1.getSalario());
  
  cout << format("O salario e {} {} é de {}\n\n",
      empregado2.getNome(),
      empregado2.getSobrenome(),
      empregado2.getSalario());
  
  empregado1.setSalario(15752.62);
  empregado2.setSobrenome("Tito");
  
  empregado1.setSalario(empregado1.getSalario() * 1.1);
  empregado2.setSalario(empregado2.getSalario() * 1.1);
  
  cout << format("O novo salario de {} {} é de {}\n",
      empregado1.getNome(),
      empregado1.getSobrenome(),
      empregado1.getSalario());
  
  cout << format("O novo salario de {} {} é de {}\n",
      empregado2.getNome(),
      empregado2.getSobrenome(),
      empregado2.getSalario());
  
  return 0;
}
