#include <iostream>
#include "Conta.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;
void divisor();

int main()
{
    //CONTA CORRENTE
    ContaCorrente *c1 = new ContaCorrente("Andre Talysson", 145020, 5000, 1500);
    c1->definirLimite();

    cout << "     CONTA CORRENTE     " << endl;
    divisor();
    cout << "NAME: " << c1->getNome() << "\nCONTA: " << c1->getNum() << "\nSALDO: R$ " << c1->getSaldo() << "\nSALARIO: R$ " << c1->getSalario()
    << endl;
    cout << "LIMITE: R$ " << c1->getLimite() << endl << endl;

    //SAQUE CONTA CORRENTE
    cout << "SAQUE" << endl;
    c1->sacar(7000);
    cout << "NOVO SALDO: R$ " << c1->getSaldo() << endl;
    divisor();
    //CONTA POUPANCA
    Poupanca *p1 = new Poupanca("Edvaldo Diniz", 105902, 1000, 51, 0.35);

    cout << "     CONTA POUPANCA     " << endl;
    divisor();
    cout << "NAME: " << p1->getNome() << "\nCONTA: " << p1->getNum() << "\nSALDO: R$ " << p1->getSaldo() << endl << endl;

    //RENDIMENTO
    p1->render();
    cout << "Taxa de Redimento: " << p1->getTaxa() << "%" << endl;
    cout << "Variacao: " << p1->getVariacao() << endl;
    cout << "RENDIMENTO: R$ " << p1->getSaldo() << endl;
    divisor();


   //CONTA ESPECIAL
   ContaEspecial *e1 = new ContaEspecial("Lucas", 50602, 1500, 1000);
   e1->definirLimite();
   cout << "       CONTA ESPECIAL" << endl;
   divisor();
   cout << "LIMITE: " << e1->getLimite() << endl;

    return 0;

}







void divisor()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}
