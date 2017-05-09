#ifndef ICONTA_H_INCLUDED
#define ICONTA_H_INCLUDED
#include <string>
using namespace std;

class IConta {
public:
    virtual void sacar(double ) = 0;
    virtual void depositar(double) = 0;
};
#endif // ICONTA_H_INCLUDED
