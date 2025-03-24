#include "Endereco.h"
#include <sstream>

Endereco::Endereco()
{

}

Endereco::Endereco(std::string rua, int num, std::string bairro, std::string cidade, std::string cep)
{
    this->rua = rua;
    this->num = num;
    this->bairro = bairro;
    this->cidade = cidade;
    this->cep = cep;
}

std::string Endereco::toString()
{
    std::stringstream numero;
    numero << num;
    return "Rua: " + rua + "\nNumero: " + numero.str() + "\nBairro: " + bairro + "\nCidade: "
    + cidade + "\nCEP: " + cep + "\n";


}
