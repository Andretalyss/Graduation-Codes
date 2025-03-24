#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string NomeCliente, double salarioMensal, int numeroConta, double saldo) : Conta(NomeCliente, salarioMensal, numeroConta, saldo)
{

}

void ContaEspecial::definirLimite()
{
    limite = 3*salarioMensal;

}
