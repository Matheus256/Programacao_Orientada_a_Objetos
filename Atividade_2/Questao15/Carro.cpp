#include "Carro.h"

  Carro::Carro(string marca, string modelo, int ano){
    setMarca(marca);
    setModelo(modelo);
    setAno(ano);
  }
  
  string Carro::getMarca() const{
    return m_marca;
  }
  
  void Carro::setMarca(string marca){
    m_marca = (marca.empty() ? "\"Sem marca\"" : marca);
  }
  
  string Carro::getModelo() const{
    return m_modelo;
  }
  
  void Carro::setModelo(string modelo){
    m_modelo = (modelo.empty() ? "\"Sem modelo\"" : modelo);
  }
  
  int Carro::getAno() const{
    return m_ano;
  }
  
  void Carro::setAno(int ano){
    m_ano = ano;
  }
  
  string Carro::toString() const{
    string resultado{ "Marca: " + getMarca() + ", Modelo: " + getModelo() + ", Ano: " + std::to_string(getAno())};
    return resultado;
  }

