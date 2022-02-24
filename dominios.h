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


class Nota {
private:
    Int valor;
    void validar(Int);
public:
    void setValor(Int);
    Int getValor() const;
};


inline string Nota::getValor() const{
    return valor;
}


#endif //T1_TP1_DOMINIOS_H
