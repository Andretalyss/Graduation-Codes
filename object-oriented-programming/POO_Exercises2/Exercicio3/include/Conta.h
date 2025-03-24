#ifndef CONTA_H
#define CONTA_H
#include <iostream>

class Conta
{
    protected:
        std::string nome;
        int numero;
        double saldo;

    public:
        Conta(std::string nome, int numero, double saldo);
        void setNome(std::string nome);
        void setNum(int numero);
        void setSaldo(double saldo);
        std::string getNome();
        int getNum();
        double getSaldo();

        void sacar(double valor);
        void depositar(double valor);
};

#endif // CONTA_H
