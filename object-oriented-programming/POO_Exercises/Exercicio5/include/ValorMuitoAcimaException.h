#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <exception>
#include <iostream>

class ValorMuitoAcimaException : std::exception
{
    public:
        const char* what();
};

#endif // VALORMUITOACIMAEXCEPTION_H
