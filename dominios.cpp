#include "dominios.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Matricula: 200015095
// Augusto Suffert Monteiro
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
    for(string cidade: cidades_validas){
        if(cidade == valor){
            found = true;
        }
    }
    if(!found)
        throw invalid_argument("Argumento invalido.");
}

void Cidade::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
void Codigo::validar(string valor){
    if (valor.length() != 7)
        throw invalid_argument("Argumento invalido.");
    int multiplicador = 7;
    int soma = 0;
    for (int i = 0; i < 6; i++) {
        if(valor[i] >= '0' && valor[i] <= '9'){
            soma += (valor[i] - '0')*multiplicador--;
        } else
            throw invalid_argument("Argumento invalido.");
    }
    if ((soma*10) % 11 != (valor[valor.length() - 1] - '0') || soma == 0)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
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

    if (data_dividida.size() != 3)
        throw invalid_argument("Argumento invalido.");

    if (data_dividida[0].length() != 2)
        throw invalid_argument("Argumento invalido.");
    int dia = stoi(data_dividida[0]);
    int ano = stoi(data_dividida[2]);

    if (ano < 2000  || ano > 9999)
        throw invalid_argument("Argumento invalido.");

    bool ano_bissexto = (ano % 4 == 0 && ano % 100 != 0);
    if (ano_bissexto) dias_meses[1] = 29;

    bool found = false;
    int limite_dia;
    for(int i = 0; i < 12; i++){
        if(meses[i] == data_dividida[1]){
            found = true;
            limite_dia = dias_meses[i];
            break;
        }
    }
    if(!found) throw invalid_argument("Argumento invalido.");
    if (dia < 1 || dia > limite_dia)
        throw invalid_argument("Argumento invalido.");
}

void Data::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
void Descricao::validar(string valor){
    size_t len = valor.length();
    if (len < 0 || len > 30)
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

void Descricao::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
void Duracao::validar(int valor){
    int duracoes_validas[5] = {30,60,90,120,180};
    bool found = false;
    for(int duracao : duracoes_validas){
        if(duracao == valor){
            found = true;
        }
    }
    if(!found)
        throw invalid_argument("Argumento invalido.");
}

void Duracao::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 200015095
// Augusto Suffert Monteiro
void Email::validar(string valor){
    size_t separador = valor.find('@');
    if (separador == -1)
        throw invalid_argument("Argumento invalido.");

    string parte_local = valor.substr(0, separador);
    string dominio = valor.substr(separador+1, string::npos);

    if (parte_local.length() > 64 || parte_local[0] == '.' || parte_local[valor.length() - 1] == '.' || dominio.length() > 253 || dominio[0] == '.')
        throw invalid_argument("Argumento invalido.");

    int invalid_chars[11] = {34, 40, 41, 58, 59, 60, 62, 64, 91, 92, 93};
    for (int i = 0; i < parte_local.length(); i++) {
        if (parte_local[i] == '.' && parte_local[i + 1] == '.')
            throw invalid_argument("Argumento invalido.");
        int char_ascii = (int)parte_local[i];
        if (char_ascii < 32 || char_ascii > 126)
            throw invalid_argument("Argumento invalido.");
        for (int invalid_char : invalid_chars) {
            if (char_ascii == invalid_char)
                throw invalid_argument("Argumento invalido.");
        }
    };

    for (int i = 0; i < dominio.length(); i++) {
        if (dominio[i] == '.' && dominio[i + 1] == '.')
            throw invalid_argument("Argumento invalido.");

        int char_ascii = (int)dominio[i];
        if (!((char_ascii >= 48 && char_ascii <= 57) || (char_ascii >= 65 && char_ascii <= 90) || (char_ascii >= 97 && char_ascii <= 122) || char_ascii == 45 || char_ascii == 46))
            throw invalid_argument("Argumento invalido.");
    }


}

void Email::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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

//---------------------------------------------------------------------
// Matricula: 200049682
// Pedro Brazil Suffert
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
        if (c == '.' && (next_c != ' ' && i != len - 1))
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

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi
void Nota::validar(int valor){
    if(!(valor>=0 && valor<=5))
        throw invalid_argument("Argumento invalido.");
}

void Nota::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi
void Senha::validar(string valor){
    if (valor.length() != 5)
        throw invalid_argument("Argumento invalido.");
    int total = 0;
    for (int i = 0; i <6; ++i) {
        int char_ascii = (int)valor[i];
        if (char_ascii < 32 || char_ascii > 126)
            throw invalid_argument("Argumento invalido.");
        if(char_ascii<90 && char_ascii>65) {
            total++;
        }
    }
    if(total<1 || total==6) {
        throw invalid_argument("Argumento invalido.");
    }
}

void Senha::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

//---------------------------------------------------------------------
// Matricula: 190134330
// Eduardo Augusto Volpi
void Titulo::validar(string valor){
    size_t len = valor.length();
    if (len < 5 || len > 20)
        throw invalid_argument("Argumento invalido.");
    for (int initial = 0; initial < 2; initial++) {
        for (int i = initial; i < len - 1; i += 2) {
            char c = valor[i];
            int valor_ascii = (int)c;
            if (!((valor_ascii >= 65 && valor_ascii <= 90) || (valor_ascii >= 97 && valor_ascii <= 122) || valor_ascii == 32 || valor_ascii == 46))
                throw invalid_argument("Argumento invalido.");
            char next_c = valor[i + 1];
            if (c == next_c && (c == ' ' || c == '.'))
                throw invalid_argument("Argumento invalido.");
        }
    }
}

void Titulo::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
