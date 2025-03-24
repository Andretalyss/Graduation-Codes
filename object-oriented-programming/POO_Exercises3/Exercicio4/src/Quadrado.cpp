#include "Quadrado.h"


Quadrado::Quadrado(std::string nome, float base, float alt) : FigurasGeometricas(nome, base, alt)
{
    //std::cout << "entrou" << std::endl;
}

float Quadrado::calcularArea()
{
    float area;
    area = base * base;

    return area;
}
