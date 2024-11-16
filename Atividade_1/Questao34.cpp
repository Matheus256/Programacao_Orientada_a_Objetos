#include <iostream>

int main(){
        std::cout << "Item a)\n";
	for(int i = 1; i < 6; i++){
		for(int j = 0; j < i; j++)
			std::cout << "*";
		 std::cout << std::endl;
	}
	
	std::cout << "\n-----------------\n\n";
	std::cout << "Item b)\n";
	for (int i = 0; i < 5; i++){
	        for(int j = 0; j < i; j++)
	                std::cout << " ";
	        for(int j = 0; j < 5 - i; j++)
	                std::cout << "*";
	        std::cout << std::endl;
	}
	
	std::cout << "\n-----------------\n\n";
	std::cout << "Item c)\n";
	int j;
	for(int i = 0; i < 5; i++){
	        for(j = 0; j < abs(i - 2); j++)
	                std::cout << " ";
	        for(int k = 0; k < abs(-2*j + 5); k++)
	                std::cout << "*";
	        std::cout << std::endl;
	
	}
	
	std::cout << "\n-----------------\n\n";
	std::cout << "Item d)\n";
	
	for(int i = 0; i < 4; i++){
	        for(j = 0; j < 3 - i; j++)
	                std::cout << " ";
	        for(j = 0; j < 2*i - 1; j++)
	                std::cout << "*";
	        std::cout << std::endl;
	}
	
	return 0;
}
