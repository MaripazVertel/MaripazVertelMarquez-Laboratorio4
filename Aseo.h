#ifndef ASEO_H
#define ASEO_H

#include <string>
using namespace std;

class Aseo {
private:
    string nombre;
    string marca;
    int precio;
    int cantidadInventario;
    int descuento;
    string material;
    int cantidadComprada;

public:
    Aseo();
    Aseo(string nombre, string marca, int precio, int cantidadInventario, int descuento, string material);
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

#endif // ASEO_H
