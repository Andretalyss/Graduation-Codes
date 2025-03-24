#include "OrcamentoEstouradoException.h"

const char* OrcamentoEstouradoException::what()
{
    return "Valor do orçamento foi estourado";
}
