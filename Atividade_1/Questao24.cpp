#include <iostream>
#include <string>

int main(){
    
    float nota1{0}, nota2{0}, nota3{0};
    std::string nome{};
    
    std::cout << "Olá informe seu nome: ";
    std::cin >> nome;
    
    std::cout << std::endl << "Agora informe as tres notas separadas por espaco: ";
    std::cin >> nota1 >> nota2 >> nota3;
    
    double media{(nota1*3 + nota2*4 + nota3*5)/12};
    
    std::cout << "O aluno(a) " << nome << " obteve media " << media << std::endl;

    return 0;
}
