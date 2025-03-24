#include "Pagamento.h"

Pagamento::Pagamento()
{
    ValorPagamento = 0;
    nomeFuncionario = " ";
}

double Pagamento::getValor()
{
    return ValorPagamento;
}

std::string Pagamento::getNome()
{
    return nomeFuncionario;
}

void Pagamento::setValor(double v)
{
    if(v >= 0)
    ValorPagamento = v;
    else
    ValorPagamento = 0;
}

void Pagamento::setNome(std::string n)
{
    nomeFuncionario = n;
}



