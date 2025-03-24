#include <iostream>
#include "Data.h"
#include <stdio.h>

using namespace std;

int main()
{
        Data d1 = Data(5,5,2010);
        Data d2 = Data(31,12,2011);

        d2.AvancarDia();

        printf("Data[1] = %02d/%02d/%04d\n", d1.getDia(), d1.getMes(), d1.getAno());
        printf("Data[2] = %02d/%02d/%02d\n", d2.getDia(), d2.getMes(), d2.getAno());

        return 0;
}
