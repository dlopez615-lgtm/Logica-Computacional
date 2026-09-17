#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    string nombre;
    double capital_inicial;
    double interes_mensual;
    double capital_final;
    
    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);
    
    cout << nombre << " ingresa el valor de tu capital inicial: ";
    cin >> capital_inicial;
    
    if (capital_inicial > 0) {
        
        interes_mensual = (capital_inicial * 0,02);
        capital_final = (interes_mensual + capital_inicial);
        
        cout << nombre << " tu capital final será de " << capital_final;
        
    }
    
    else {
        
        cout << "Tu capital inicial tiene que ser diferente de 0";
    }
}