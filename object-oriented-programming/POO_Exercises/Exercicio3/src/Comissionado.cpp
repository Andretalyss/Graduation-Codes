#include "Comissionado.h"

Comissionado::Comissionado(float v, float p)
{
    vendas_sem = v;
    percentual = p;
}

//CALCULANDO SALÁRIO
float Comissionado::calcula_salario()
{
    float salario = 0;

    if(percentual < 0)
        return vendas_sem;

    salario = vendas_sem +(vendas_sem * (percentual/100));

    return salario;
}

void Comissionado::set_name(std::string n)
{
    nome = n;
}

void Comissionado::set_mat(int m)
{
    matricula = m;
}

std::string Comissionado::get_name()
{
    return nome;
}

int Comissionado::get_mat()
{
    return matricula;
}
