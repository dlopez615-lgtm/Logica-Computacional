#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "spanish");
    double M_examen, M_tarea1, M_tarea2, M_tarea3;
    double P_Matematicas;
    double Nota_Final_Matematicas;
    double F_examen, F_tarea1, F_tarea2;
    double P_Fisica;
    double Nota_Final_Fisica;
    double Q_examen, Q_tarea1, Q_tarea2, Q_tarea3;
    double P_Quimica;
    double Nota_Final_Quimica;
    double Promedio_General;
    

    cout << "--- MATEMÁTICAS ---" << endl << endl;
    cout << "Examen: ";
    cin >> M_examen;
    cout << "Tarea 1: ";
    cin >> M_tarea1;
    cout << "Tarea 2: ";
    cin >> M_tarea2;
    cout << "Tarea 3: ";
    cin >> M_tarea3;
    cout << endl;
    
    cout << "--- FÍSICA ---" << endl << endl;
    cout << "Examen: ";
    cin >> F_examen;
    cout << "Tarea 1: ";
    cin >> F_tarea1;
    cout << "Tarea 2: ";
    cin >> F_tarea2;
    cout << endl;
    
    cout << "--- QUÍMICA ---" << endl << endl;
    cout << "Examen: ";
    cin >> Q_examen;
    cout << "Tarea 1: ";
    cin >> Q_tarea1;
    cout << "Tarea 2: ";
    cin >> Q_tarea2;
    cout << "Tarea 3: ";
    cin >> Q_tarea3;
    cout << endl;
    
    P_Matematicas = ((M_tarea1 + M_tarea2 + M_tarea3)/3);
    Nota_Final_Matematicas = ((P_Matematicas * 0.10) + (M_examen * 0.90));
    
    P_Fisica = ((F_tarea1 + F_tarea2)/2);
    Nota_Final_Fisica = ((F_examen * 0.80) + (P_Fisica * 0.20));
    
    P_Quimica = ((Q_tarea1 + Q_tarea2 + Q_tarea3)/3);
    Nota_Final_Quimica = ((Q_examen * 0.85) + (P_Quimica * 0.15));
    
    Promedio_General = ((Nota_Final_Matematicas + Nota_Final_Fisica + Nota_Final_Quimica)/3);
    
    if (Promedio_General >= 4.0) {
        
        cout << "--- PROMEDIO DE MATERIAS ---" << endl << endl;
        cout << "Matemáticas: " << Nota_Final_Matematicas << endl;
        cout << "Física: " << Nota_Final_Fisica << endl;
        cout << "Química: " << Nota_Final_Quimica;
        cout << endl;
        cout << endl;
        cout << "--- PROMEDIO GENERAL ---" << endl << endl;
        cout << "Tu promedio general es " << Promedio_General << " ¡FELICITACIONES, HAZ APROBADO!";
        
    }
    
    if (Promedio_General >= 3.0 && Promedio_General < 4.0) {
        
        cout << "--- PROMEDIO DE MATERIAS ---" << endl << endl;
        cout << "Matemáticas: " << Nota_Final_Matematicas << endl;
        cout << "Física: " << Nota_Final_Fisica << endl;
        cout << "Química: " << Nota_Final_Quimica;
        cout << endl;
        cout << endl;
        cout << "--- PROMEDIO GENERAL ---" << endl << endl;
        cout << "Tu promedio general es " << Promedio_General << ". Te alcanza para aprobar pero deberías esforzarte un poco más";
    }
    
    if (Promedio_General < 3.0) {
        
        cout << "--- PROMEDIO DE MATERIAS ---" << endl << endl;
        cout << "Matemáticas: " << Nota_Final_Matematicas << endl;
        cout << "Física: " << Nota_Final_Fisica << endl;
        cout << "Química: " << Nota_Final_Quimica;
        cout << endl;
        cout << endl;
        cout << "--- PROMEDIO GENERAL ---" << endl << endl;
        cout << "Tu promedio general es " << Promedio_General << ". Por lo tanto no te alcanza para aprobar";
    }
}