#include "dominios.h"

#include <iostream>
#include <string>
#include <vector>

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
    bool found = false;
    for(int i = 0; i < cidades_validas->length(); i++){
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

// Matricula: 200015095
// Augusto Suffert Monteiro

//Data:
void Data::validar(string valor){
    vector<string> data_dividida;
    const string meses[12] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
    int dias_meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    size_t last = 0;
    size_t next;
    while ((next = valor.find('-', last)) != string::npos) {
        data_dividida.push_back(valor.substr(last, next-last));
        last = next + 1;
    }
    data_dividida.push_back(valor.substr(last));

    if (data_dividida.size() != 3) throw invalid_argument("Argumento invalido.");

    if (data_dividida[0].length() != 2) throw invalid_argument("Argumento invalido.");
    int dia = stoi(data_dividida[0]);
    int ano = stoi(data_dividida[2]);

    if (ano < 2000  || ano > 9999) throw invalid_argument("Argumento invalido.");

    bool ano_bissexto = (ano % 4 == 0 && ano % 100 != 0);
    if (ano_bissexto) dias_meses[1] = 29;

    bool found = false;
    int limite_dia;
    for(int i = 0; i < meses->length(); i++){
        if(meses[i] == data_dividida[1]){
            found = true;
            limite_dia = dias_meses[i];
        }
    }
    if(!found) throw invalid_argument("Argumento invalido.");
    if (dia < 1 || dia > limite_dia) throw invalid_argument("Argumento invalido.");
}

void Data::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
