#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>

class FuncionarioNaoExisteException : std::exception
{
    public:
        const char* what();
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
