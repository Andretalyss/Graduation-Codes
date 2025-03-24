#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    for(int i=0;i<MAX;i++){
        pedidos[i].setPreco(0);
    }

    pos = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    for(int i=0; i < MAX; i++) {
        if(pedidos[i].getDescricao() == p.getDescricao()) {
            pedidos[i].setQuant(pedidos[i].getQuant() + p.getQuant());
            return;
            }
        }

    pedidos[pos] = p;
    pos++;
}

void MesaDeRestaurante::zeraPedidos()
{
    for(int i = 0; i<MAX; i++) {
        pedidos[i].setQuant(0);
        pedidos[i].setPreco(0);
        pedidos[i].setDescri("");
        pedidos[i].setNumero(0);
        }
}

double MesaDeRestaurante::calculaTotal()
{
    double total = 0;

    for(int i=0; i<MAX; i++) {
        if(pedidos[i].getPreco() > 0 && pedidos[i].getQuant() > 0) {
            total += pedidos[i].getPreco() * pedidos[i].getQuant();
            //std::cout <<pedidos[i].getPreco() << endl;
    }}

    return total;
}

void MesaDeRestaurante::print()
{
        for(int i=0; i<MAX; i++) {
            if(pedidos[i].getDescricao() != "") {
                cout << "Numero: " << pedidos[i].getNumero() << endl <<
                "Descricao: " << pedidos[i].getDescricao() << endl <<
                "Preco: " << pedidos[i].getPreco() << endl <<
                "Quantidade: " << pedidos[i].getQuant() << endl;
                }}

}
