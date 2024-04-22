#ifndef COMESTIBLE_H
#define COMESTIBLE_H

#include <string>
using namespace std;

class Comestible {
private:
    string nombre;
    string marca;
    int precio;
    int descuento;
    int cantidadInventario;
    string fechaVencimiento;
    int cantidadComprada;


public:
    Comestible();
    Comestible(string nombre, string marca, int precio, int descuento, int cantidadInventario, string fechaVencimiento);
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


#endif // COMESTIBLE_H
