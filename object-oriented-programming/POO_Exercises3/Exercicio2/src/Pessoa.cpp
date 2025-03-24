#include "Pessoa.h"

Pessoa::Pessoa(std::string nome)
{
    this->nome = nome;

}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string tel)
{
    this->nome = nome;
    this->endereco = endereco;
    this->tel = tel;

}

std::string Pessoa::getNome()
{
    return nome;
}

std::string Pessoa::getEndereco()
{
    std::string endr = endereco.toString();
    return endr;
}

std::string Pessoa::getTelefone()
{
    return tel;
}
