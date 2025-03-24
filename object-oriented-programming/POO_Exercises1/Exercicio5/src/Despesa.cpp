#include "Despesa.h"

Despesa::Despesa()
{
    valor = 0;
    tipodegasto = "Indefinido";
}

double Despesa::getValor()
{
    return valor;
}

std::string Despesa::getGasto()
{
    return tipodegasto;
}

void Despesa::setValor(double v)
{
    if(v >= 0)
    valor = v;
    else
    valor = 0;
}

void Despesa::setGasto(std::string tipo)
{
    tipodegasto = tipo;
}
