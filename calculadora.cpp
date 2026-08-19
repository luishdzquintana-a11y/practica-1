#include <iostream>
using namespace std;

// Funcion para calcular el promedio
float calcularPromedio(float cal1, float cal2, float cal3) {
    return (cal1 + cal2 + cal3) / 3;
}

int main() {
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    // Solicitar las calificaciones
    cout << "Ingresa la calificacion 1: ";
    cin >> calificacion1;

    cout << "Ingresa la calificacion 2: ";
    cin >> calificacion2;

    cout << "Ingresa la calificacion 3: ";
    cin >> calificacion3;

    // Llamar a la funcion
    promedio = calcularPromedio(calificacion1, calificacion2, calificacion3);

    // Mostrar el promedio
    cout << "Promedio: " << promedio << endl;

    // Determinar si aprobo o reprobo
    if (promedio >= 6) {
        cout << "Resultado: APROBADO" << endl;
    } else {
        cout << "Resultado: REPROBADO" << endl;
    }

    return 0;
}