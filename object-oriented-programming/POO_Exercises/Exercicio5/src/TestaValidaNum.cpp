#include "TestaValidaNum.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

TestaValidaNum::TestaValidaNum()
{

}

void TestaValidaNum::valida_numero(int num)
{
    if(num  <= 0){
        ValorAbaixoException t;
        throw t;
   }else if(num > 100 && num < 1000){
        ValorAcimaException q;
        throw q;
    }else if(num >= 1000){
        ValorMuitoAcimaException r;
        throw r;

}}
