#include <iostream>
#include <string>
#include <cctype>

bool verifica(const auto &);

int main(){
    std::string s;
	
    std::cout << "Leitura da string: ";
    std::cin >> s;
	
    if(verifica(s))
        std::cout << "A string informada tem caracter maiusculo\n";
    else
	std::cout << "A string informada não tem caracter maiusculo\n";
	
    return 0;
}

bool verifica(const auto &str){
    for(const auto &c : str)
        if(isupper(c))
            return true;
    
    return false;
}
