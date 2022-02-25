#ifndef T1_TP1_TESTES_H
#define T1_TP1_TESTES_H

#include "dominios.h"
#include "entidades.h"

class TUCodigo {
private:
    const string VALOR_VALIDO = "0000019";
    const string VALOR_INVALIDO = "0000000";
    Codigo *codigo;
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

class TUCidade {
private:
    const string VALOR_VALIDO = "Hong Kong";
    const string VALOR_INVALIDO = "Brasilia";
    Cidade *cidade;
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


class TUData {
private:
    const string VALOR_VALIDO = "26-Nov-2001";
    const string VALOR_INVALIDO = "29-Fev-2000";
    Data *data;
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


class TUDescricao {
private:
    const string VALOR_VALIDO = "Descricao valida.";
    const string VALOR_INVALIDO = "Descricao invalida..";
    Descricao *descricao;
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

class TUDuracao {
private:
    const static int VALOR_VALIDO = 30;
    const static int VALOR_INVALIDO = 20;
    Duracao *duracao;
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

#endif //T1_TP1_TESTES_H
