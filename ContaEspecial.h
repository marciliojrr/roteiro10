#ifndef CONTAESPECIAL_H_INCLUDED
#define CONTAESPECIAL_H_INCLUDED
#include "Conta.h"

class ContaEspecial : public Conta {
public:
    ContaEspecial(string, double, double, double);
    void definirLimite();
};
#endif // CONTAESPECIAL_H_INCLUDED
