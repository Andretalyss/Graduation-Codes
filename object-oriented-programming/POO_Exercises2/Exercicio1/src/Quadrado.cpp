#include "Quadrado.h"

Quadrado::Quadrado(double base, double alt)
{
    name = "Quadrado";
    this->base = base;
    this->alt = alt;
}

double Quadrado::calcule_area()
{
    double area;
    area = base*alt;
    return area;
}

double Quadrado::get_base()
{
    return base;
}

double Quadrado::get_alt()
{
    return alt;
}
