#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FigurasGeometricas.h"

class Triangulo : public FigurasGeometricas
{
    protected:
        double base;
        double alt;

    public:
        Triangulo(double base, double alt);
        double calcule_area();
        double get_alt();
        double get_base();
};

#endif // TRIANGULO_H
