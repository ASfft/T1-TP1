#include <iostream>

#include "testes.h"

using namespace std;

int main() {

    TUCodigo testeA;

    cout << "Teste Codigo:    ";
    switch(testeA.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUCidade testeB;

    cout << "Teste Cidade:    ";
    switch(testeB.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUData testeC;

    cout << "Teste Data:      ";
    switch(testeC.run()){
        case TUData::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUData::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUDescricao testeD;

    cout << "Teste Descricao: ";
    switch(testeD.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUDescricao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUDuracao testeE;

    cout << "Teste Duracao:   ";
    switch(testeE.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUDuracao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUEmail testeF;

    cout << "Teste Email:     ";
    switch(testeF.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUEmail::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUEndereco testeG;

    cout << "Teste Endereco:  ";
    switch(testeG.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUEndereco::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUHorario testeH;

    cout << "Teste Horario:   ";
    switch(testeH.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUHorario::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUIdioma testeI;

    cout << "Teste Idioma:    ";
    switch(testeI.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUIdioma::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUTitulo testeJ;

    cout << "Teste Titulo:    ";
    switch(testeJ.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUTitulo::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUSenha testeK;

    cout << "Teste Senha:     ";
    switch(testeK.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUSenha::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUNota testeL;

    cout << "Teste Nota:      ";
    switch(testeL.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUNota::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUNome testeM;

    cout << "Teste Nome:      ";
    switch(testeM.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUNome::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUExcursao testeN;

    cout << "Teste Excursao:  ";
    switch(testeN.run()){
        case TUExcursao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUExcursao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUUsuario testeO;

    cout << "Teste Usuario:   ";
    switch(testeO.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUUsuario::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUSessao testeP;

    cout << "Teste Sessao:    ";
    switch(testeP.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUSessao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    TUAvaliacao testeQ;

    cout << "Teste Avaliacao: ";
    switch(testeQ.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUAvaliacao::FALHA  : cout << "FALHA   - CODIGO" << endl;
            break;
    }

    return 0;
}
