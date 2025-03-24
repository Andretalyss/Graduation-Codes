#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <exception>

class OrcamentoEstouradoException : std::exception
{
    public:
        const char* what();

};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
