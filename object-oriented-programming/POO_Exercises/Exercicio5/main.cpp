#include <iostream>
#include "TestaValidaNum.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
using namespace std;

int main()
{
    TestaValidaNum num = TestaValidaNum();

    try{
        num.valida_numero(130);
    }catch(ValorAbaixoException t){
        t.what();
    }catch(ValorAcimaException q){
        q.what();
    }catch(ValorMuitoAcimaException r){
        r.what();
    }

    return 0;
}
