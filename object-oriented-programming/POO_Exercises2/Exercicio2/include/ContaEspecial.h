#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:

        ContaEspecial(std::string NomeCliente, double salarioMensal, int numeroConta, double saldo);
        void definirLimite();

};

#endif // CONTAESPECIAL_H
