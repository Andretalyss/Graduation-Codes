#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pedido {
    private:
        int numero;
        int quant;
        double preco;
        string descri;

    public:
        Pedido();
    void setNumero(int numero);
    void setQuant(int Quant);
    void setPreco(double preco);
    void setDescri(string descri);
    int getNumero();
    int getQuant();
    double getPreco();
    string getDescricao();

};

#endif // PEDIDO_H
