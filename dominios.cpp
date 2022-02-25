#include "dominios.h"

#include <iostream>
#include <string>

using namespace std;

// Matricula: 200015095
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
    if(!found) throw invalid_argument("Argumento invalido.");
}

void Cidade::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}


// Matricula: 200015095
// Augusto Suffert Monteiro

//Codigo:
void Codigo::validar(string valor){
    if (valor.length() != 7) throw invalid_argument("Argumento invalido.");
    int i;
    int soma = 0;
    for (i=5; i>=0; i--) {
        if(valor[i] >= '0' && valor[i] <= '9'){
            soma += (valor[i] - '0')*(i+2)*10;
        } else throw invalid_argument("Argumento invalido.");
    }
    if (soma % 11 != (valor[valor.length() - 1] - '0') || soma == 0) throw invalid_argument("Argumento invalido.");
}

void Codigo::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
