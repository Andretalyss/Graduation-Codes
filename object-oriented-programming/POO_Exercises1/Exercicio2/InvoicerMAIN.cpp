#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice c1 = Invoice();
    Invoice c2 = Invoice(20,"Computador", 1300, 2);

    c2.getInvoiceAmount();
    cout << "O valor do produto do cliente[2] = " << c2.getPreco() << endl;
    cout << "Valor do produto do cliente[1] = " << c1.getPreco() << endl;
    return 0;
}
