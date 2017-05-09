#ifndef VALORMUITOACIMAEXCEPTION_H_INCLUDED
#define VALORMUITOACIMAEXCEPTION_H_INCLUDED
#include <iostream>
#include <exception>
#include <string>

class ValorMuitoAcimaException : public std::exception {

public:
	ValorMuitoAcimaException(void){};
	virtual char* const msg(){
		return "Valor Muito Acima";
	}
};
#endif // VALORMUITOACIMAEXCEPTION_H_INCLUDED
