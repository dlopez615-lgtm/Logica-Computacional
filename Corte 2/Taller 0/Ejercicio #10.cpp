#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    double inversion_1;
    double inversion_2;
    double inversion_3;
    double porcentaje_1;
    double porcentaje_2;
    double porcentaje_3;
    double inversion_total;
    
    cout << "Ingresa los siguientes datos: ";
    cout << endl;
    cout << endl;
    
    cout << "Inversión 1: ";
    cin >> inversion_1;
    cout << "Inversión 2: ";
    cin >> inversion_2;
    cout << "Inversión 3: ";
    cin >> inversion_3;
    
    inversion_total = (inversion_1 + inversion_2 + inversion_3);
    porcentaje_1 = ((inversion_1 / inversion_total) * 100);
    porcentaje_2 = ((inversion_2 / inversion_total) * 100);
    porcentaje_3 = ((inversion_3 / inversion_total) * 100);
    cout << endl;
    
    cout << "La inversión total es de " << inversion_total << " por lo tanto:";
    cout << endl;
    cout << endl;
    cout << "La inversion 1 es de " << porcentaje_1 << endl;
    cout << "La inversion 2 es de " << porcentaje_2 << endl;
    cout << "La inversion 3 es de " << porcentaje_3 << endl;
    
    
    
}