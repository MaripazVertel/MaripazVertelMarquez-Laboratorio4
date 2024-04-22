#include "Comestible.h"
#include <iostream>
using namespace std;

Comestible::Comestible() {}

Comestible::Comestible(string nombre, string marca, int precio, int descuento, int cantidadInventario,string fechaVencimiento) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->descuento = descuento;
    this->cantidadInventario = cantidadInventario;
    this->fechaVencimiento = fechaVencimiento;
    this->cantidadComprada = 0;
}

void Comestible::mostrarInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: " << precio << endl;
    cout << "Descuento: " << descuento << "%" << endl;
    cout << "Cantidad en inventario: " << cantidadInventario << endl;
    cout << "Fecha de vencimiento: " << fechaVencimiento << endl;

}

int Comestible::getPrecioConDescuento() {
    return precio * (100 - descuento) / 100;
}

int Comestible::getCantidadInventario() {
    return cantidadInventario;
}

bool Comestible::reducirInventario(int cantidad) {
    if (cantidad <= cantidadInventario) {
        cantidadInventario -= cantidad;
        cantidadComprada += cantidad;
        return true;
    }
    return false;
}
string Comestible::getNombre() {
    return nombre;

}

