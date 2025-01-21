#include "Funcionario.h"

std::ostream &operator<<(std::ostream &out, const Funcionario &funcionario){
  std::string CPFformato{""}, CPF{funcionario.getCPF()};
  for(int i = 0; i < CPF.size(); i++){
    CPFformato += CPF[i];
    if( i == 2 || i == 5 )
      CPFformato += ".";
    else if (i == 8)
      CPFformato += "-";  
  }

  out  << std::format("Dados do Funcionario:\n  Nome: {},\n  CPF: {},\n  Matricula: {},\n  Salario: R${},\n  Carga horária mensal: {},\n  Horas trabalhadas: {}", funcionario.nome, CPFformato, funcionario.matricula, funcionario.salario, funcionario.carga_horaria_mensal, funcionario.horas_trabalhadas) << std::endl;
  
  return out;
}

Funcionario::Funcionario(std::string nome, std::string CPF, std::string matricula, double salario, int carga_horaria, float horas_trabalhadas): PessoaFisica(nome, CPF){
  setMatricula(matricula);
  setSalario(salario);
  setCargaHoraria(carga_horaria);
  setHorasTrabalhadas(horas_trabalhadas);
}

void Funcionario::setHorasTrabalhadas(float horas){
  if(horas < 0)
    horas_trabalhadas = 0;
  else if (horas > carga_horaria_mensal)
    horas_trabalhadas = carga_horaria_mensal;
  else
    horas_trabalhadas = horas;
}

double Funcionario::calculaSalarioBruto() const{
  return salario*(horas_trabalhadas/carga_horaria_mensal);
}

