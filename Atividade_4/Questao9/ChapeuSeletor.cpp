#include "ChapeuSeletor.h"

void ChapeuSeletor::recepcionar() const{
  std::cout << "Não há nada escondido em sua cabeça que o Chapéu Seletor não consiga ver, por isso é só me porem na cabeça que vou dizer em que casa de Hogwarts deverão ficar\n";
}

std::string ChapeuSeletor::sortearCasa() const{
  //std::srand(std::time(nullptr)); //Instante atual para ser a semente
  int valor = std::rand() % 4; //Valor aleatório entre 0, 1, 2 e 3
  std::string casa;
  
  switch(valor){
  case 0:
    casa = "Grifinória";
    break;
  case 1:
    casa = "Corvinal";
    break;
  case 2:
    casa = "Lufa-Lufa";
    break;
  case 3:
    casa = "Sonserina";
    break;
  }
  
  return casa;
}
