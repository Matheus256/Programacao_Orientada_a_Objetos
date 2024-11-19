#pragma once

#include <string>
#include <format>

using std::string, std::format;

class Data{
public:
  Data(int dia, int mes, int ano);
  
  void setDia(int dia);
  int getDia() const;
  
  void setMes(int mes);
  int getMes() const;
  
  void setAno(int ano);
  int getAno() const;
  
  string toString() const;
  
private:
  int m_dia;
  int m_mes;
  int m_ano;
};
