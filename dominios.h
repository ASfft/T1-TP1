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


#endif //T1_TP1_DOMINIOS_H
