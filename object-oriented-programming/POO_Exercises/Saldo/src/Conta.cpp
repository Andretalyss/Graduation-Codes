#include "Conta.h"
#include "SaldoNaoDisponivelException.h"

Conta::Conta(std::string NomeCliente, double salarioMensal, int numeroConta, double saldo)
{
    this->NomeCliente = NomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

std::string Conta::getNomeCliente()
{
    return NomeCliente;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

int Conta::getNumeroConta()
{
    return numeroConta;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}

void Conta::setNomeCliente(std::string nomeCliente)
{   if(nomeCliente=="")
        std::cout << "Nome Invalido!" << std::endl;
    else
        this->NomeCliente = nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal)
{
    if(salarioMensal < 0)
        this->salarioMensal = 0;
    else
        this->salarioMensal = salarioMensal;
}

void Conta::setNumeroConta(int numeroConta)
{
    if(numeroConta < 0)
        std::cout << "Numero da conta invalido!" << std::endl;
    else
        this->numeroConta = numeroConta;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

void Conta::setLimite(double limite)
{
    if(limite < 0)
        this->limite = 0;
    else
        this->limite = limite;
}

void Conta::definirLimite()
{
    limite = 2*salarioMensal;
}

void Conta::sacar(double v)
{
    if(saldo < v){
        SaldoNaoDisponivelException s;
        throw s;
    }
    else if(saldo >= v){
    std::cout << "Saque de " << v << std::endl;
    saldo = saldo - v;
    }
}

void Conta::depositar(double v)
{
    if(v < 0){
        SaldoNaoDisponivelException t;
        throw t;
    }else{
    std::cout << "Deposito de " << v << std::endl;
    saldo = saldo + v;
}}
