#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "TrabalhadorPorHora.h"

class TrabalhadorAssalariado : public TrabalhadorPorHora
{
public:
    TrabalhadorAssalariado(std::string n, float s);
    float calcularSalarioSemanal();
};

#endif // TRABALHADORASSALARIADO_H
