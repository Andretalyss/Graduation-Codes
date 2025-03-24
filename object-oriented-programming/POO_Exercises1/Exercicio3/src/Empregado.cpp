#include "Empregado.h"
#include <iostream>

Empregado::Empregado(std::string n, std::string s, double sal)
{
    nome = n;
    sobrenome = s;
    setSalario(sal);
}

std::string Empregado::getNome()
{
    return nome;
}

std::string Empregado::getSobrenome()
{
    return sobrenome;
}

double Empregado::getSalario()
{
    return salario;
}

void Empregado::setNome(std::string n)
{
    nome = n;
}

void Empregado::setSobrenome(std::string s)
{
    sobrenome = s;
}

void Empregado::setSalario(double sal)
{
    if(sal < 0)
        salario = 0.0;
        else
        salario = sal;
}

void Empregado::Aumento()
{
    double aux;

    aux = salario * 0.10;
    salario = salario + aux;

}
