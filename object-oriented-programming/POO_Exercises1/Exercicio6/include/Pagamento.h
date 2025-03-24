#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>

class Pagamento
{
    private:
        double ValorPagamento;
        std::string nomeFuncionario;

    public:
        Pagamento();
        double getValor();
        std::string getNome();
        void setValor(double v);
        void setNome(std::string n);
};

#endif // PAGAMENTO_H
