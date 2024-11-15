#include <iostream>

template <typename T>
void swap(T *p1, T *p2){
	T aux{*p1};
	*p1 = *p2;
	*p2 = aux;
    
	return;
}

int main(){
	double a, b;
	
	std::cout << "Informe dois numeros: ";
	std::cin >> a >> b;
	
	swap(&a, &b);
	
	std::cout << "Agora os valores são: " << a << " " << b << std::endl;
	 
	return 0;
}

