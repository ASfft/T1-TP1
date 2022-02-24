//
// Created by Eduli on 24/02/2022.
//

#ifndef T1_TP1_DOMINIOS_PIG_H
#define T1_TP1_DOMINIOS_PIG_H
#include <stdexcept>

using namespace std;

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
#endif //T1_TP1_DOMINIOS_PIG_H
