#include <iostream>

int resposta();

int main(){
	std::cout << "Na primeira vez obtemos: " << resposta() << std::endl;
	std::cout << "Na segunda vez: " << resposta() << std::endl;
	std::cout << "Na terceira vez: " << resposta() << std::endl;
	std::cout << "Na quarta vez: " << resposta() << std::endl;
	std::cout << "E assim por diante.";
	return 0;
}

int resposta(){
	static int contador = 0;
	return contador++;
}
