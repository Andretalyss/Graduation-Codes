#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

class Pessoa
{
   private:
    std::string nome;
    int idade;
    std::string telefone;

    public:
        Pessoa(std::string n);
        Pessoa(std::string n, int i, std::string tel);
        std::string getNome();
        int getIdade();
        std::string getTelefone();
        void setNome(std::string n);
        void setIdade(int i);
        void setTelefone(std::string tel);

};

#endif // PESSOA_H
