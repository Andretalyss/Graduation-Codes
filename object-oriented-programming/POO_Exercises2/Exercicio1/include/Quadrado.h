#ifndef QUADRADO_H
#define QUADRADO_H
#include "FigurasGeometricas.h"

class Quadrado : public FigurasGeometricas
{
    protected:
        double base;
        double alt;

    public:
        Quadrado(double base, double alt);
        double calcule_area();
        double get_base();
        double get_alt();

};

#endif // QUADRADO_H
