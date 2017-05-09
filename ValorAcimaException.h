#ifndef VALORACIMAEXCEPTION_H_INCLUDED
#define VALORACIMAEXCEPTION_H_INCLUDED
#include <iostream>
#include <exception>
#include <string>

class ValorAcimaException : public std::exception {

public:
    ValorAcimaException(){};
    virtual char* const msg() {
        return "Valor Acima";
    }
};
#endif // VALORACIMAEXCEPTION_H_INCLUDED
