#include "dominios_pig.h"

#include <iostream>

// Matricula: 190134330
// Eduardo Augusto Volpi
void Nota::validar(int valor){
    bool found = false;
    if(valor>=0 && valor<=5) {found = true;}
    if(!found) {throw invalid_argument("Argumento invalido.");}
}

void Nota::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

