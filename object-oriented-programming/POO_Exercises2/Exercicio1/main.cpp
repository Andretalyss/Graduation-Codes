#include <iostream>
#include <locale>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Triangulo *obj = new Triangulo(10,5);
    cout << "Figura: " << obj->get_name() << "  | Base: " << obj->get_base() << " -- Altura: " << obj->get_alt() << endl;
    cout << "Área: " << obj->calcule_area() << endl;


    Quadrado *obj2 = new Quadrado(5,5);
    cout << "\nFigura: " << obj2->get_name() << "  | Base: " << obj2->get_base() << " -- Altura: " << obj2->get_alt() << endl;
    cout << "Área: " << obj2->calcule_area() << endl;


    Circulo *obj3 = new Circulo(5);
    cout << "\nFigura: " << obj3->get_name() << "  | Raio: " << obj3->get_raio() << endl;
    cout << "Área: " << obj3->calcule_area() << endl;

    delete obj;
    delete obj2;
    delete obj3;

    return 0;
}
