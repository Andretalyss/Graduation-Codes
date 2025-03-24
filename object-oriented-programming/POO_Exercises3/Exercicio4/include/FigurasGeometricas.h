#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H
#include <iostream>

class FigurasGeometricas
{
protected:
    std::string nome;
    float base;
    float alt;

public:
    FigurasGeometricas(std::string n, float b, float alt);
    virtual float calcularArea();
    float getBase();
    float getAlt();
    std::string getNome();
};

#endif // FIGURASGEOMETRICAS_H
