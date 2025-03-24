#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario *f1 = new Funcionario(100, "Andre", 1000);
    Consultor *f2 = new Consultor(f1->getMatricula(), f1->getNome(),f1->getSalario());

    cout << "NOME: " << f1->getNome() << "  || MATRICULA: " << f1->getMatricula() << " || SALARIO: R$ " << f1->getSalario()
    << endl << endl;

    cout << "Aumento de 10%" << endl;
    cout << "SALARIO: " << f1->getSalario() << " + 10% = R$ " << f2->getSalario() << endl << endl;

    cout << "Aumento com percentual setado" << endl;
    float percentual;
    cout << "Digite o percentual de aumento do salario: ";
    cin >> percentual;
    cout << endl;

    cout << "Aumento de " << percentual << "%" << endl;
    cout << "SALARIO: " << f1->getSalario() << " + " << percentual << "% = R$ " << f2->getSalario(percentual) << endl;

    return 0;
}
