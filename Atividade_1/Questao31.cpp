#include <iostream>
#include <array>

using std::array;

//Cabeçalhos das funções criadas
bool ehprimo(int);
bool verifica_array(auto &);

int main(){
	array meuArray{1,4, 6, 8, 9, 10, 12, 14, 2};
		
	if(verifica_array(meuArray))
		std::cout << "No array tem numero primo\n";
	else
		std::cout << "No array não tem primo\n";
	
	return 0;
}

//Implementação das funções

bool verifica_array(auto &arr){
	for(const auto &n : arr)
		if(ehprimo(n))
			return true;
	
	return false;
}


bool ehprimo(int num){
	if(num <= 1)
		return false;
		
	for (int i = 2; i < num; i++){
		if(num % i == 0)
			return false;
	}
	
	return true;
}
