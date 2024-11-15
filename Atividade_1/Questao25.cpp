#include <iostream>

int main(){
	float quilometragem = 0;
	float litros = 0;
	double soma_consumo = 0;
	double quilo_litro;
	
	while(1){
		std::cout << "Informe a Quilometragem: ";
		std::cin >> quilometragem;
		
		if (quilometragem == -1)
			break;
		
		std::cout << "Agora informe a quantidade de litros: ";
		std::cin >> litros;
		
		soma_consumo += litros;
		quilo_litro = quilometragem/litros;
		
		std::cout << std::endl;
		
		std::cout << "O consumo foi de " << quilo_litro << " Km/litros\n";
		std::cout << "Até o momento foram consumidos " << soma_consumo << " litros\n\n";
	}
	
	return 0;
}
