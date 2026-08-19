 #include <iostream>
using namespace std;

// CONSTANTES
const float PRECIO_CAFE = 35;
const float PRECIO_SANDWICH = 65;
const float PRECIO_JUGO = 40;
const float PORCENTAJE_DESCUENTO = 0.10;

// FUNCION PARA MOSTRAR EL MENU
void mostrarMenu() {
    cout << "1. Cafe - $35" << endl;
    cout << "2. Sandwich - $65" << endl;
    cout << "3. Jugo - $40" << endl;
}

int main() {

    // VARIABLES
    int cantidadProductos;
    int opcion;
    float precio = 0;
    float subtotal = 0;
    float descuento = 0;
    float total = 0;

    // ENTRADA
    cout << "Cuantos productos deseas comprar? ";
    cin >> cantidadProductos;

    // CICLO FOR
    for (int i = 1; i <= cantidadProductos; i++) {

        cout << endl;
        cout << "PRODUCTO " << i << endl;

        mostrarMenu();

        cout << "Selecciona una opcion: ";
        cin >> opcion;

        // SWITCH
        switch (opcion) {

            case 1:
                precio = PRECIO_CAFE;
                break;

            case 2:
                precio = PRECIO_SANDWICH;
                break;

            case 3:
                precio = PRECIO_JUGO;
                break;

            default:
                cout << "Opcion no valida." << endl;
                precio = 0;
                break;
        }

        // ACUMULADOR
        subtotal = subtotal + precio;
    }

    // DESCUENTO
    if (subtotal > 150) {
        descuento = subtotal * PORCENTAJE_DESCUENTO;
    } else {
        descuento = 0;
    }

    // TOTAL
    total = subtotal - descuento;

    // RESULTADOS
    cout << endl;
    cout << "========================" << endl;
    cout << "RESUMEN DE COMPRA" << endl;
    cout << "========================" << endl;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}