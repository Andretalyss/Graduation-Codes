#ifndef GERENCIA_H
#define GERENCIA_H
#include <vector>
#include "Funcionario.h"
#include "Horista.h"
#include "Assalariado.h"
#include "Comissionado.h"

class Gerencia
{
    protected:
        std::vector<Funcionario*> funcionarios;

    public:
        Gerencia();
        void set_funcionario(Funcionario *obj);
        float calcular_valor_total();
        float consulta_salario_func(int pos);

};

#endif // GERENCIA_H
