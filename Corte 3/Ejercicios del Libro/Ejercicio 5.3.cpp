#include <iostream>

using namespace std;

int main() {
    
    int pos = 0;
    int neg = 0;
    int ceros = 0;
    int n;

    
    for (int i = 1; i <= 10; i++) {
        cout << " Ingresa el numero " << i << " de 10: ";
        cin >> n;

        
        if (n > 0) {
            pos = pos + 1;
        } else if (n < 0) {
            neg = neg + 1;
        } else {
            ceros = ceros + 1;
        }
    }

    
    cout << "\n --- Resultados ---" << endl;
    cout << endl << " Positivos: " << pos << endl;
    cout << " Negativos: " << neg << endl;
    cout << " Ceros: " << ceros << endl;

}