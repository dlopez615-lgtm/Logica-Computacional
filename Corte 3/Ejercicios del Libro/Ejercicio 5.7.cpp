#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    double radio;
    double area;
    double volumen;
    const double PI = 3.141592653;

    
    cout << endl << " Ingrese el radio de la esfera: ";
    cin >> radio;

    
    area = 4 * PI * pow(radio, 2);
    volumen = (4.0 / 3.0) * PI * pow(radio, 3);

    
    cout << "\n --- Resultados ---" << endl << endl;
    cout << " Area: " << area << endl;
    cout << " Volumen: " << volumen << endl;

}