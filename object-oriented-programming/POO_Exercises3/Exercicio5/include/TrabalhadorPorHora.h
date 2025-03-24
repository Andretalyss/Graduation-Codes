#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{

protected:
    float valorPorHora;

public:
    TrabalhadorPorHora(std::string n, float v);
    float calcularSalarioSemanal(int h);

};

#endif // TRABALHADORPORHORA_H
