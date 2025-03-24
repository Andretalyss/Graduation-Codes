#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nome, int numero, double saldo, double salario) : ContaCorrente(nome,numero,saldo,salario)
{
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
    this->salario = salario;
}

void ContaEspecial::definirLimite()
{
    limite = 4*salario;
}
