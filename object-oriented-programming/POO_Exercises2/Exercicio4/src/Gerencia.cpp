#include "Gerencia.h"
#include <cstring>
#include <stdlib.h>
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

Gerencia::Gerencia(double orc)
{
    orcamento = orc;
}

double Gerencia::getOrcamento()
{
    return orcamento;
}

//SETTING A EMPLOYEE IN VECTOR
void Gerencia::set_funcionario(Funcionario *obj)
{
    funcionarios.push_back(obj);

}

//SALARY CALCULATION
float Gerencia::calcular_valor_total()
{
    float valor = 0;
    for(int i=0;i<funcionarios.size();i++){
        valor += funcionarios[i]->calcula_salario();
    }

    if(valor > orcamento)
    {
        OrcamentoEstouradoException s;
        throw s;
    }else
        return valor;
}

//SPECIFIC SALARY
float Gerencia::consulta_salario_func(std::string nome)
{
    for(int i=0;i<funcionarios.size();i++){
        if(funcionarios[i]->get_name() == nome)
            return funcionarios[i]->calcula_salario();
    }

    FuncionarioNaoExisteException t;
    throw t;

}
