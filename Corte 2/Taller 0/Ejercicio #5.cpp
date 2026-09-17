#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    double c_hombres;
    double c_mujeres;
    double total_estudiantes;
    double p_hombres;
    double p_mujeres;
    
    
    cout << "Ingresa la cantidad de hombres que hay: ";
    cin >> c_hombres;
    
    cout << "Ingresa la cantidad de mujeres que hay: ";
    cin >> c_mujeres;
    cout << endl;
    
    total_estudiantes = (c_hombres + c_mujeres);
    p_hombres = ((c_hombres / total_estudiantes) * 100);
    p_mujeres = ((c_mujeres / total_estudiantes) * 100);
    
    cout << "El porcentaje total de estudiantes hombres es de " << p_hombres;
    cout << endl;
    cout << "Y el porcentaje total de estudiantes mujeres es de " << p_mujeres;
    
    
}