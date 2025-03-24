#include "Poupanca.h"

Poupanca::Poupanca(std::string nome, int numero, double saldo,int variacao, double taxa_redimento) : Conta(nome,numero,saldo)
{
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
    this->taxa_redimento = taxa_redimento;
    this->variacao = variacao;
}

void Poupanca::setTaxa(double taxa_redimento)
{
    this->taxa_redimento = taxa_redimento;
}

double Poupanca::getTaxa()
{
    return taxa_redimento;
}

int Poupanca::getVariacao()
{
    return variacao;
}

void Poupanca::render()
{
    if(variacao == 51)
    saldo += saldo*(taxa_redimento/100);
    else if(variacao == 1){
    double aux;
    aux = (taxa_redimento/100) + 0.005;
    saldo += saldo * aux;
}}
