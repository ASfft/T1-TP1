#ifndef T1_TP1_DOMINIOS_H
#define T1_TP1_DOMINIOS_H

#include <stdexcept>

using namespace std;

// Matricula: 200015095
// Augusto Suffert Monteiro
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
