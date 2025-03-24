#ifndef CIRCULO_H
#define CIRCULO_H
#include "FigurasGeometricas.h"
#define pi 3.14
class Circulo : public FigurasGeometricas
{
    protected:
        double raio;

    public:
        Circulo(double raio);
        double calcule_area();
        double get_raio();
};

#endif // CIRCULO_H
