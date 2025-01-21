#include <iostream>
#include <format>

using std::cout, std::endl, std::format;

#include "Funcionario.h"

int main(){
  Funcionario funcionario{"Matheus", "12345678912"};
  cout << funcionario << endl;
  
  funcionario.setMatricula("12128");
  funcionario.setSalario(10000);
  funcionario.setCargaHoraria(900);
  funcionario.setHorasTrabalhadas(912);
  cout << funcionario << endl;
  
  cout << format("O salario bruto do funcionario {} foi de R${}", funcionario.getNome(), funcionario.calculaSalarioBruto()) << endl;
  
  return 0;
}
