#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;

int main()

{
    setlocale(LC_ALL, "es_ES");
    double radio;
    double longitud;
    double area;
    double pi = 3.14159265358979323846;
    
    cout << endl;
    cout << " Valor del Radio: ";
    cin >> radio;

    longitud = (2 * pi * radio );
    area = (pi * (pow (radio,2)));
    
    cout << endl;
    cout << " La longitud es de " << longitud << " cm y el área de " << area << " cm\u00B2";
    
}