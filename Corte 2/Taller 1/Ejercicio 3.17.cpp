#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "es_ES");
    double a;
    double b;
    
    cout << endl;
    cout << " Número 1: ";
    cin >> a;
    cout << " Número 2: ";
    cin >> b;
    cout << endl;
    
    if (a < b) {
        
        cout << " " << b << " es el número mayor";
        
    }
    
    else if (a > b) {
        
        cout <<  " " << a << " es el número mayor";
        
    }
    
    if (a == b) {
        
        cout << " Son el mismo número";
        
    }
}