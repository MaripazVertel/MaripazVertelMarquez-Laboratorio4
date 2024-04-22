#include "Electrodomesticos.h"
#include <iostream>
using namespace std;

Electrodomesticos::Electrodomesticos() {}

Electrodomesticos::Electrodomesticos(string nombre, string marca, int precio, int cantidadInventario, int descuento, int garantiaMeses) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->cantidadInventario = cantidadInventario;
    this->descuento = descuento;
    this->garantiaMeses = garantiaMeses;
    this->cantidadComprada = 0;
}

void Electrodomesticos::mostrarInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: " << precio << endl;
    cout << "Cantidad en inventario: " << cantidadInventario << endl;
    cout << "Descuento: " << descuento << "%" << endl;
    cout << "Garantia: " << garantiaMeses << " meses" << endl;
}

int Electrodomesticos::getPrecioConDescuento() {
    return precio * (100 - descuento) / 100;
}

int Electrodomesticos::getCantidadInventario() {
    return cantidadInventario;
}

bool Electrodomesticos::reducirInventario(int cantidad) {
    if (cantidad <= cantidadInventario) {
        cantidadInventario -= cantidad;
        cantidadComprada += cantidad;
        return true;
    }
    return false;
}

string Electrodomesticos::getNombre() {
    return nombre;
}
