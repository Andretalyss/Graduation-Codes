#include "Horista.h"

Horista::Horista(float s, float h)
{
    sal_horas = s;
    horas_trab = h;
}

float Horista::calcula_salario()
{
    float salario = 0;

    if(horas_trab <= 40)
        salario = horas_trab*sal_horas;
    else
    salario = (horas_trab * (sal_horas*1.5));

    return salario;
}

void Horista::set_name(std::string n)
{
    nome = n;
}

void Horista::set_mat(int m)
{
   matricula = m;
}

std::string Horista::get_name()
{
    return nome;
}

int Horista::get_mat()
{
    return matricula;
}

