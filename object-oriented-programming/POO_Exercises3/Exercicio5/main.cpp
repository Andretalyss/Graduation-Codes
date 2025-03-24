#include <iostream>
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    Trabalhador *t1 = new TrabalhadorPorHora("Andre", 12);
    TrabalhadorAssalariado *t2 = new TrabalhadorAssalariado("Gustavo", 1200);

    cout << "NOME: " << t1->getNome() << "|  SALARIO: " << t1->calcularSalarioSemanal(42) << endl << endl;
    cout << "NOME: " << t2->getNome() << "|  SALARIO: " << t2->calcularSalarioSemanal() << endl;

    return 0;
}
