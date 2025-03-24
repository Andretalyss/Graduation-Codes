#include "ValorAbaixoException.h"

const char* ValorAbaixoException::what()
{
    std::cout << "Valor abaixo" << std::endl;
}
