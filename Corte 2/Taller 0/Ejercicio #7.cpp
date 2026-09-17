#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    string nombre;
    double c_pesos;
    double tasa_cambio;
    double dolares;
    
    cout << "Nombre: ";
    cin >> nombre;
    cout << endl;
    
    cout << "Ingresa la cantidad en pesos: ";
    cin >> c_pesos;
    
    cout << "Ingresa la tasa de cambio en dólares: ";
    cin >> tasa_cambio;
    
    dolares = (c_pesos / tasa_cambio);
    cout << endl;
    
    cout << nombre << " la equivalencia en dólares de " << c_pesos << " sería de " << dolares;
    
}