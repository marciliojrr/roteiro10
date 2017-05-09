#include "saldoexception.h"

SaqueNaoDisponivelException::SaqueNaoDisponivelException() : runtime_error("Error: Não foi possivel realizar o saque, saldo insuficiente."){

}
