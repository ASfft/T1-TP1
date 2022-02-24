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
    int valor;
    void validar(int);
public:
    void setValor(int);
    int getValor() const;
};


inline int Nota::getValor() const{
    return valor;
}


#endif //T1_TP1_DOMINIOS_H
