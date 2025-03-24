#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string nome, int numero, double saldo,double salario) : Conta(nome,numero,saldo)
{
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
    this->salario = salario;
}

void ContaCorrente::setSalario(double salario)
{
    this->salario = salario;
}

double ContaCorrente::getSalario()
{
    return salario;
}

int ContaCorrente::getLimite()
{
    return limite;
}

void ContaCorrente::definirLimite()
{
    limite = 2*salario;
}

