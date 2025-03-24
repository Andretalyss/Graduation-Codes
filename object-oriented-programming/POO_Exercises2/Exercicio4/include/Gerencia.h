#ifndef GERENCIA_H
#define GERENCIA_H
#include <vector>
#include "Funcionario.h"

class Gerencia
{
    protected:
        std::vector<Funcionario*> funcionarios;
        double orcamento;

    public:
        Gerencia(double orc);
        void set_funcionario(Funcionario *obj); //SETTING A EMPLOYEE IN VECTOR
        float calcular_valor_total();
        float consulta_salario_func(std::string nome);
        double getOrcamento();

};

#endif // GERENCIA_H
