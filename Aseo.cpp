#include "Aseo.h"
#include <iostream>
using namespace std;

Aseo::Aseo() {}

Aseo::Aseo(string nombre, string marca, int precio, int cantidadInventario, int descuento, string material) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->cantidadInventario = cantidadInventario;
    this->descuento = descuento;
    this->material = material;
    this->cantidadComprada = 0;
}

void Aseo::mostrarInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: " << precio << endl;
    cout << "Cantidad en inventario: " << cantidadInventario << endl;
    cout << "Descuento: " << descuento << "%" << endl;
    cout << "Material: " << material << endl;
}

int Aseo::getPrecioConDescuento() {
    return precio * (100 - descuento) / 100;
}

int Aseo::getCantidadInventario() {
    return cantidadInventario;
}

bool Aseo::reducirInventario(int cantidad) {
    if (cantidad <= cantidadInventario) {
        cantidadInventario -= cantidad;
        cantidadComprada += cantidad;
        return true;
    }
    return false;
}

string Aseo::getNombre() {
    return nombre;
}


