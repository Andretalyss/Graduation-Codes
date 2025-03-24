#include <iostream>
#include "ContaEspecial.h"
#include <locale>

using namespace std;

void divisor();

int main()
{
    setlocale(LC_ALL,"Portuguese");
    Conta *c1 = new Conta("João", 10000, 19153, 7600);

    cout << "Nome do Cliente: " << c1->getNomeCliente() << " \nSalário: " << c1->getSalarioMensal() << " \nConta: " << c1->getNumeroConta() <<
    "\nSaldo: " << c1->getSaldo() << endl << endl;

    c1->sacar(9000);
    c1->depositar(400);
    cout << "Seu saldo atual: " << c1->getSaldo() << endl;

    c1->definirLimite();
    cout << "Limite disponivel: " << c1->getLimite() << endl << endl;
    divisor();
    ContaEspecial *c2 = new ContaEspecial("Gustavo", 6000, 98765, 1200);

    cout << "Nome do Cliente: " << c2->getNomeCliente() << " \nSalário: " << c2->getSalarioMensal() << " \nConta: " << c2->getNumeroConta() <<
    " \nSaldo: " << c2->getSaldo() << endl << endl;

    c2->sacar(500);
    c2->depositar(300);
    cout << "Saldo: " << c2->getSaldo() << endl;

    c2->definirLimite();
    cout << "Limite disponivel: " << c2->getLimite() << endl;

    return 0;
}

void divisor()
{
    cout << "------------------------------------------------" << endl;
}
