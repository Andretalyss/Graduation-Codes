#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{
    for(int i=0;i<100;i++){
        pagamentos[i] = Pagamento();
    }
}

void ControleDePagamentos::setPagamentos(Pagamento p, int pos)
{
    pagamentos[pos] = p;

}

double ControleDePagamentos::CalculaTotaldePagamentos()
{   double total;

    for(int i=0;i<100;i++){
            total = total + pagamentos[i].getValor();
    }

    return total;
}

bool ControleDePagamentos::ExistePagamentoParaFuncionario(std::string n)
{
    for(int i=0;i<100;i++){
        if(pagamentos[i].getNome() == n)
            return true;

    }
    return false;
}
