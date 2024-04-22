#include <iostream>
#include "Tienda.h"
using namespace std;

int main() {
    Tienda tienda;

    tienda.agregarProductoComestible("Arroz", "MarcaA", 100, 5, 50, "2025-06");
    tienda.agregarProductoElectronico("Telefono", "MarcaB", 500, 10, 0, 12);
    tienda.agregarProductoAseo("Jabon", "MarcaC", 50, 20, 10, "Plastico");

    int opcion;
    do {
        cout << "Menu principal:" << endl;
        cout << "1. Mostrar productos en la tienda." << endl;
        cout << "2. Realizar compra." << endl;
        cout << "3. Salir." << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                tienda.mostrarProductos();
                break;
            case 2:
                tienda.realizarCompra();
                tienda.imprimirRecibo();
                break;
            case 3:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, ingrese nuevamente." << endl;
        }
    } while (opcion != 3);

    return 0;
}
