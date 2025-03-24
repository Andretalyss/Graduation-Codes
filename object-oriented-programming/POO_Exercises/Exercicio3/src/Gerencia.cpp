#include "Gerencia.h"
#include <cstring>
#include <stdlib.h>

Gerencia::Gerencia()
{

}

//RECEBE UM OBJETO FUNCIONARIO
void Gerencia::set_funcionario(Funcionario *obj)
{
    funcionarios.push_back(obj);

}

//CALCULA TODOS OS SALÁRIOS
float Gerencia::calcular_valor_total()
{
    float valor = 0;
    for(int i=0;i<funcionarios.size();i++){
        valor += funcionarios[i]->calcula_salario();
    }

    return valor;
}

//CONSULTA SALÁRIO ESPECÍFICO
float Gerencia::consulta_salario_func(int pos)
{
    float salario = funcionarios[pos]->calcula_salario();
    return salario;
}
