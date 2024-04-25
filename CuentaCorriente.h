#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <string>
using namespace std;

class CuentaCorriente {
private:
    string nombre;
    string apellidos;
    string direccion;
    string telefono;
    double saldo;
    int numeroIdentificacion;
    int clave;

public:
    CuentaCorriente();
    CuentaCorriente(string, string, string, string, double, int, int);

    string getNombre();
    string getApellidos();
    string getDireccion();
    string getTelefono();
    double getSaldo();
    int getNumeroIdentificacion();
    int getClave();

    void setNombre(string);
    void setApellidos(string);
    void setDireccion(string);
    void setTelefono(string);
    void setSaldo(double);
    void setNumeroIdentificacion(int);
    void setClave(int);

    void ingresarDinero(int clave, double cantidad);
    void retirarDinero(int clave, double cantidad);
    void consultarCuenta();
    bool saldoNegativo();
    void cambiarClave(int numeroIdentificacion, int claveAnterior, int nuevaClave);
};

#endif
