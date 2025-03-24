#include <iostream>
#include "Quadrado.h"
#include <cctype>

using namespace std;


int main()
{

    FigurasGeometricas *f1 = new Quadrado("Quadrado", 10, 10);

    cout << f1->getNome() << "  |  Base: " << f1->getBase() << "  |   Altura: " << f1->getAlt() << endl;
    cout << "Area: " << f1->calcularArea() << endl << endl;

    FigurasGeometricas *f2 = new Triangulo("Triangulo", 10, 2);

    cout << f2->getNome() << "  |  Base: " << f2->getBase() << "  |   Altura: " << f2->getAlt() << endl;
    cout << "Area: " << f2->calcularArea() << endl;


    //cout << "area: " << q1.calcularArea() << endl;

    return 0;
}
