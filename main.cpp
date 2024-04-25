 #include <iostream>
#include "Tienda.h"
#include "CuentaCorriente.h"
#include <string>
using namespace std;

void ingresarDatos(CuentaCorriente &datos) {
    string nombre, apellidos, direccion, telefono;
    double saldo;
    int numeroIdentificacion, clave;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    datos.setNombre(nombre);

    cout << "Ingrese los apellidos: ";
    getline(cin, apellidos);
    datos.setApellidos(apellidos);

    cout << "Ingrese la direccion: ";
    getline(cin, direccion);
    datos.setDireccion(direccion);

    cout << "Ingrese el telefono: ";
    getline(cin, telefono);
    datos.setTelefono(telefono);

    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;
    datos.setSaldo(saldo);

    cout << "Ingrese el numero de identificacion: ";
    cin >> numeroIdentificacion;
    datos.setNumeroIdentificacion(numeroIdentificacion);

    cout << "Ingrese la clave: ";
    cin >> clave;
    datos.setClave(clave);
}

int main() {
    CuentaCorriente cuenta;
    Tienda tienda;
    int clave, cantidad;

    ingresarDatos(cuenta);

    tienda.agregarProductoComestible("Arroz", "MarcaA", 100, 5, 50, "2025-06");
    tienda.agregarProductoElectronico("Telefono", "MarcaB", 500, 10, 0, 12);
    tienda.agregarProductoAseo("Jabon", "MarcaC", 50, 20, 10, "Plastico");

    int option;
    do {
        cout << "\nMenu principal:" << endl;
        cout << "1. Consultar cuenta" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Ingresar saldo" << endl;
        cout << "4. Cambiar clave" << endl;
        cout << "5. Saldo negativo/positivo" << endl;
        cout << "6. Mostrar productos en la tienda" << endl;
        cout << "7. Realizar compra" <<endl;
        cout << "8. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> option;

        switch (option) {
            case 1:
                cuenta.consultarCuenta();
                break;
            case 2:
                cout << "Introduzca la clave: ";
                cin >> clave;
                cout << "Introduzca la cantidad a retirar: ";
                cin >> cantidad;
                cuenta.retirarDinero(clave, cantidad);
                break;
            case 3:
                cout << "Introduzca la clave: ";
                cin >> clave;
                cout << "Introduzca la cantidad a ingresar: ";
                cin >> cantidad;
                cuenta.ingresarDinero(clave, cantidad);
                break;
            case 4:
                cout << "Introduzca el numero de identificacion: ";
                cin >> clave;
                cout << "Introduzca la clave anterior: ";
                cin >> cantidad;
                cout << "Introduzca la nueva clave: ";
                cin >> option;
                cuenta.cambiarClave(clave, cantidad, option);
                break;
            case 5:
                if (cuenta.saldoNegativo()) {
                    cout << "El saldo es negativo." << endl;
                } else {
                    cout << "El saldo no es negativo." << endl;
                }
                break;
            case 6:
                tienda.mostrarProductos();
                break;
            case 7:
                tienda.realizarCompra();
                tienda.imprimirRecibo();
                break;
            case 8:
                cout << "Adios!" << endl;
                break;
            default:
                cout << "Opcion invalida, por favor elija una opcion valida." << endl;
        }
    } while (option!= 8);

    return 0;
}


