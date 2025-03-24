#include <iostream>
#include "Funcionario.h"
#include "Horista.h"
#include "Gerencia.h"
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    Gerencia g1 = Gerencia();

    //SETANDO TRABALHADOR ASSALARIADO
    Assalariado a1 = Assalariado(1200);
    a1.set_name("Andre");
    a1.set_mat(123);
    g1.set_funcionario(&a1);

    //SETANDO TRABALHADOR HORISTA
    Horista h1 = Horista(40, 50);
    h1.set_name("Gustavo");
    h1.set_mat(567);
    g1.set_funcionario(&h1);

    //SETANDO TRABALHADOR COMISSIONADO
    Comissionado c1 = Comissionado(1200, 30);
    c1.set_name("Lucas");
    c1.set_mat(245);
    g1.set_funcionario(&c1);

   cout << "--- FUNCIONÁRIO 1 -- [ASSALARIADO] ----\n";
   cout << "Nome: " << a1.get_name() << "\nMatrícula: " << a1.get_mat() << "\nSalário: " << a1.calcula_salario() << endl << endl;

   cout << "--- FUNCIONÁRIO 2 -- [HORISTA] ----\n";
   cout << "Nome: " << h1.get_name() << "\nMatrícula: " << h1.get_mat() << "\nSalário: " << h1.calcula_salario() << endl << endl;

   cout << "--- FUNCIONÁRIO 3 -- [COMISSIONADO] ---- \n";
   cout << "Nome: " << c1.get_name() << "\nMatrícula: " << c1.get_mat() << "\nSalário: " << c1.calcula_salario() << endl << endl;

   cout << "Valor total da folha: " << g1.calcular_valor_total() << endl;
   cout << "Salário do funcionário pesquisado: " << g1.consulta_salario_func(2) << endl;


    return 0;
}
