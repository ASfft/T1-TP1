#ifndef T1_TP1_ENTIDADES_H
#define T1_TP1_ENTIDADES_H

#include "dominios.h"

class Excursao {
    private:
        Codigo codigo;
        Titulo titulo;
        Nota nota;
        Cidade cidade;
        Duracao duracao;
        Descricao descricao;
        Endereco endereco;

    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;
        void setTitulo(const Titulo&);
        Titulo getTitulo() const;
        void setNota(const Nota&);
        Nota getNota() const;
        void setCidade(const Cidade&);
        Cidade getCidade() const;
        void setDuracao(const Duracao&);
        Duracao getDuracao() const;
        void setDescricao(const Descricao&);
        Descricao getDescricao() const;
        void setEndereco(const Endereco&);
        Endereco getEndereco() const;
};

inline void Excursao::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Excursao::getCodigo() const {
    return codigo;
}

inline void Excursao::setTitulo(const Titulo& titulo){
    this->titulo = titulo;
}

inline Titulo Excursao::getTitulo() const {
    return titulo;
}

inline void Excursao::setNota(const Nota& nota){
    this->nota = nota;
}

inline Nota Excursao::getNota() const {
    return nota;
}

inline void Excursao::setCidade(const Cidade& cidade){
    this->cidade = cidade;
}

inline Cidade Excursao::getCidade() const {
    return cidade;
}

inline void Excursao::setDuracao(const Duracao& duracao){
    this->duracao = duracao;
}

inline Duracao Excursao::getDuracao() const {
    return duracao;
}

inline void Excursao::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}

inline Descricao Excursao::getDescricao() const {
    return descricao;
}

inline void Excursao::setEndereco(const Endereco& endereco){
    this->endereco = endereco;
}

inline Endereco Excursao::getEndereco() const {
    return endereco;
}

#endif //T1_TP1_ENTIDADES_H
