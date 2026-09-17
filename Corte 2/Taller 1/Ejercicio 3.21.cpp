#include <iostream>
#include <cctype>
using namespace std;

int main() {
    
    char tecla;
    
    cout << endl;
    cout << " Oprime cualquier tecla: ";
    cin.get(tecla);
    
    if (isalpha(tecla)) {
        
        cout << endl;
        cout << " La tecla que oprimiste es de carácter alfabético" << endl;
        
    } 
    
    else if (isdigit(tecla)) {
        
        cout << endl;
        cout << " La tecla que oprimiste es un número" << endl;
        
    } 
    
    else if (ispunct(tecla)) {
        
        cout << endl;
        cout << " La tecla que oprimiste es un carácter de puntuación" << endl;
        
    } 
    
    else if (!isprint(tecla)) {
        
        cout << endl;
        cout << " La tecla que oprimiste no produce un carácter visible en pantalla" << endl;
        
    } 
    
    else {
        
        cout << endl;
        cout << " Ingresaste un espacio o un símbolo especial" << endl;
    }
    
}