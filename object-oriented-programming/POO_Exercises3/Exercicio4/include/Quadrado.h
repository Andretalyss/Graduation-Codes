#ifndef QUADRADO_H
#define QUADRADO_H
#include "Triangulo.h"

class Quadrado : public FigurasGeometricas
{
public:
    Quadrado(std::string nome, float base, float alt);
    float calcularArea();
};

#endif // QUADRADO_H
