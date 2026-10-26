#include <iostream>

using namespace std;

int main() {
    
    int n;
    int invertido = 0;
    int digito;

   
    cout << endl << " Ingresa un numero entero positivo: ";
    cin >> n;

    
    int numeroOriginal = n;

    
    while (n > 0) {
        digito = n % 10;                     
        invertido = (invertido * 10) + digito; 
        n = n / 10;                          
    }

    
    cout << endl << " El numero " << numeroOriginal << " invertido es: " << invertido << endl;

    return 0;
}