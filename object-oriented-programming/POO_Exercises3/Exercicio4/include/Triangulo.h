#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FigurasGeometricas.h"

class Triangulo : public FigurasGeometricas
{
public:
    Triangulo(std::string nome, float base, float alt);
    float calcularArea();
};

#endif // TRIANGULO_H
