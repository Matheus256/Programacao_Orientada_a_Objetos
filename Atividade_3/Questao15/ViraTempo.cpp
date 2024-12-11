#include "ViraTempo.h"

ViraTempo::ViraTempo(int n): limite{n}, estado{0}, passo{1}{
  //Não ha mais o que fazer
}
  
void ViraTempo::avancarTempo(){
  estado += passo;

  //Verificação o estado está dentro dos limites
  if(estado > limite)
    estado = limite;
  else if(estado < 0)
    estado = 0;
}

void ViraTempo::virarTempo(){
  passo = (-1)*passo;
}

void ViraTempo::mostrarTempo() const{
  std::cout << estado << std::endl;
}

