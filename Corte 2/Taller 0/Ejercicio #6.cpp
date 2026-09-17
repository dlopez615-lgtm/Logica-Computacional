#include <iostream>
using namespace std;

int main()

{
    // Declaración de variables
    
    setlocale(LC_ALL, "spanish");
    string nombre;
    int a_actual, a_nacimiento;
    int m_actual, m_nacimiento;
    int d_actual, d_nacimiento;
    int edad_actual;
    int mes_actual;
    
    // Ingresar los datos del usuario
    
    cout << "Nombre: ";
    cin >> nombre;
    cout << endl;
    
    cout << nombre << " ingresa los siguientes datos";
    cout << endl << endl;
    
    cout << "Día de nacimiento: ";
    cin >> d_nacimiento;
    cout << "Mes de nacimiento (número): ";
    cin >> m_nacimiento;
    cout << "Año de nacimiento: ";
    cin >> a_nacimiento;
    cout << endl;
    
    cout << "Día actual: ";
    cin >> d_actual;
    cout << "Mes actual (número): ";
    cin >> m_actual;
    cout << "Año actual: ";
    cin >> a_actual;
    
    // Operaciones
    
    edad_actual = (a_actual - a_nacimiento);
    mes_actual = (m_actual - m_nacimiento);
    cout << endl;
    
    cout << nombre << " actualmente tienes " << edad_actual << " años y " << mes_actual << " meses";
    
    
}