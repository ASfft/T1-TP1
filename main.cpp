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
        case TUEmail::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUEmail::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUEndereco testeG;

    switch(testeG.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUEndereco::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUHorario testeH;

    switch(testeH.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUHorario::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUIdioma testeI;

    switch(testeI.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUIdioma::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUTitulo testeJ;

    switch(testeJ.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUTitulo::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUSenha testeK;

    switch(testeK.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUSenha::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUNota testeL;

    switch(testeL.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUNota::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUNome testeM;

    switch(testeM.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUNome::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    return 0;
}
