#include "Triangulo.h"


Triangulo::Triangulo(std::string nome, float base, float alt) : FigurasGeometricas(nome, base, alt)
{
    //std::string << "entrou" << std::endl;
}

float Triangulo::calcularArea()
{
    float area;

    area = (base * alt)/2;

    return area;
}

