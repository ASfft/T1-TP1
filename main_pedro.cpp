#include <iostream>

#include "entidades.h"
#include "testes_pedro.h"

using namespace std;

int main() {

    TUEndereco testeF;

    switch(testeF.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUEndereco::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUHorario testeG;

    switch(testeG.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUHorario::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUIdioma testeH;

    switch(testeH.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUIdioma::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    return 0;
}
