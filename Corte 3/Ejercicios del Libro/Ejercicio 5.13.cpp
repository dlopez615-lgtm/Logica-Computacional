#include <iostream>

using namespace std;

int main() {
    
    int N = 100;

    while (N <= 999) {
        
        int A = N / 100;        
        int B = (N / 10) % 10;  
        int C = N % 10;          

        
        int SumaCuadrados = (A * A) + (B * B) + (C * C);

        
        int Cociente = N / 3;

        if (SumaCuadrados == Cociente) {
            cout << endl << " Numero encontrado: " << N << endl;
        }

        N = N + 1;
    }

    return 0;
}