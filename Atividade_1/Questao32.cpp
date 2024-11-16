#include <iostream>
#include <vector>

using std::vector;

//Cabeçalhos das funções criadas
bool ehprimo(const int &);
bool verifica_vector(auto &);

int main(){
	vector meuVector{1, 4, 6, 8, 10, 15, 21, 7};
	
	if(verifica_vector(meuVector))
		std::cout << "No vector tem numero primo\n";
	else
		std::cout << "No vector não tem numero primo\n";
	
	return 0;
}

//Implementação das funções criadas

bool verifica_vector(auto &vec){
	for(const auto &n : vec)
		if(ehprimo(n))
			return true;
			
	return false;
}

bool ehprimo(const int &num){
	if(num <= 1)
		return false;
		
	for(int i = 2; i < num; i++)
		if(num % i == 0)
			return false;
			
	return true;
}
