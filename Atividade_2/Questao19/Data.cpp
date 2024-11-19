#include "Data.h"

Data::Data(int dia, int mes, int ano){
  setDia(dia);
  setMes(mes);
  setAno(ano);
}

void Data::setDia(int dia){
  m_dia = dia;
}

int Data::getDia() const{
  return m_dia;
}

void Data::setMes(int mes){
  m_mes = ((mes < 1 || mes > 12) ? 1 : mes);
}

int Data::getMes() const{
  return m_mes;
}

void Data::setAno(int ano){
  m_ano = ano;
}

int Data::getAno() const{
  return m_ano;
}

string Data::toString() const{
  return format("{:02d}/{:02d}/{:02d}", getDia(), getMes(), getAno());
}
