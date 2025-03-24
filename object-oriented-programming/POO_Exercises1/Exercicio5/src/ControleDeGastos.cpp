#include "ControleDeGastos.h"



ControleDeGastos::ControleDeGastos()
{
    for(int i=0;i<100;i++){
        despesas[i] = Despesa();
    }

}

void ControleDeGastos::setDespesa(Despesa d, int p)
{
    despesas[p] = d;

}

double ControleDeGastos::CalculaTotalDasDespesas()
{   double total;

    for(int i=0;i<100;i++){
            total = total + despesas[i].getValor();
    }

    return total;
}

bool ControleDeGastos::ExisteDespesaDoTipo(std::string tipo)
{
    for(int i=0;i<100;i++){
        if(despesas[i].getGasto() == tipo)
            return true;
    }

    return false;
}
