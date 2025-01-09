#include <iostream>

#include "Pessoa.h"
#include "Agenda.h"

using namespace std;

int main () {
	string linha = "---------------------------------------------";
	Agenda A{10};

	A.armazenaPessoa("Abel", 22, 1.78);
	A.armazenaPessoa(Pessoa("Tiago", 20, 1.80));
	A.imprimePovo();
	cout << linha << endl;

	int posicao = A.buscaPessoa("Tiago");
	if (posicao > 0)
    	A.imprimePessoa(posicao);
	cout << linha << endl;

	A.removePessoa("Tiago");
	A.imprimePovo();
	cout << linha << endl;
	
 	return 0;
}

