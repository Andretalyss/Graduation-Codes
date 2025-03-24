#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa p1 = Pessoa("Andre");
    Pessoa p2 = Pessoa("Talysson", 19, "99999-9999");

    cout << "Nome: " << p1.getNome() << "\nIdade: " << p1.getIdade() << "\nTelefone: " << p1.getTelefone() << endl << endl;
    cout << "Nome: " << p2.getNome() << "\nIdade: " << p2.getIdade() << "\nTelefone: " << p2.getTelefone() << endl << endl;

   p1.setIdade(22);
   p1.setTelefone("99951-9475");


   cout << "Modificando atributos da pessoa[1]" << endl;
   cout << "Nome: " << p1.getNome() << "\nIdade: " << p1.getIdade() << "\nTelefone: " << p1.getTelefone() << endl << endl;

    return 0;
}
