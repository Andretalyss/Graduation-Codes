#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{
        Empregado p1 = Empregado("Andre", "Talysson", 5000);
        Empregado p2 = Empregado("Gustavo", "Mendes", 6000);

    cout << "Empregado: " << p1.getNome() << " " << p1.getSobrenome() << "\nSalario: R$ " << p1.getSalario() << endl << endl;
    cout << "Empregado: " << p2.getNome() << " " << p2.getSobrenome() << "\nSalario: R$ " << p2.getSalario() << endl << endl;

    p1.Aumento();
    p2.Aumento();

    cout << "Aumento de 10% no empregado 1" << endl;
    cout << "Empregado: " << p1.getNome() << " " << p1.getSobrenome() << "\nNOVO Salario: R$ " << p1.getSalario() << endl << endl;
    cout << "Aumento de 10% no empregado 2" << endl;
    cout << "Empregado: " << p2.getNome() << " " << p2.getSobrenome() << "\nNOVO Salario: R$ " << p2.getSalario() << endl;
}
