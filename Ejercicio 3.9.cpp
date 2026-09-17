#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    setlocale(LC_ALL, "es_ES");
    double numero1;
    double numero2;
    double suma;
    
    cout << fixed << setprecision(2);
    
    cout << endl;
    cout << " Ingresa los datos en números decimal" << endl << endl;
    cout << " Número 1: ";
    cin >> numero1;
    cout << " Número 2: ";
    cin >> numero2;
    cout << endl;
    
    suma = (numero1 + numero2);
    
    cout << " El valor de la suma entre " << numero1 << " y " << numero2 << " es " << suma;
    
}