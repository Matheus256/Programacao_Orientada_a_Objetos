#include <iostream>

template <typename T>
void swap(T &n1, T &n2){
	T aux{n1};
	n1 = n2;
	n2 = aux;
	
	return;
}

int main(){
	int a, b;
	
	std::cout << "Digite dois numeros inteiro (a e b): ";
	std::cin >> a >> b;
	
	swap(a,b);
	
	std::cout << "Temos agora a = " << a << " e b = " << b << std::endl;
	
	return 0;
}

