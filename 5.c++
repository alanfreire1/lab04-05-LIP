#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a ;
    int soma = 0;
    
    for (int x= 10; x<=a ; x++){
        soma += 5*x + 8;
    }
    
    cout << soma << endl;

    return 0;
}