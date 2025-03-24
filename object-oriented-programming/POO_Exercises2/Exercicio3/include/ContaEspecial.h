#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial(std::string nome, int numero, double saldo, double salario);
        void definirLimite();
};

#endif // CONTAESPECIAL_H
