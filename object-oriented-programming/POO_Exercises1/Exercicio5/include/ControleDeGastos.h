#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos
{
    private:
    Despesa despesas[100];


    public:
    ControleDeGastos();
    void setDespesa(Despesa d, int p);
    double CalculaTotalDasDespesas();
    bool ExisteDespesaDoTipo(std::string tipo);

};

#endif // CONTROLEDEGASTOS_H
