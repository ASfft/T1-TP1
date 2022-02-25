#include "dominios_pig.h"

#include <iostream>

// Matricula: 190134330
// Eduardo Augusto Volpi
void Nota::validar(int valor){
    if(!(valor>=0 && valor<=5)) throw invalid_argument("Argumento invalido.");
}

void Nota::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

