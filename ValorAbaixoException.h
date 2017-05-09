#ifndef VALORABAIXOEXCEPTION_H_INCLUDED
#define VALORABAIXOEXCEPTION_H_INCLUDED
#include <exception>
#include <iostream>
#include <string>

class ValorAbaixoException : public std::exception {

public:
    ValorAbaixoException(void){};
    virtual char* const msg(){
        return "Valor baixo";
    }
};
#endif // VALORABAIXOEXCEPTION_H_INCLUDED
