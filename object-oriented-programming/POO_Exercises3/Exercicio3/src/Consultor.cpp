#include "Consultor.h"

Consultor::Consultor(int matricula, std::string nome, float salario) : Funcionario(matricula, nome, salario)
{

}

float Consultor::getSalario()
{
    float valor = salario * 0.10;


    return valor + salario;
}

float Consultor::getSalario(float p)
{   float valor;

    if(p <= 1)
    valor = salario * p;
    else
    valor = salario * (p/100);

    return valor + salario;
}
