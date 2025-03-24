#include "Assalariado.h"

Assalariado::Assalariado(float s)
{
    salario = s;
}

void Assalariado::set_name(std::string n)
{
    nome = n;
}

void Assalariado::set_mat(int m)
{
    matricula = m;
}

//CONSULTANDO SALÁRIO
float Assalariado::calcula_salario()
{
    return salario;
}

std::string Assalariado::get_name()
{
    return nome;
}

int Assalariado::get_mat()
{
    return matricula;
}
