#include "FigurasGeometricas.h"

FigurasGeometricas::FigurasGeometricas(std::string n, float b, float alt)
{
    nome = n;
    base = b;
    this->alt = alt;
}

float FigurasGeometricas::calcularArea()
{
    std::cout << "CLASSE MAE" << std::endl;

}

std::string FigurasGeometricas::getNome()
{
    return nome;
}

float FigurasGeometricas::getBase()
{
    return base;
}
float FigurasGeometricas::getAlt()
{
    return alt;
}
