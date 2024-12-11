#pragma once

#include <iostream>

class ViraTempo{
public:
  ViraTempo(int);
  
  void avancarTempo();
  void virarTempo();
  void mostrarTempo() const;
  
  void setLimite(int limite){this->limite = limite;}
  int getLimite() const{return limite;}
  
private:
  int limite;
  int estado;
  int passo;
};
