#include <iostream>

using namespace std;

int main() {
    
    int suma = 0;
    int n;
    int i = 1;

    
    cout << endl << " Ingresa el valor de n: ";
    cin >> n;

    
    while (i <= n) {
        suma = suma + i;
        i = i + 1;
    }

    
    cout << endl << " Suma: " << suma << endl;

}