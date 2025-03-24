#include "Conta.h"

Conta::Conta(std::string nome,int numero, double saldo)
{
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
}

void Conta::setNome(std::string nome)
{
    this->nome = nome;
}

void Conta::setNum(int num)
{
    numero = num;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

std::string Conta::getNome()
{
    return nome;
}

int Conta::getNum()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::sacar(double valor)
{
    if(valor > saldo)
        std::cout << "Saldo insuficiente" << std::endl;
    else
        saldo = saldo - valor;
}

void Conta::depositar(double valor)
{
    if(valor < 0)
        std::cout << "Valor não permitido" << std::endl;
    else
        saldo = saldo + valor;
}


