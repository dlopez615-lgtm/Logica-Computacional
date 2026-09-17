#include <iostream>
using namespace std;

int main() {
    
    int anyo;
    int A, B, C, D, E, N;
    int dia;

    cout << endl;
    cout << " Ingresa el año: ";
    cin >> anyo;

 
    A = anyo % 19;
    B = anyo % 4;
    C = anyo % 7;
    D = (19 * A + 24) % 30;
    E = (2 * B + 4 * C + 6 * D + 5) % 7;
    N = 22 + D + E;
    
    cout << endl;

 
    if (N <= 31) {
        
        cout << " El domingo de Pascua es el " << N << " de marzo de " << anyo << endl;
        
    } 
    
    else {
        
        dia = (N - 31);
        cout << " El domingo de Pascua es el " << dia << " de abril de " << anyo << endl;
        
    }

}