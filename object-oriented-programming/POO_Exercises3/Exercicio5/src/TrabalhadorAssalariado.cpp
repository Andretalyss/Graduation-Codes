#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, float s) : TrabalhadorPorHora(nome, valorPorHora)
{
    nome = n;
    salario = s;
}

float TrabalhadorAssalariado::calcularSalarioSemanal()
{
    return salario/4;
}

