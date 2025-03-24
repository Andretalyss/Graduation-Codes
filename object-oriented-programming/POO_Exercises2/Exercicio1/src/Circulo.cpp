#include "Circulo.h"
#include <math.h>
Circulo::Circulo(double raio)
{
    name = "Circulo";
    this->raio = raio;
}

double Circulo::calcule_area()
{
    double area;
    area = pi*pow(raio,2);
    return area;

}

double Circulo::get_raio()
{
    return raio;
}
