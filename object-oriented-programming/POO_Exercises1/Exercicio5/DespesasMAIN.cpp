#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

int main()
{
        Despesa g1 = Despesa();
        Despesa g2 = Despesa();
        ControleDeGastos g3 = ControleDeGastos();

        g1.setValor(20);
        g1.setGasto("Lazer");

        g2.setValor(90);
        g2.setGasto("Combustivel");

        cout << "Valor: R$ " << g1.getValor() << " | Tipo: " << g1.getGasto() << endl << endl;
        cout << "Valor: R$ " << g2.getValor() << " | Tipo: " << g2.getGasto() << endl << endl;

        g3.setDespesa(g1, 1);
        g3.setDespesa(g2, 2);

        cout << "Total das Despesas: R$ " <<  g3.CalculaTotalDasDespesas() << endl << endl;

        cout << "Existe gastos com o tipo: " << g2.getGasto() << "? [1]SIM/[0]NAO  -> " << g3.ExisteDespesaDoTipo(g2.getGasto()) << endl;




        return 0;
}
