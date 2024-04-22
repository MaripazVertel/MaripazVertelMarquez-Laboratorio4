#include "Tienda.h"
#include <iostream>
#include <iomanip>
using namespace std;

Tienda::Tienda() {
    comestible = nullptr;
    electrodomesticos = nullptr;
    aseo = nullptr;
}

void Tienda::agregarProductoComestible(string nombre, string marca, int precio, int descuento, int cantidadInventario, string fechaVencimiento) {
    comestible = new Comestible(nombre, marca, precio, descuento, cantidadInventario, fechaVencimiento);
}

void Tienda::agregarProductoElectronico(string nombre, string marca, int precio, int cantidadInventario, int descuento, int garantiaMeses) {
    electrodomesticos = new Electrodomesticos(nombre, marca, precio, cantidadInventario, descuento, garantiaMeses);
}

void Tienda::agregarProductoAseo(string nombre, string marca, int precio, int cantidadInventario, int descuento, string material) {
    aseo = new Aseo(nombre, marca, precio, cantidadInventario, descuento, material);
}

void Tienda::mostrarProductos() {
    cout << "Productos en la tienda:" << std::endl;
    if (comestible) {
        cout << "Comestibles:" << std::endl;
        comestible->mostrarInfo();
        cout << std::endl;
    }
    if (electrodomesticos) {
        cout << "Electronicos:" << std::endl;
        electrodomesticos->mostrarInfo();
        cout << std::endl;
    }
    if (aseo) {
        cout << "Productos de Aseo:" << std::endl;
        aseo->mostrarInfo();
        cout << std::endl;
    }
}

bool Tienda::realizarCompra() {
    bool comprar = true;
    while (comprar) {
        mostrarProductos();

        string nombreProducto;
        cout << "Ingrese el nombre del producto que desea comprar (o '0' para finalizar la compra): ";
        cin >> nombreProducto;

        if (nombreProducto == "0") {
            comprar = false;
            break;
        }


        int cantidad;
        cout << "Ingrese la cantidad que desea comprar: ";
        cin >> cantidad;
        if (comestible && nombreProducto == comestible->getNombre() && comestible->getCantidadInventario() >= cantidad) {
            comestible->reducirInventario(cantidad);
            cout << "Compra realizada con exito." << endl;
        } else if (electrodomesticos && nombreProducto == electrodomesticos->getNombre() && electrodomesticos->getCantidadInventario() >= cantidad) {
            electrodomesticos->reducirInventario(cantidad);
            cout << "Compra realizada con exito." << endl;
        } else if (aseo && nombreProducto == aseo->getNombre() && aseo->getCantidadInventario() >= cantidad) {
            aseo->reducirInventario(cantidad);
            cout << "Compra realizada con exito." << endl;
        } else {
            cout << "El producto seleccionado no esta disponible o no hay suficiente inventario." << endl;
        }
    }

    return true;
}

void Tienda::imprimirRecibo() {
    cout << "Recibo de Compra:" << endl;
    cout << left << setw(20) << "Nombre" << setw(10) << "Precio" << setw(10) << "Cantidad" << endl;

    double total = 0.0;

    if (comestible && comestible->getCantidadComprada() > 0) {
        total += comestible->getCantidadComprada() * comestible->getPrecio();
        cout << left << setw(20) << comestible->getNombre() << setw(10) << comestible->getPrecio() << setw(10) << comestible->getCantidadComprada() << endl;
    }
    if (electrodomesticos && electrodomesticos->getCantidadComprada() > 0) {
        total += electrodomesticos->getCantidadComprada() * electrodomesticos->getPrecio();
        cout << left << setw(20) << electrodomesticos->getNombre() << setw(10) << electrodomesticos->getPrecio() << setw(10) << electrodomesticos->getCantidadComprada() << endl;
    }
    if (aseo && aseo->getCantidadComprada() > 0) {
        total += aseo->getCantidadComprada() * aseo->getPrecio();
        cout << left << setw(20) << aseo->getNombre() << setw(10) << aseo->getPrecio() << setw(10) << aseo->getCantidadComprada() << endl;
    }

    cout << "Total a Pagar: $" << total << endl;
}
