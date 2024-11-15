#include <iostream>
#include <string>
#include <cctype>

void para_minusculo(auto &);

int main(){
    std::string s;
	
    std::cout << "Informa uma string: ";
    std::cin >> s;
	
    para_minusculo(s);
		
    std::cout << "Todas as letras em minusculo --> " << s << std::endl;
	
    return 0;
}

void para_minusculo(auto &str){
    for(auto &c : str)
        c = tolower(c);
}
