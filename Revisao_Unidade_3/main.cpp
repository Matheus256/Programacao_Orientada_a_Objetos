#include <iostream>
#include <array>

using std::cout, std::endl;

#include "Pessoa.h"
#include "Bruxo.h"
#include "Trouxa.h"
#include "ExpressoHogwarts.h"

int main(){
    std::array<Pessoa *,2> meuArray = {new Bruxo("Matheus", "Corvinal", "Lumus"), new Trouxa("Irineu", "111.111.111-11", "Uber")};

    for(int i = 0; i < meuArray.size(); i++){
        meuArray[i]->display();
    }
    cout << endl;
    
    for(int i = 0; i < meuArray.size(); i++)
        delete meuArray[i];
    
    
    ExpressoHogwarts meuExpresso;
    meuExpresso << Bruxo("Matheus", "Corvinal", "Lumus") << Trouxa("Irineu", "111.111.111-11", "Uber");
    cout << meuExpresso << endl;
    
    meuExpresso >> "Irineu";
    cout << meuExpresso << endl;
    
    return 0;

}
