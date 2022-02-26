#ifndef T1_TP1_TESTES_H
#define T1_TP1_TESTES_H

#include "dominios.h"
#include "entidades.h"

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
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

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
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

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
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

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
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

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
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

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
class TUEmail {
private:
    const string VALOR_VALIDO = "joazinho.1-2/3@gmail.com";
    const string VALOR_INVALIDO = "joazinho.(1-2/3@gmail.com";
    Email *email;
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

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi
class TUTitulo {
private:
    const string VALOR_VALIDO = "Zaicrtsha";
    const string VALOR_INVALIDO = "z  t.. f";
    Titulo *titulo;
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

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi
class TUSenha {
private:
    const string VALOR_VALIDO = "Ame189";
    const string VALOR_INVALIDO = "123456";
    Senha *senha;
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

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi
class TUNota {
private:
    const static int VALOR_VALIDO = 3;
    const static int VALOR_INVALIDO = 11;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

#endif //T1_TP1_TESTES_H
