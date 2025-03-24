#include <iostream>
#include "RestauranteCaseiro.h"

int main() {

        RestauranteCaseiro r1;
        MesaDeRestaurante mesa1;
        Pedido p1 = Pedido();

        p1.setDescri("cerveja");
        p1.setNumero(1234);
        p1.setPreco(7.50);
        p1.setQuant(2);
        mesa1.adicionaAoPedido(p1);
        r1.adicionaPedido(p1, 0);

        p1.setDescri("Pizza");
        p1.setNumero(5556);
        p1.setPreco(30);
        p1.setQuant(1);
        mesa1.adicionaAoPedido(p1);
        r1.adicionaPedido(p1, 0);

        p1.setDescri("cerveja");
        p1.setNumero(1234);
        p1.setPreco(7.50);
        p1.setQuant(1);
        mesa1.adicionaAoPedido(p1);
        r1.adicionaPedido(p1, 0);

        MesaDeRestaurante mesa2;
        Pedido p2 = Pedido();

        p2.setDescri("PF");
        p2.setNumero(1234);
        p2.setPreco(15.00);
        p2.setQuant(4);
        mesa2.adicionaAoPedido(p2);
        r1.adicionaPedido(p2, 1);

        p2.setDescri("refrigerante");
        p2.setNumero(1234);
        p2.setPreco(7.50);
        p2.setQuant(1);
        mesa2.adicionaAoPedido(p2);
        r1.adicionaPedido(p2, 1);

        MesaDeRestaurante mesa3;
        Pedido p3 = Pedido();

        p3.setDescri("PF");
        p3.setNumero(1234);
        p3.setPreco(5.00);
        p3.setQuant(2);
        mesa3.adicionaAoPedido(p3);
        r1.adicionaPedido(p3, 2);

        p3.setDescri("refrigerante");
        p3.setNumero(1234);
        p3.setPreco(7.50);
        p3.setQuant(1);
        mesa3.adicionaAoPedido(p3);
        r1.adicionaPedido(p3, 2);


        cout << "-----Mesa 1-----\n";
        mesa1.print();
        cout << "Total da mesa: " << mesa1.calculaTotal() << endl << endl;

        cout << "-----Mesa 2-----\n";
        mesa2.print();
        cout << "Total da mesa: " << mesa2.calculaTotal() << endl << endl;

        cout << "-----Mesa 3-----\n";
        mesa3.print();
        cout << "Total da mesa: " << mesa3.calculaTotal() << endl << endl;


        cout << endl << "Total arrecadado: " << r1.calculaTotalRestaurante() << endl << endl;

        mesa1.zeraPedidos();
        mesa2.zeraPedidos();
        mesa3.zeraPedidos();

        cout << "ZERANDO PEDIDOS" << endl;

        mesa1.print();
        mesa2.print();
        mesa3.print();

        cout << "MESA 1 TOTAL: " << mesa1.calculaTotal() << endl;
        cout << "MESA 2 TOTAL: " << mesa2.calculaTotal() << endl;
        cout << "MESA 3 TOTAL: " << mesa3.calculaTotal() << endl;

        return 0;
}
