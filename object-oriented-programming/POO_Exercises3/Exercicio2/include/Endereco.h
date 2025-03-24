#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
#include <string>

class Endereco
{
private:
    std::string rua;
    int num;
    std::string bairro;
    std::string cidade;
    std::string cep;

public:
    Endereco();
    Endereco(std::string rua, int num, std::string bairro, std::string cidade, std::string cep);
    std::string toString();
};

#endif // ENDERECO_H
