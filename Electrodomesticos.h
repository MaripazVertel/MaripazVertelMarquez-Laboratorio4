#ifndef ELECTRODOMESTICOS_H
#define ELECTRODOMESTICOS_H

#include <string>
using namespace std;

class Electrodomesticos {
private:
    string nombre;
    string marca;
    int precio;
    int cantidadInventario;
    int descuento;
    int garantiaMeses;
    int cantidadComprada;

public:
    Electrodomesticos();
    Electrodomesticos(string nombre, string marca, int precio, int cantidadInventario, int descuento, int garantiaMeses);
    void mostrarInfo();
    int getPrecioConDescuento();
    int getCantidadInventario();
    bool reducirInventario(int cantidad);
    string getNombre();
    int getCantidadComprada() { return cantidadComprada; }
    int getPrecio() const {
            return precio;
        }
};

#endif // ELECTRODOMESTICOS_H

