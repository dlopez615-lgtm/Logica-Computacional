#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    string nombre;
    double p_anual;
    double porcentaje_ginecologia;
    double porcentaje_traumatologia;
    double porcentaje_pediatria;
    
    cout << "Nombre: ";
    cin >> nombre;
    cout << endl;
    
    cout << "Ingresa el presupueso anual: ";
    cin >> p_anual;
    cout << endl;
    
    if (p_anual > 0) {
        
        porcentaje_ginecologia = (p_anual * 0.40);
        porcentaje_traumatologia = (p_anual * 0.30);
        porcentaje_pediatria = (p_anual * 0.30);
        cout << endl;
        
        cout << nombre << " el presupuesto para cada área es de: ";
        cout << endl;
        cout << endl;
        
        cout << "Ginecología: " << porcentaje_ginecologia; 
        cout << endl;
        cout << "Traumatología: " << porcentaje_traumatologia;
        cout << endl;
        cout << "Pediatría: " << porcentaje_pediatria;
        
    }
    
    else {
        
        cout << "El presupueso anual debe ser diferente de 0";
    }
    
    
    
}