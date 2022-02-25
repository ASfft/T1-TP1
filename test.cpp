//
// Created by asffm on 2/24/22.
//


#include <iostream>
#include <string>
#include "dominios.h"
#include <cstring>
#include <vector>


using namespace std;

int main(){
    string valor = "12:33";
    size_t separador = valor.find(':');
    int horas = stoi(valor.substr(0, separador));
    int minutos = stoi(valor.substr(separador + 1, string::npos));
    cout << horas << minutos;
};