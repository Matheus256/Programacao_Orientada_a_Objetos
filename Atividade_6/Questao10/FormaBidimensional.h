#pragma once

//Classe abstrata

class FormaBidimensional{
public:
  FormaBidimensional(int numLados): numLados{numLados}{}
  
  //Método virtual puro
  virtual void desenhar() = 0;
  
  virtual void calcularArea() = 0; 
  
  virtual void calcularPerimetro() = 0;
  
private:
  int numLados;
};
