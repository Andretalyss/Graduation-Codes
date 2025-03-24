#include "ValorAcimaException.h"

const char* ValorAcimaException::what()
{
    std::cout << "Valor acima" << std::endl;
}
