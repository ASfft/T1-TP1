#include "dominios_pedro.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


// Matricula: 200049682
// Pedro Brazil Suffert

//Endereco:
void Endereco::validar(string valor){
    size_t len = valor.length();
    if (len < 0 || len > 20)
        throw invalid_argument("Argumento invalido.");

    for (int initial = 0; initial < 2; initial++) {
        for (int i = initial; i < len - 1; i += 2) {
            char c = valor[i];
            char next_c = valor[i + 1];
            if (c == next_c && (c == ' ' || c == '.'))
                throw invalid_argument("Argumento invalido.");
        }
    }
}

void Endereco::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

// Matricula: 200049682
// Pedro Brazil Suffert

//Horario:
void Horario::validar(string valor){
    size_t separador = valor.find(':');
    if (separador == -1)
        throw invalid_argument("Argumento invalido.");

    string horas = valor.substr(0, separador);
    string minutos = valor.substr(separador+1, string::npos);

    if ( horas.length() != 2 || minutos.length() != 2)
        throw invalid_argument("Argumento invalido.");

    int intHoras = stoi(horas);
    int intMinutos = stoi(minutos);

    if ((intHoras < 0  || intHoras > 23) || (intMinutos < 0 || intMinutos > 59))
        throw invalid_argument("Argumento invalido.");
}

void Horario::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}


// Matricula: 200049682
// Pedro Brazil Suffert

//Idioma:
void Idioma::validar(string valor){
    const string idiomas_validos[10] = {
            "Ingles",
            "Chines Mandarim",
            "Hindi",
            "Espanhol",
            "Frances",
            "Arabe",
            "Bengali",
            "Russo",
            "Portugues",
            "Indonesio",
    };
    bool found = false;
    for(string idioma: idiomas_validos){
        if(idioma == valor){
            found = true;
        }
    }
    if(!found)
        throw invalid_argument("Argumento invalido.");
}

void Idioma::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}


// Matricula: 200049682
// Pedro Brazil Suffert

//Nome:
void Nome::validar(string valor) {
    size_t len = valor.length();
    if (len < 5 || len > 20)
        throw invalid_argument("Argumento invalido.");
    for (int i = 0; i < len; i++) {
        char c = valor[i];
        char next_c = valor[i + 1];
        char prev_c = valor[i - 1];
        if (c == '.' && !((prev_c >= 65 && prev_c <= 90) || (prev_c >= 97 && prev_c <= 122)))
            throw invalid_argument("Argumento invalido.");
        if (c == '.' && (next_c != ' ' or i == len - 1))
            throw invalid_argument("Argumento invalido.");
        int valor_ascii = (int) c;
        if (!((valor_ascii >= 65 && valor_ascii <= 90) || (valor_ascii >= 97 && valor_ascii <= 122) ||
              valor_ascii == 32 ||
              valor_ascii == 46))
            throw invalid_argument("Argumento invalido.");
    }
}

void Nome::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
