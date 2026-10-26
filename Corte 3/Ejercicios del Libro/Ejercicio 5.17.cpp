#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int N;
    double suma = 0.0;
    int i = 1;

    
    cout << endl << " Ingresa el valor de N: ";
    cin >> N;

    
    while (i <= N) {
        
        suma = suma + (1.0 / (i * i * i));
        i = i + 1;
    }

    cout << fixed << setprecision(6);
    cout << endl << " Suma: " << suma << endl;

    return 0;
}