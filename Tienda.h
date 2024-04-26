#ifndef TIENDA_H
#define TIENDA_H

#include "Comestible.h"
#include "Electrodomesticos.h"
#include "Aseo.h"
#include "CuentaCorriente.h"
using namespace std;
class Tienda {
private:
    Comestible* comestible;
    Electrodomesticos* electrodomesticos;
    Aseo* aseo;

public:
    Tienda();
    void agregarProductoComestible(string nombre,string marca, int precio, int descuento, int cantidadInventario, string fechaVencimiento);
    void agregarProductoElectronico(string nombre, string marca, int precio, int cantidadInventario, int descuento, int garantiaMeses);
    void agregarProductoAseo(string nombre, string marca, int precio, int cantidadInventario, int descuento, string material);
    void mostrarProductos();
    bool realizarCompra();
    double imprimirRecibo();
    void pagar(CuentaCorriente& cuenta);
};


#endif // TIENDA_H
