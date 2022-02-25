#include "testes_pedro.h"

void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setValor(VALOR_VALIDO);
        if (endereco->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioSucesso(){
    try{
        horario->setValor(VALOR_VALIDO);
        if (horario->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha(){
    try{
        horario->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (horario->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUIdioma::setUp(){
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown(){
    delete idioma;
}

void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setValor(VALOR_VALIDO);
        if (idioma->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (idioma->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

