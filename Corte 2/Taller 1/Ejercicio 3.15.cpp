#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "es_ES");
    int mes;

    cout << endl;
    cout << " Ingresa el número del mes: ";
    cin >> mes; 
    
    if (mes == 2) {
        
        cout << endl;
        cout << " El mes " << mes << " tiene 28 días";
    }
    
    if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes  ==12) {
        
        cout << endl;
        cout << " El mes " << mes << " tiene 31 días";
        
    }
    
    else if (mes == 4 or mes == 6 or mes == 9 or mes == 11) {
        
        cout << endl;
        cout << " El mes " << mes << " tiene 30 días";
        
    }
    
}