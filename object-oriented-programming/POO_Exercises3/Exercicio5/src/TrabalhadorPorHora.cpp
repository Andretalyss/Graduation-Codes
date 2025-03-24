#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, float v) : Trabalhador(nome)
{
    nome = n;
    valorPorHora = v;
    salario = 0;
}

float TrabalhadorPorHora::calcularSalarioSemanal(int h)
{
    salario = valorPorHora * h;

    return salario;
}
