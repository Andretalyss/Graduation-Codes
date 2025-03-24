#include <iostream>
#include "Cirurgiao.h"
#include "Oftalmo.h"
#include "Ginecologista.h"
#include <locale>
using namespace std;

void separar();

int main()
{
    setlocale(LC_ALL,"portuguese");

    Cirurgiao *c1 = new Cirurgiao("Andre", 1.70,70);
        cout << "Médico: " << c1->get_name() << "\nAltura: " << c1->get_alt() << "m\nPeso: " << c1->get_peso() << "kg"<< endl;
        cout << c1->get_espec() << endl;
        c1->realiza_atendimentos();
        separar();

    Oftalmo *o1 = new Oftalmo("Leandro", 1.78, 80);
        cout << "Médico: " << o1->get_name() << "\nAltura: " << o1->get_alt() << "m\nPeso: " << o1->get_peso() << "kg"<< endl;
        cout << o1->get_espec() << endl;
        o1->realiza_atendimentos();
        separar();

    Ginecologista *g1 = new Ginecologista("Gabriela", 1.60, 60);
        cout << "Médico: " << g1->get_name() << "\nAltura: " << g1->get_alt() << "m\nPeso: " << g1->get_peso() << "kg"<< endl;
        cout << g1->get_espec() << endl;
        g1->realiza_atendimentos();
}

void separar()
{
    cout << "-------------------" << endl;
}
