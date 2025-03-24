#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include <Conta.h>

class ContaCorrente : public Conta
{
    protected:
        double salario;
        int limite;

    public:
        ContaCorrente(std::string nome, int numero, double saldo, double salario);
        void setSalario(double salario);
        double getSalario();
        int getLimite();
        virtual void definirLimite();

};

#endif // CONTACORRENTE_H
