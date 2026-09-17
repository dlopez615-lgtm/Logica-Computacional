#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    string nombre;
    double total_compra;
    double total_pagar;
    double descuento;
    
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << endl;
    
    cout << "Ingresa el valor de tu compra: ";
    cin >> total_compra;
    cout << endl;
    
    descuento = (total_compra * 0.15);
    total_pagar = (total_compra - descuento);
    
    cout << "El descuento fue de " << descuento;
    cout << nombre << " por lo tanto, el total final que debes pagar por tu compra es de " << total_pagar;
    
    
}