#include "ValorMuitoAcimaException.h"

const char* ValorMuitoAcimaException::what()
{
    std::cout << "Valor muito acima" << std::endl;
}
