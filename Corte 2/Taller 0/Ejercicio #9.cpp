#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    string nombre;
    double p_articulo;
    double ganancia;
    double p_final;
    
    cout << "Nombre: ";
    cin >> nombre;
    cout << endl;
    
    cout << "Ingresa el precio original del artículo: ";
    cin >> p_articulo;
    
    ganancia = (p_articulo * 0.30);
    p_final = (p_articulo + ganancia);
    cout << endl;
    
    cout << nombre << " debes vender el artículo en " << p_final << " para obtener una ganancia del 30%";
    
}