#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int resultado = 1;

    for (int i = 0; i < y; i++) {
        resultado *= x;
    }

    resultado = resultado % z;

    cout << resultado << endl;

    return 0;
}
