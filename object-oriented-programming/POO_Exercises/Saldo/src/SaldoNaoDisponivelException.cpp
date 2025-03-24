#include "SaldoNaoDisponivelException.h"

const char* SaldoNaoDisponivelException::what()
{
    return "Saldo insuficiente";
}
