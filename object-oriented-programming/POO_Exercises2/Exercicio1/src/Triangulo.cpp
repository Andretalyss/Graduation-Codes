#include "Triangulo.h"

Triangulo::Triangulo(double base, double alt)
{
    name = "Triângulo";
    this->base = base;
    this->alt = alt;
}

double Triangulo::get_base()
{
    return base;
}

double Triangulo::get_alt()
{
    return alt;
}

double Triangulo::calcule_area()
{
    double area;
    area = (base*alt)/2;
    return area;
}
