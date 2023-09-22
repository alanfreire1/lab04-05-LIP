#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool primo = true;

    if (n <= 1) {
        primo = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << "PRIMO" << endl;
    } else {
        cout << "NAO PRIMO" << endl;
    }

    return 0;
}
