#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <exception>
#include <iostream>

class ValorAcimaException : std::exception
{
    public:
        const char* what();
};

#endif // VALORACIMAEXCEPTION_H
