#ifndef SALDOEXCEPTION_H_INCLUDED
#define SALDOEXCEPTION_H_INCLUDED
#include <stdexcept>

class SaqueNaoDisponivelException : public std::runtime_error{
public:
	SaqueNaoDisponivelException();
};



#endif // SALDOEXCEPTION_H_INCLUDED
