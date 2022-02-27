#ifndef T1_TP1_DOMINIOS_H
#define T1_TP1_DOMINIOS_H

#include <stdexcept>

using namespace std;

// Matricula: 200015095
// Augusto Suffert Monteiro

///Padrão para representação de cidade.
///
class Cidade {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Cidade::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro

///
///Padrão para representação de codigo.
///
///Regras de formato:
///
/// - 7 digitos entre 0-9.
class Codigo {
    private:
        string valor;
        static void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro

///Padrão para representação de data.
///
///Regras de formato:
///
/// - DD-MES-AAAA.
class Data {
    private:
        string valor;
        static void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Data::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro

///Padrão para representação de descricao.
///
///Regras de formato:
///
/// - Até 30 caracteres.
class Descricao {
    private:
        string valor;
        static void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Descricao::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro

///Padrão para representação de duracao.
///
///Regras de formato:
///
/// - 30, 60, 90, 120 ou 180.
class Duracao {
    private:
        int valor;
        static void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Duracao::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro

///Padrão para representação de email.
///
///Regras de formato:
///
/// - Valido caso siga o modelo exemplo@dominio
class Email {
    private:
        string valor;
        static void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Email::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert

///Padrão para representação de idioma.
///
class Idioma {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Idioma::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert

///Padrão para representação de horario.
///
///Regras de formato:
///
/// - HH:MM
class Horario {
    private:
        string valor;
        static void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Horario::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert

///Padrão para representação de endereco.
///
///Regras de formato:
///
/// - Até 20 caracteres.
class Endereco {
    private:
        string valor;
        static void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Endereco::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert

///Padrão para representação de nome.
///
///Regras de formato:
///
/// - Válido entre 5 e 20 caracteres.
class Nome {
private:
    string valor;
    static void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Nome::getValor() const {
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi

///Padrão para representação de nota.
///
///Regras de formato:
///
/// - Válido para inteiros entre 0 e 5
class Nota {
    private:
        int valor;
        static void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Nota::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi

///Padrão para representação de senha.
///
///Regras de formato:
///
/// - Válido para 6 caracteres únicios sendo pelo menos um maiúscul, um minúsculo e um dígito
class Senha {
private:
    string valor;
    static void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Senha::getValor() const{
    return valor;
}

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi

///Padrão para representação de titulo.
///
///Regras de formato:
///
/// - Válido entre 5 e 20 letras.
class Titulo {
    private:
        string valor;
        static void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};


inline string Titulo::getValor() const{
    return valor;
}


#endif //T1_TP1_DOMINIOS_H
