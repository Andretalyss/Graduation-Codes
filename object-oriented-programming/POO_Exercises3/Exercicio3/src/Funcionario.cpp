#include "Funcionario.h"

Funcionario::Funcionario(int m, std::string n, float s)
{
    matricula = m;
    nome = n;
    salario = s;

}

int Funcionario::getMatricula()
{
    return matricula;
}

std::string Funcionario::getNome()
{
    return nome;
}

float Funcionario::getSalario()
{
    return salario;
}
