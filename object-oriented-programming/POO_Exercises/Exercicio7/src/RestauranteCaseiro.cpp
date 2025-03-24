#include "RestauranteCaseiro.h"
#include <iostream>
using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{
    //default
}

void RestauranteCaseiro::adicionaAoPedido(int indMesa, Pedido p) {
    mesas[indMesa].adicionaAoPedido(p);
}

float RestauranteCaseiro::calculaTotalRestaurante() {
    float total = 0;
    for (int i=0 ;i<MAX; i++)
        total += mesas[i].calculaTotal();

    return total;
}

void RestauranteCaseiro::print() {
    for (int i=0 ;i<MAX; i++) {
    if(mesas[i].calculaTotal() != 0){
        cout << "Mesa " << i << ": \n";
        mesas[i].print();
        cout << "\n";
    }}
}
