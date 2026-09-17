#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    setlocale(LC_ALL, "es_ES");
    double longitud;
    double ancho;
    double superficie;
    
    cout << fixed << setprecision(4);
    
    cout << " Ingresa los siguientes datos de la habitación: " << endl << endl;
    cout << " Longitud: ";
    cin >> longitud;
    cout << " Ancho: ";
    cin >> ancho;
    cout << endl;
    
    superficie = (longitud * ancho);
    
    cout << "El valor de la superficie de la habitación es " << superficie << " m\u00B2" << endl;
    
}