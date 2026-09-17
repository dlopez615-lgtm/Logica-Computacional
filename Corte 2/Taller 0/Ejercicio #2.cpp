#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    string nombre;
    double venta_1;
    double venta_2;
    double venta_3;
    double sueldo_base;
    double comision;
    double sueldo_final;
    
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << endl;
    
    cout << nombre << " ingresa el dinero que obtuviste en cada compra:" << endl;
    
    cout << "Venta 1: ";
    cin >> venta_1;
    
    cout << "Venta 2: ";
    cin >> venta_2;
    
    cout << "Venta 3: ";
    cin >> venta_3;
    
    comision = ((venta_1 + venta_2 + venta_3) * 0.10);
    sueldo_final = (sueldo_final + comision);
    cout << endl;
    
    cout << nombre << " el sueldo total que recibirás en el mes es de " << sueldo_final;
}