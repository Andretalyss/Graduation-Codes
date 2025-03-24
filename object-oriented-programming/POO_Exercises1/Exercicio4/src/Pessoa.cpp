#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa(std::string n)
{
    nome = n;
    idade = 0;
    telefone = "Sem numero";
}

Pessoa::Pessoa(std::string n, int i, std::string tel)
{
    nome = n;
    setIdade(i);
    telefone = tel;
}

std::string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getIdade()
{
    return idade;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}
void Pessoa::setIdade(int i)
{
    if(i < 0)
    idade = 0;
    else
    idade = i;
}
void Pessoa::setTelefone(std::string tel)
{
    telefone = tel;
}
