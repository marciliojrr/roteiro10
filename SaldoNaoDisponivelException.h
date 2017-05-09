#ifndef SALDONAODISPONIVELEXCEPTION_H_INCLUDED
#define SALDONAODISPONIVELEXCEPTION_H_INCLUDED
#include <stdexcept>
#include <iostream>

using namespace std;

class SaldoNaoDisponivelException : public runtime_error{

public:
    SaldoNaoDisponivelException();
};

#endif // SALDONAODISPONIVELEXCEPTION_H_INCLUDED
