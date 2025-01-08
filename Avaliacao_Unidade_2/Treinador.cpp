#include "Treinador.h"

Treinador::Treinador(std::string nome){
  this->nome = nome;
}
  
void Treinador::capturar(Pokemon *pokemon){
  if(pokebolas.size() >= 6)
    std::cout << "Todas as seis pokebolas estão ocupadas\n";
  else {
    Pokebola pokebola;
    pokebola.setarPokemon(pokemon);
    pokebolas.push_back(pokebola);
  }
}

void Treinador::vai(std::string nome){
  for(const auto &pokebola : pokebolas){
    if(pokebola.getPokemon()->getNome() == nome){
      pokebola.getPokemon()->emitirSom();
      return;
    }
  }
  
  std::cout << "Ooooops. Ainda não capturei esse pokemon!\n";
}
