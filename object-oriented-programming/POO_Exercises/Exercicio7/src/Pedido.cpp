#include "Pedido.h"

#include <iostream>
using namespace std;

Pedido::Pedido()
{
    num = quant = preco = 0;
}

Pedido::Pedido(int n, std::string d, int q, float p)
{
    num = n;
    descricao = d;
    quant = q;
    preco = p;
}

std::string Pedido::getDescricao() {
    return descricao;
}
int Pedido::getQuant() {
    return quant;
}
void Pedido::setQuant(int q) {
    quant = q;
}

float Pedido::getPreco() {
    return preco;
}

void Pedido::print() {
    cout << descricao << ", Quantidade: " << quant << ", Preco: " << preco <<
    ", Total: " << preco*quant << endl;
}
