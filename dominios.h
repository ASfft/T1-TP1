#ifndef T1_TP1_DOMINIOS_H
#define T1_TP1_DOMINIOS_H

#include <stdexcept>

using namespace std;


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


#endif //T1_TP1_DOMINIOS_H
