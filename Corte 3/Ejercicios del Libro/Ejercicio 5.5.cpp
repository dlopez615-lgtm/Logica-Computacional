#include <iostream>

using namespace std;

int main() {

    int base;
    int limite;
    int potencia = 1;

    cout << " Ingresa el valor de la base: ";
    cin >> base;

    cout << " Ingresa el valor del limite: ";
    cin >> limite;

    if (base <= 1) {
        cout << " La base debe ser mayor a 1 para generar potencias crecientes." << endl;
        return 1;
    }

    
    cout << "\n Las potencias de " << base << " menores que " << limite << " son: " ;

    
    while (potencia < limite) {
        cout << potencia << "  ";
        potencia = potencia * base;
    }

}