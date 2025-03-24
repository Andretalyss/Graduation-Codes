#include "FuncionarioNaoExisteException.h"

const char* FuncionarioNaoExisteException::what()
{
    return "Funcionário pesquisado não existe";
}
