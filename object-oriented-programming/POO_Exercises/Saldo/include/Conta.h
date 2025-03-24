#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"

class Conta : public IConta
{
protected:
    std::string NomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;

public:
    Conta(std::string NomeCliente, double salarioMensal, int numeroConta, double saldo);
    std::string getNomeCliente();
    double getSalarioMensal();
    int getNumeroConta();
    double getSaldo();
    double getLimite();
    void setNomeCliente(std::string nomeCliente);
    void setSalarioMensal(double salarioMensal);
    void setNumeroConta(int numeroConta);
    void setSaldo(double saldo);
    void setLimite(double limite);
    virtual void definirLimite();
    void sacar(double v);
    void depositar(double v);
};

#endif // CONTA_H
