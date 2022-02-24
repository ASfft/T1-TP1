#include "dominios.h"

#include <iostream>

// Matricula: 20015095
// Augusto Suffert Monteiro

//Cidade:
void Cidade::validar(string valor){
    const string cidades_validas[15] = {
            "Hong Kong",
            "Bangkok",
            "Macau",
            "Singapura",
            "Londres",
            "Paris",
            "Dubai",
            "Delhi",
            "Istambul",
            "Kuala Lumpur",
            "Nova Iorque",
            "Antalya",
            "Mumbai",
            "Shenzhen",
            "Phuket",
    };
    int i;
    bool found = false;
    for(i=0; i < cidades_validas->length(); i++){
        if(cidades_validas[i] == valor){
            found = true;
        }
    }
    if(!found) {throw invalid_argument("Argumento invalido.");}
}

void Cidade::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}


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
