#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    double numero = 7.123456;

    for (int i = 1; i < 7; i++){
        
        cout << fixed << setprecision(i);
        cout << numero << endl;
        
    }
}