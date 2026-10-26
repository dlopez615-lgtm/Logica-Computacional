#include <iostream>
#include <limits> 

using namespace std;

int main() {
    
    int N;

    
    cout << endl << " Ingresa la cantidad de numeros a procesar (N): ";
    cin >> N;

    
    if (N > 0) {
        double suma = 0;
        int contador = 1;
        
        double mayor = -numeric_limits<double>::infinity();
        double menor = numeric_limits<double>::infinity();
        double numeroActual;


        while (contador <= N) {
            cout << " Ingresa el numero " << contador << ": ";
            cin >> numeroActual;


            suma = suma + numeroActual;

 
            if (numeroActual > mayor) {
                mayor = numeroActual;
            }

            
            if (numeroActual < menor) {
                menor = numeroActual;
            }

            
            contador = contador + 1;
        }

        
        double media = suma / N;

        
        cout << "\n --- Resultados ---" << endl << endl;
        cout << " Mayor: " << mayor << endl;
        cout << " Menor: " << menor << endl;
        cout << " Media: " << media << endl;

    } else {
        cout << " El valor de N debe ser mayor a 0." << endl;
    }

    return 0;
}