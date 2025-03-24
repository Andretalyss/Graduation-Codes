#include <iostream>
#include"Pessoa.h"

using namespace std;

int main()
{
    Endereco e1 = Endereco("Maria Jose Rique", 63, "Cristo", "Joao Pessoa", "58071-610");
    Endereco e2 = Endereco("Av Goias", 201, "Bairro dos Estados", "Joao Pessoa", "5800360");

    Pessoa p1 = Pessoa("Andre Talysson", e1, "83 99951-9413");
    Pessoa p2 = Pessoa("Fernando Marques", e2, "83 9838-4873");

    cout << "Nome: " << p1.getNome() << "\n-------ENDERECO------\n" << p1.getEndereco()<< "Telefone: " << p1.getTelefone()
    << endl << endl;

    cout << "Nome: " << p2.getNome() << "\n-------ENDERECO------\n" << p2.getEndereco()<< "Telefone: " << p2.getTelefone()
    << endl;

    return 0;
}
