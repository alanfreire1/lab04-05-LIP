#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int resultado = 0;

    for (int x = 10; x <= a; x++) {
        int somatorio = 1; // Trocamos o nome de produtorio para somatorio

        for (int y = 20; y <= b; y++) {
            somatorio *= (2 * x + y);
        }

        resultado += somatorio;
    }

    cout << resultado << endl;

    return 0;
}
