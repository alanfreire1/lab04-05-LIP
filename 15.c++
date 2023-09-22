#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int termo1 = 1, termo2 = 1, proximoTermo;

    cout << termo1;

    for (int i = 2; i <= n; i++) {
        cout << "," << termo2;
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    cout << endl;

    return 0;
}