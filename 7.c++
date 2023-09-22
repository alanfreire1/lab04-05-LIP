#include <iostream>
using namespace std;

int main() {
    int numero, inverso = 0;

    cin >> numero;

    while (numero > 0) {
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero = numero / 10;
    }

    cout << inverso << endl;

    return 0;
}
