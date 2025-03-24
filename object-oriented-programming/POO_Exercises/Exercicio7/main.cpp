#include <iostream>
#include "RestauranteCaseiro.h"
using namespace std;

int main()
{
    RestauranteCaseiro rc = RestauranteCaseiro();
    Pedido p1;

    p1 = Pedido(123, "Camarao", 1, 50);
    rc.adicionaAoPedido(1, p1);
    p1 = Pedido(124, "Cerveja", 1, 5);
    rc.adicionaAoPedido(1, p1);
    p1 = Pedido(124, "Cerveja", 2, 5);
    rc.adicionaAoPedido(1,p1);


    p1 = Pedido(1234, "Lasanha", 1, 20);
    rc.adicionaAoPedido(2,p1);
    p1 = Pedido(122, "Refrigerante", 2, 10);
    rc.adicionaAoPedido(2,p1);

    p1 = Pedido(132, "Batata Frita", 1, 10);
    rc.adicionaAoPedido(3, p1);
    p1 = Pedido(122, "Refrigerante", 2, 10);
    rc.adicionaAoPedido(3, p1);
    p1 = Pedido(212, "Vinho", 1, 40);
    rc.adicionaAoPedido(3, p1);

    rc.print();

    cout << "Lucro: " << rc.calculaTotalRestaurante() << endl;
}
