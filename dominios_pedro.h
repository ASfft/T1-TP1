#ifndef T1_TP1_DOMINIOS_PEDRO_H
#define T1_TP1_DOMINIOS_PEDRO_H

#include <stdexcept>

using namespace std;


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


#endif //T1_TP1_DOMINIOS_PEDRO_H
