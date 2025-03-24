#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <exception>
#include <iostream>

class ValorAbaixoException : std::exception
{
    public:
        const char* what();

};

#endif // VALORABAIXOEXCEPTION_H
