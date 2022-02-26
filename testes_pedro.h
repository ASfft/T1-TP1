#ifndef T1_TP1_TESTES_PEDRO_H
#define T1_TP1_TESTES_PEDRO_H

#include "dominios_pedro.h"
#include "entidades.h"

class TUEndereco {
private:
    const string VALOR_VALIDO = "Rua das Palmeiras 1";
    const string VALOR_INVALIDO = "SQS 102  Bloco A Apto. 101";
    Endereco *endereco;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUHorario {
private:
    const string VALOR_VALIDO = "12:30";
    const string VALOR_INVALIDO = "1230";
    Horario *horario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


class TUIdioma {
private:
    const string VALOR_VALIDO = "Ingles";
    const string VALOR_INVALIDO = "Portunhol";
    Idioma *idioma;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


class TUNome {
private:
    const string VALOR_VALIDO = "Ingles";
    const string VALOR_INVALIDO = "Portunhol";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


#endif //T1_TP1_TESTES_PEDRO_H
