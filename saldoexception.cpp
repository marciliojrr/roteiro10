#include "saldoexception.h"

SaqueNaoDisponivelException::SaqueNaoDisponivelException() : runtime_error("Error: N�o foi possivel realizar o saque, saldo insuficiente."){

}
