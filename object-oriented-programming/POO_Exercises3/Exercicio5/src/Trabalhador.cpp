#include "Trabalhador.h"

Trabalhador::Trabalhador(std::string n)
{
    nome = n;
    salario = 0;

}

float Trabalhador::calcularSalarioSemanal(int h)
{
    std::cout << "ENTROU NA MAE" << std::endl;
}

std::string Trabalhador::getNome()
{
    return nome;
}

float Trabalhador::getSalario()
{
    return salario;
}
