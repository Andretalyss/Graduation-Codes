#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
    private:
        Pagamento pagamentos[100];

    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento p, int pos);
        double CalculaTotaldePagamentos();
        bool ExistePagamentoParaFuncionario(std::string n);
};

#endif // CONTROLEDEPAGAMENTOS_H
