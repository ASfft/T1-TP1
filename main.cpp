#include <iostream>

#include "entidades.h"
#include "testes.h"

using namespace std;

int main() {

    TUCodigo testeA;

    switch(testeA.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUCidade testeB;

    switch(testeB.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUData testeC;

    switch(testeC.run()){
        case TUData::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUData::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUDescricao testeD;

    switch(testeD.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUDescricao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUDuracao testeE;

    switch(testeE.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUDuracao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUEmail testeF;

    switch(testeF.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUDuracao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    return 0;
}
