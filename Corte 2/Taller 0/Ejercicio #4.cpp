#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    string nombre;
    string materia;
    double parcial_1;
    double parcial_2;
    double parcial_3;
    double promedio_parciales;
    double examen_final;
    double promedio_examen;
    double trabajo_final;
    double promedio_trabajo;
    double nota_final;
    
    cout << "Nombre: ";
    cin >> nombre;
    
    cout << "Materia: ";
    cin >> materia;
    cout << endl;
    
    cout << "Primero ingresa la nota de cada parcial";
    cout << endl << endl;
    
    cout << "Nota del parcial 1: ";
    cin >> parcial_1;
    
    cout << "Nota del parcial 2: ";
    cin >> parcial_2;
    
    cout << "Nota del parcial 3: ";
    cin >> parcial_3;
    cout << endl;
    
    cout << "Ahora ingresa la nota de tu examen final: "; 
    cin >> examen_final;
    cout << endl;
    
    cout << "Y por último ingresa la nota de tu trabajo final: ";
    cin >> trabajo_final;
    cout << endl;
    
    promedio_parciales = (((parcial_1 + parcial_2 + parcial_3)/3) * 0.55);
    promedio_examen = (examen_final * 0.30);
    promedio_trabajo = (trabajo_final * 0.15);
    nota_final = (promedio_trabajo + promedio_examen + promedio_parciales);
    
    cout << nombre << " tu nota final en " << materia << " es de " << nota_final;
    cout << endl;
    cout << endl;
    
    if (nota_final >= 3.0) {
        
        cout << "Por lo tanto APROBASTE, ¡Felicitaciones!";
        cout << endl;
    }
    
    else {
        
        cout << "Lastimosamente NO APROBASTE, ¡Esfuérzate un poco más!";
    }
}