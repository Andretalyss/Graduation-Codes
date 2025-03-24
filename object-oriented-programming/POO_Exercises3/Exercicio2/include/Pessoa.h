#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <iostream>

class Pessoa
{
private:
    std::string nome;
    Endereco endereco;
    std::string tel;

public:
    Pessoa(std::string nome);
    Pessoa(std::string nome, Endereco endereco, std::string tel);
    std::string getNome();
    std::string getEndereco();
    std::string getTelefone();

};

#endif // PESSOA_H
