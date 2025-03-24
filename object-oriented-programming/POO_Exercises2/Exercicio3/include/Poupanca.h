#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

class Poupanca : public Conta
{
    private:
        int variacao;
        double taxa_redimento;

    public:
        Poupanca(std::string nome, int numero, double saldo,int variacao,double taxa_redimento);
        void setTaxa(double taxa_redimento);
        int getVariacao();
        double getTaxa();

        void render();
};

#endif // POUPANCA_H
