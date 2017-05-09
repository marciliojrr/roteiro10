#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

using namespace std;

int main() {
    int n;

    TestaValidaNumero test;

    cout << "Digite um valor: " << endl;
    cin >> n;

    try {
        test.validaNumero(n);
    }
    catch (ValorAbaixoException &ex) {
        cout << ex.msg() << endl;
    }
    catch (ValorAcimaException &ex) {
        cout << ex.msg() << endl;
    }
    catch (ValorMuitoAcimaException &ex) {
        cout << ex.msg() << endl;
    }
}
